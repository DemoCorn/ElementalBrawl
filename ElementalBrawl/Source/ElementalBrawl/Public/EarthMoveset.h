// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovesetParent.h"
#include "EarthWall.h"
#include "EarthMoveset.generated.h"

/**
 */
UCLASS(ClassGroup = (Moveset), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API UEarthMoveset : public UMovesetParent
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = Defence)
	TSubclassOf<class AEarthWall> Block = nullptr;

	UPROPERTY(EditAnywhere, Category = Movement)
		float WallKickRange = 150.0f;

	int next = 0;
	AEarthWall* BlockPool[5];
	void SpawnWall(FVector pos, FRotator rot);

	UPROPERTY(EditAnywhere, Category = Defence)
	float mWallPlacementRange = 100.0f;

public:
	UEarthMoveset();
	virtual void BeginPlay() final;

	virtual void BasicAttack() final;
	virtual void BasicAttackRelease() final;

	virtual void DefenceAction() final;
	virtual void MovementAction() final;
};
