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
			projectile->Tags.Add("Projectile");

			mCharecter->LaunchCharacter((SpawnRotation.Vector()) * 500.0f, false, false);

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
			AMeleeProjectile* projectile = World->SpawnActor<AMeleeProjectile>(BlockProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->SetLifeSpan(0.3f);
			projectile->SetCharecter(mCharecter);
			projectile->Tags.Add("Projectile");

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
		mHoverSave = mCharecter->GetCharacterMovement()->GravityScale;
		mCharecter->GetCharacterMovement()->GravityScale = 0.0f;
		mCharecter->GetCharacterMovement()->Velocity = { 0.0f, 0.0f, 0.0f };

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

	// try and fire a projectile
	if (CooldownProjectile != nullptr)
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
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(CooldownProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->Tags.Add("Projectile");

			mCooldownAvailable = false;
			World->GetTimerManager().SetTimer(mCooldownCooldownHandler, this, &UMovesetParent::CooldownOffCooldown, mCooldownCooldown, false);
		}
	}
}