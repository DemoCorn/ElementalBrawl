// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../ElementalBrawlCharacter.h"
#include "VisualEffect.generated.h"

class USphereComponent;
UCLASS()
class ELEMENTALBRAWL_API AVisualEffect : public AActor
{
	GENERATED_BODY()
	AElementalBrawlCharacter* parent = nullptr;

public:	
	// Sets default values for this actor's properties
	AVisualEffect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetParent(AElementalBrawlCharacter* par);
};
