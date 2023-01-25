// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterMoveset.h"

UWaterMoveset::UWaterMoveset()
{
	mElement = element::water;
	PrimaryComponentTick.bCanEverTick = true;
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