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

	// Start charge up
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
	isCharging = false;

	// Spawn Projectile
	if (BasicAttackProjectile != nullptr)
	{
		auto endTime = std::chrono::steady_clock::now();

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->GetTimerManager().ClearTimer(mTimeHandler);

			// Calculate damage scaling by the time that has passed
			std::chrono::duration<float> elapsed = (endTime - mStartTime);
			UE_LOG(LogTemp, Log, TEXT("Time: %f"), elapsed.count());

			// Spawn coordinates
			const FRotator SpawnRotation = mCharecter->GetControlRotation();
			const FVector SpawnLocation = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + SpawnRotation.RotateVector(mCharecter->GunOffset);

			// Spawn params
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// Spawn projectile and set params
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(BasicAttackProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 2.0f + (3.0f * elapsed.count()) + damageBoost;
			damageBoost = 0.0f;
			projectile->Tags.Add("Projectile");

			// Cooldown setup
			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UFireMoveset::DefenceAction()
{
	if (!mDefenceAvailable)
	{
		mCharecter->TakeDamage(currentDefenceSelfDamage += defenceSelfDamage);
	}

	if (ShieldSprite != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// Spawn shield sprite
			AVisualEffect* shield = World->SpawnActor<AVisualEffect>(ShieldSprite);
			shield->SetParent(mCharecter);
			shield->SetLifeSpan(1.0f);
		}
	}
	mCharecter->isFireShield = true;
	
	// Cooldown setup
	mDefenceAvailable = false;
	GetWorld()->GetTimerManager().SetTimer(mDefenceTimeHandler, this, &UFireMoveset::StopDefence, 1.0f, false);
	GetWorld()->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UFireMoveset::DefenceOffCooldown, mDefenceCooldown, false);
}

void UFireMoveset::MovementAction()
{
	if (!mMovementAvailable)
	{
		mCharecter->TakeDamage(currentMovementSelfDamage += movementSelfDamage);
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		UCharacterMovementComponent* move = mCharecter->GetCharacterMovement();
		if (move == nullptr) { return; }

		// Set speeds
		if (mWalkSpeedSave <= 0.0f)
		{
			mWalkSpeedSave = move->MaxWalkSpeed;
		}
		move->MaxWalkSpeed = mMovementBoost;

		// Cooldown setup
		mMovementAvailable = false;
		World->GetTimerManager().SetTimer(mDefenceTimeHandler, this, &UFireMoveset::StopMovementAction, 0.5f, false);
		World->GetTimerManager().SetTimer(mDefenceCooldownHandler, this, &UFireMoveset::MovementOffCooldown, mMovementCooldown, false);
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
		mCharecter->TakeDamage(currentCooldownSelfDamage += cooldownSelfDamage);
	}

	// Spawn coordinates
	if (mFireball != nullptr)
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
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(mFireball, SpawnLocation, SpawnRotation, ActorSpawnParams);
			projectile->mDamage = 0.0f;
			projectile->Tags.Add("Projectile");

			// Cooldown setup
			World->GetTimerManager().SetTimer(mCooldownCooldownHandler, this, &UFireMoveset::CooldownOffCooldown, mCooldownCooldown, false);
		}
	}
}