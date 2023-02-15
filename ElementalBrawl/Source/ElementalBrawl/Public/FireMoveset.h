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
	
private:
	UPROPERTY(EditAnywhere, Category = Defence)
	TSubclassOf<class AVisualEffect> ShieldSprite;

	UPROPERTY(EditAnywhere, Category = Cooldown)
	TSubclassOf<class AElementalBrawlProjectile> mFireball;

	FTimerHandle mTimeHandler;
	FTimerHandle mDefenceTimeHandler;
	FTimerHandle mMovementTimeHandler;
	std::chrono::steady_clock::time_point mStartTime;
	bool isCharging = false;

	float mWalkSpeedSave = 0.0f;
	UPROPERTY(EditAnywhere, Category = Movement)
	float mMovementBoost = 100.0f;

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
