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

	// try and fire a projectile
	if (BasicAttackMelee != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator SpawnRotation = mCharecter->GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + SpawnRotation.RotateVector(mCharecter->GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			AMeleeProjectile* projectile = World->SpawnActor<AMeleeProjectile>(BasicAttackMelee, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 5.0f;
			projectile->SetLifeSpan(1.0f);
			projectile->SetCharecter(mCharecter);

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

	if (Block != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator lookRotation = mCharecter->GetControlRotation();
			FVector spawnLocation = (lookRotation.Vector() * mWallPlacementRange) + mCharecter->GetTransform().GetLocation();

			FHitResult lineHit;
			bool hasLineHit = false; //World->LineTraceSingleByChannel(lineHit, mCharecter->GetTransform().GetLocation(), spawnLocation, ECollisionChannel::ECC_WorldStatic);

			if (!hasLineHit)
			{
				spawnLocation.Z = mCharecter->GetTransform().GetLocation().Z;
				hasLineHit = World->LineTraceSingleByChannel(lineHit, spawnLocation, { spawnLocation.X, spawnLocation.Y, spawnLocation.Z - 1000.0f }, ECollisionChannel::ECC_WorldStatic);
			}

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

	if (blockIndex != -1 && minDistance < WallKickRange)
	{
		FVector direction = FVector(mCharecter->GetActorLocation().X - BlockPool[blockIndex]->GetActorLocation().X, mCharecter->GetActorLocation().Y - BlockPool[blockIndex]->GetActorLocation().Y, 0.75f);
		direction.Normalize();

		//float xCheck = direction.X >= 0 ? direction.X : -direction.X;
		//float yCheck = direction.Y >= 0 ? direction.Y : -direction.Y;
		//
		//if (xCheck > yCheck)
		//{
		//	direction.X = direction.X >= 0 ? 1.0f : -1.0f;
		//	direction.Y = 0.0f;
		//}
		//else
		//{
		//	direction.Y = 0.0f;
		//	direction.Y = direction.Y >= 0 ? 1.0f : -1.0f;
		//}

		mCharecter->LaunchCharacter(direction * 1000.0f, true, true);
	}
}