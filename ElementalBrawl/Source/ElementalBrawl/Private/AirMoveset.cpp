// Fill out your copyright notice in the Description page of Project Settings.

#include "AirMoveset.h"
#include <GameFramework/CharacterMovementComponent.h>

UAirMoveset::UAirMoveset()
{
	mElement = element::air;
	mBasicAttackCooldown = 0.4f;
	mDefenceCooldown = 0.5f;
	mMovementCooldown = 3.0f;
	PrimaryComponentTick.bCanEverTick = true;
}

void UAirMoveset::BeginPlay()
{
	UMovesetParent::BeginPlay();
}

void UAirMoveset::HoverStop()
{ 
	mCharecter->GetCharacterMovement()->GravityScale = mHoverSave; 
}

void UAirMoveset::BasicAttack()
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
			projectile->mDamage = 1.0f;
			projectile->SetLifeSpan(0.2f);
			projectile->SetCharecter(mCharecter);
			projectile->Tags.Add("Projectile");

			// Launch Charecter
			mCharecter->LaunchCharacter((SpawnRotation.Vector()) * 500.0f, false, false);

			// Cooldown setup
			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UAirMoveset::BasicAttackRelease()
{
}

void UAirMoveset::DefenceAction()
{
	if (!mDefenceAvailable)
	{
		return;
	}

	// Spawn Projectile
	if (BlockProjectile != nullptr)
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

			// Spawn Projectile and set params
			AMeleeProjectile* projectile = World->SpawnActor<AMeleeProjectile>(BlockProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->SetLifeSpan(0.3f);
			projectile->SetCharecter(mCharecter);
			projectile->Tags.Add("Projectile");

			// Cooldown setup
			mDefenceAvailable = false;
			World->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UMovesetParent::DefenceOffCooldown, mDefenceCooldown, false);
		}
	}
}

void UAirMoveset::MovementAction()
{
	if (!mMovementAvailable)
	{
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// Stop player midair
		mHoverSave = mCharecter->GetCharacterMovement()->GravityScale;
		mCharecter->GetCharacterMovement()->GravityScale = 0.0f;
		mCharecter->GetCharacterMovement()->Velocity = { 0.0f, 0.0f, 0.0f };

		// Cooldown setup
		mMovementAvailable = false;
		World->GetTimerManager().SetTimer(mMovementCooldownHandler, this, &UMovesetParent::MovementOffCooldown, mMovementCooldown, false);
		World->GetTimerManager().SetTimer(mHoverTime, this, &UAirMoveset::HoverStop, 0.5f, false);
	}
}

void UAirMoveset::CooldownAction()
{
	if (!mCooldownAvailable)
	{
		return;
	}

	// Spawn Projectile
	if (CooldownProjectile != nullptr)
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

			// Spawn Projectile and set params
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(CooldownProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->Tags.Add("Projectile");

			// Cooldown setup
			mCooldownAvailable = false;
			World->GetTimerManager().SetTimer(mCooldownCooldownHandler, this, &UMovesetParent::CooldownOffCooldown, mCooldownCooldown, false);
		}
	}
}