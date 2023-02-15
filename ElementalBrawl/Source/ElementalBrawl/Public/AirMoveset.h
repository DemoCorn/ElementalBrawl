// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "AirMoveset.generated.h"

UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UAirMoveset : public UMovesetParent
{
	GENERATED_BODY()

private:
	FTimerHandle mHoverTime;
	float mHoverSave = 0.0f;
	
public:
	UPROPERTY(EditAnywhere, Category = Defence)
	TSubclassOf<class AMeleeProjectile> BlockProjectile;

	UPROPERTY(EditAnywhere, Category = Cooldown)
	TSubclassOf<class AElementalBrawlProjectile> CooldownProjectile;

	void HoverStop();

	UAirMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;

	virtual void DefenceAction() final;
	virtual void MovementAction() final;
	virtual void CooldownAction() final;
};
