// Fill out your copyright notice in the Description page of Project Settings.


#include "FireMoveset.h"

UFireMoveset::UFireMoveset()
{
	mElement = element::water;
	mBasicAttackCooldown = 0.1f;
	PrimaryComponentTick.bCanEverTick = true;
}

void UFireMoveset::BasicAttack()
{
	if (!mBasicAttackAvailable)
	{
		return;
	}

	isCharging = true;
	mStartTime = std::chrono::steady_clock::now();

	GetWorld()->GetTimerManager().SetTimer(mTimeHandler, this, &UFireMoveset::BasicAttackRelease, 3.0f, false);
}

void UFireMoveset::BasicAttackRelease()
{
	if (!isCharging)
	{
		return;
	}
	// try and fire a projectile
	if (BasicAttackProjectile != nullptr)
	{
		auto endTime = std::chrono::steady_clock::now();

		isCharging = false;
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->GetTimerManager().ClearTimer(mTimeHandler);

			std::chrono::duration<float> elapsed = (endTime - mStartTime);
			UE_LOG(LogTemp, Log, TEXT("Time: %f"), elapsed.count());

			const FRotator SpawnRotation = mCharecter->GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + SpawnRotation.RotateVector(mCharecter->GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(BasicAttackProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 2.0f + (3.0f * elapsed.count());
			projectile->Tags.Add("Projectile");

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}