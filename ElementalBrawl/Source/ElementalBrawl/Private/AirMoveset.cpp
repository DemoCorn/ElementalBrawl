// Fill out your copyright notice in the Description page of Project Settings.


#include "AirMoveset.h"

UAirMoveset::UAirMoveset()
{
	mElement = element::air;
	mBasicAttackCooldown = 0.3f;
	PrimaryComponentTick.bCanEverTick = true;
}

void UAirMoveset::BasicAttack()
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
			projectile->mDamage = 1.0f;
			projectile->SetLifeSpan(0.2f);
			projectile->SetCharecter(mCharecter);

			mCharecter->LaunchCharacter((SpawnRotation.Vector()) * 500.0f, false, false);

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UAirMoveset::BasicAttackRelease()
{
}