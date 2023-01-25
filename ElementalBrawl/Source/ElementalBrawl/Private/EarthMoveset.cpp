// Fill out your copyright notice in the Description page of Project Settings.


#include "EarthMoveset.h"

UEarthMoveset::UEarthMoveset()
{
	mElement = element::earth;
	mBasicAttackCooldown = 1.5f;
	PrimaryComponentTick.bCanEverTick = true;
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