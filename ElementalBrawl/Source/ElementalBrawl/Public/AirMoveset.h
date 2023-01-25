// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "AirMoveset.generated.h"

UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UAirMoveset : public UMovesetParent
{
	GENERATED_BODY()
	
public:
	UAirMoveset();

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;
};
