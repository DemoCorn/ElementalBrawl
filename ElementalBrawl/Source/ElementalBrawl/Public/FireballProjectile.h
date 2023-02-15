// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ElementalBrawlProjectile.h"
#include "FireballProjectile.generated.h"

/**
 * 
 */
UCLASS()
class ELEMENTALBRAWL_API AFireballProjectile : public AElementalBrawlProjectile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = explosion)
	TSubclassOf<class AElementalBrawlProjectile> explosion;
	
public:
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
