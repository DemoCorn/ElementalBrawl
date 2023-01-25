// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <chrono>

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "FireMoveset.generated.h"

UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UFireMoveset : public UMovesetParent
{
	GENERATED_BODY()
	
private:

	FTimerHandle mTimeHandler;
	std::chrono::steady_clock::time_point mStartTime;
	bool isCharging;

public:
	UFireMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;
};
