// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <chrono>

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "FireMoveset.generated.h"

class AVisualEffect;
UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UFireMoveset : public UMovesetParent
{
	GENERATED_BODY()
	
protected:
	virtual void DefenceOffCooldown() { UMovesetParent::DefenceOffCooldown(); currentDefenceSelfDamage = 0.0f; }
	virtual void MovementOffCooldown() { UMovesetParent::MovementOffCooldown(); currentMovementSelfDamage = 0.0f; }
	virtual void CooldownOffCooldown() { UMovesetParent::CooldownOffCooldown(); currentCooldownSelfDamage = 0.0f; }

private:
	UPROPERTY(EditAnywhere, Category = Defence)
	TSubclassOf<class AVisualEffect> ShieldSprite;
	UPROPERTY(EditAnywhere, Category = Defence)
	float defenceSelfDamage = 1.0f;
	float currentDefenceSelfDamage = 0.0f;

	UPROPERTY(EditAnywhere, Category = Cooldown)
	TSubclassOf<class AElementalBrawlProjectile> mFireball;
	UPROPERTY(EditAnywhere, Category = Cooldown)
	float cooldownSelfDamage = 1.0f;
	float currentCooldownSelfDamage = 0.0f;

	float mWalkSpeedSave = -1.0f;
	UPROPERTY(EditAnywhere, Category = Movement)
	float mMovementBoost = 100.0f;
	UPROPERTY(EditAnywhere, Category = Movement)
	float movementSelfDamage = 1.0f;
	float currentMovementSelfDamage = 0.0f;


	FTimerHandle mTimeHandler;
	FTimerHandle mDefenceTimeHandler;
	FTimerHandle mMovementTimeHandler;
	std::chrono::steady_clock::time_point mStartTime;
	bool isCharging = false;

public:
	float damageBoost = 0.0f;
	UFireMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;

	virtual void DefenceAction() final;
	void StopDefence() {
		mCharecter->isFireShield = false; 
		GetWorld()->GetTimerManager().ClearTimer(mDefenceTimeHandler);
	}

	virtual void MovementAction() final;
	void StopMovementAction();

	virtual void CooldownAction() final;
};
