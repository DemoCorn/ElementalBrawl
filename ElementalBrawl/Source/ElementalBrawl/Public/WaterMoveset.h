// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "WaterMoveset.generated.h"

UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UWaterMoveset : public UMovesetParent
{
	GENERATED_BODY()

public:
	UWaterMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;
};
