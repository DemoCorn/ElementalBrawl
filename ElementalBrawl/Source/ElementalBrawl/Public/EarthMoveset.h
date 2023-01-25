// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "EarthMoveset.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UEarthMoveset : public UMovesetParent
{
	GENERATED_BODY()
	
public:
	UEarthMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;
};
