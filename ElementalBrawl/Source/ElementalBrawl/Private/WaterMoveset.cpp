// Fill out your copyright notice in the Description page of Project Settings.
#include "WaterMoveset.h"

#include "GameFramework/ProjectileMovementComponent.h"

UWaterMoveset::UWaterMoveset()
{
	mElement = element::water;
	PrimaryComponentTick.bCanEverTick = true;

	mMovementCooldown = 5.0f;
	mCooldownCooldown = 2.0f;
}

void UWaterMoveset::BasicAttack()
{
	if (!mBasicAttackAvailable)
	{
		return;
	}

	// try and fire a projectile
	if (BasicAttackProjectile != nullptr)
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
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(BasicAttackProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 5.0f;
			projectile->Tags.Add("Projectile");

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UWaterMoveset::BasicAttackRelease()
{
}

void UWaterMoveset::DefenceAction()
{
	if (!mDefenceAvailable)
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
			projectile->mDamage = 0.0f;
			projectile->SetLifeSpan(1.0f);
			projectile->SetCharecter(mCharecter);

			mDefenceAvailable = false;
			World->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UMovesetParent::DefenceOffCooldown, mDefenceCooldown, false);
		}
	}
}

void UWaterMoveset::MovementAction()
{
	if (!mMovementAvailable)
	{
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector facing = mCharecter->GetActorForwardVector();
		facing.Z += -0.75;

		mCharecter->LaunchCharacter((facing) * -750.0f, false, false);

		mMovementAvailable = false;
		World->GetTimerManager().SetTimer(mMovementCooldownHandler, this, &UMovesetParent::DefenceOffCooldown, mMovementCooldown, false);
	}
}

void UWaterMoveset::CooldownAction()
{
	if (!mCooldownAvailable)
	{
		return;
	}

	// try and fire a projectile
	if (mCooldownShot != nullptr)
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
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(mCooldownShot, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 5.0f;

			UProjectileMovementComponent* projectileMovement = projectile->GetProjectileMovement();
				projectileMovement->MaxSpeed = 10000.0f;
				projectileMovement->Velocity *= 3.0f;
				projectileMovement->InitialSpeed = 10000.0f;

			projectile->Tags.Add("Projectile");

			mCooldownAvailable = false;
			World->GetTimerManager().SetTimer(mCooldownCooldownHandler, this, &UMovesetParent::CooldownOffCooldown, mCooldownCooldown, false);
		}
	}
}