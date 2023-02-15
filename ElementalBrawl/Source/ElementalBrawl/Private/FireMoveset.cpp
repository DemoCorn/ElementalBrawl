// Fill out your copyright notice in the Description page of Project Settings.

#include "FireMoveset.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "VisualEffect.h"

UFireMoveset::UFireMoveset()
{
	mElement = element::water;
	mBasicAttackCooldown = 0.1f;
	mDefenceCooldown = 5.0f;
	mMovementCooldown = 5.0f;
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
			projectile->mDamage = 2.0f + (3.0f * elapsed.count()) + damageBoost;
			damageBoost = 0.0f;
			projectile->Tags.Add("Projectile");

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UFireMoveset::DefenceAction()
{
	if (!mDefenceAvailable)
	{
		return;
	}

	if (ShieldSprite != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			AVisualEffect* shield = World->SpawnActor<AVisualEffect>(ShieldSprite);
			shield->SetParent(mCharecter);
			shield->SetLifeSpan(1.0f);
		}
	}
	mCharecter->isFireShield = true;
	
	GetWorld()->GetTimerManager().SetTimer(mDefenceTimeHandler, this, &UFireMoveset::StopDefence, 1.0f, false);
	GetWorld()->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UMovesetParent::DefenceOffCooldown, mDefenceCooldown, false);
}

void UFireMoveset::MovementAction()
{
	if (!mMovementAvailable)
	{
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		UCharacterMovementComponent* move = mCharecter->GetCharacterMovement();
		if (move == nullptr) { return; }

		mWalkSpeedSave = move->MaxWalkSpeed;
		move->MaxWalkSpeed = mMovementBoost;

		mMovementAvailable = false;
		World->GetTimerManager().SetTimer(mDefenceTimeHandler, this, &UFireMoveset::StopMovementAction, 0.5f, false);
		World->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UMovesetParent::MovementOffCooldown, mMovementCooldown, false);
	}
}

void UFireMoveset::StopMovementAction()
{
	mMovementAvailable = true;

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		UCharacterMovementComponent* move = mCharecter->GetCharacterMovement();
		if (move == nullptr) { return; }
		move->MaxWalkSpeed = mWalkSpeedSave;
	}
}

void UFireMoveset::CooldownAction()
{
	if (!mCooldownAvailable)
	{
		return;
	}

	// try and fire a projectile
	if (mFireball != nullptr)
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
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(mFireball, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->Tags.Add("Projectile");

			mCooldownAvailable = false;
			World->GetTimerManager().SetTimer(mCooldownCooldownHandler, this, &UMovesetParent::CooldownOffCooldown, mCooldownCooldown, false);
		}
	}
}