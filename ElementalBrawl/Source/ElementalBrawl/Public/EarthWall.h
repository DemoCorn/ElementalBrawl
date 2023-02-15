// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EarthWall.generated.h"

UCLASS(ClassGroup = (MoveSetItem), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API AEarthWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEarthWall();

	FTimerHandle mActiveTimeHandler;

	void Deactivate() { SetActorHiddenInGame(true); SetActorEnableCollision(false); GetWorld()->GetTimerManager().ClearTimer(mActiveTimeHandler); }
	void StartDeactivate(float time) { GetWorld()->GetTimerManager().SetTimer(mActiveTimeHandler, this, &AEarthWall::Deactivate, time, false); }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
