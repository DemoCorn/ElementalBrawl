// Fill out your copyright notice in the Description page of Project Settings.

#include <limits>
#include <Math/Vector.h>
#include "EarthMoveset.h"

UEarthMoveset::UEarthMoveset()
{
	mElement = element::earth;
	mBasicAttackCooldown = 1.5f;
	mDefenceCooldown = 5.0f;
	PrimaryComponentTick.bCanEverTick = true;
}

void UEarthMoveset::BeginPlay()
{
	UMovesetParent::BeginPlay();

	if (Block != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			for (int i = 0; i < 5; ++i)
			{
				BlockPool[i] = World->SpawnActor<AEarthWall>(Block, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f});
				BlockPool[i]->SetActorHiddenInGame(true);
				BlockPool[i]->SetActorEnableCollision(false);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("BeginPlay ran before the world was made"));
		}
	}
}

void UEarthMoveset::SpawnWall(FVector pos, FRotator rot)
{
	BlockPool[next]->SetActorLocationAndRotation(pos, rot, false, nullptr, ETeleportType::ResetPhysics);
	BlockPool[next]->SetActorHiddenInGame(false);
	BlockPool[next]->SetActorEnableCollision(true);
	BlockPool[next++]->StartDeactivate(20.0f);
}

void UEarthMoveset::BasicAttack()
{
	if (!mBasicAttackAvailable)
	{
		return;
	}

	// Spawn Projectile
	if (BasicAttackMelee != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// Spawn coordinates
			const FRotator SpawnRotation = mCharecter->GetControlRotation();
			const FVector SpawnLocation = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + SpawnRotation.RotateVector(mCharecter->GunOffset);

			// Spawn params
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// Spawn projectile and set params
			AMeleeProjectile* projectile = World->SpawnActor<AMeleeProjectile>(BasicAttackMelee, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 5.0f;
			projectile->SetLifeSpan(1.0f);
			projectile->SetCharecter(mCharecter);

			// Cooldown setup
			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UEarthMoveset::BasicAttackRelease()
{
}

void UEarthMoveset::DefenceAction()
{
	if (!mDefenceAvailable)
	{
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// Spawn coordinates
		const FRotator lookRotation = mCharecter->GetControlRotation();
		FVector spawnLocation = (lookRotation.Vector() * mWallPlacementRange) + mCharecter->GetTransform().GetLocation();

		// get a line trace from player to the position they're looking at
		FHitResult lineHit;
		bool hasLineHit = World->LineTraceSingleByChannel(lineHit, mCharecter->GetTransform().GetLocation(), spawnLocation, ECollisionChannel::ECC_WorldStatic,
			{"Wall Placement", false, mCharecter});

		// If the line trace fails to hit anything, instead try to find a place to spawn the wall at the max distance
		if (!hasLineHit)
		{
			spawnLocation.Z = mCharecter->GetTransform().GetLocation().Z;
			hasLineHit = World->LineTraceSingleByChannel(lineHit, spawnLocation, { spawnLocation.X, spawnLocation.Y, spawnLocation.Z - 1000.0f }, ECollisionChannel::ECC_WorldStatic);
		}

		// Spawn the wall from the object pool
		if (hasLineHit)
		{
			FVector wallSpawnLocation = lineHit.Location;
			wallSpawnLocation.Z += 150 * lineHit.Actor->GetTransform().GetScale3D().Z;
			const FRotator wallLookRotation = { 0.0f, lookRotation.Yaw, lookRotation.Roll };

			SpawnWall(wallSpawnLocation, wallLookRotation);

			mDefenceAvailable = false;
			World->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UMovesetParent::DefenceOffCooldown, mDefenceCooldown, false);
		}
	}
}

void UEarthMoveset::MovementAction()
{
	if (!mMovementAvailable)
	{
		return;
	}

	float minDistance = std::numeric_limits<float>::max();
	float currentDistance;
	int blockIndex = -1;

	// Find the nearest active wall
	for (int i = 0; i < 5; ++i)
	{
		if (BlockPool[i]->IsHidden())
		{
			continue;
		}

		currentDistance = FVector::Dist(mCharecter->GetActorLocation(), BlockPool[i]->GetActorLocation());

		if (currentDistance < minDistance)
		{
			minDistance = currentDistance;
			blockIndex = i;
		}
	}

	// Launch charecter off the wall
	if (blockIndex != -1 && minDistance < WallKickRange)
	{
		FVector direction = FVector(mCharecter->GetActorLocation().X - BlockPool[blockIndex]->GetActorLocation().X, mCharecter->GetActorLocation().Y - BlockPool[blockIndex]->GetActorLocation().Y, 0.75f);
		direction.Normalize();

		mCharecter->LaunchCharacter(direction * 1000.0f, true, true);
	}
}

void UEarthMoveset::CooldownAction()
{
	if (!mCooldownAvailable)
	{
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		const FRotator lookRotation = mCharecter->GetControlRotation();
		FVector spawnLocation = (lookRotation.Vector() * mWallPlacementRange) + mCharecter->GetTransform().GetLocation();

		FHitResult lineHit;
		bool hasLineHit = World->LineTraceSingleByChannel(lineHit, mCharecter->GetTransform().GetLocation(), spawnLocation, ECollisionChannel::ECC_WorldStatic,
			{ "Wall Placement", false, mCharecter });

		if (!hasLineHit)
		{
			spawnLocation.Z = mCharecter->GetTransform().GetLocation().Z;
			hasLineHit = World->LineTraceSingleByChannel(lineHit, spawnLocation, { spawnLocation.X, spawnLocation.Y, spawnLocation.Z - 1000.0f }, ECollisionChannel::ECC_WorldStatic);
		}

		if (hasLineHit)
		{
			for (int i = 0; i < 5; ++i)
			{
				if (BlockPool[i]->IsHidden())
				{
					continue;
				}

				BlockPool[i]->Launch(lineHit.Location);
			}
		}
	}
}