// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MeleeProjectile.h"
#include "AirBlock.generated.h"

/**
 * 
 */
UCLASS(config = Game)
class ELEMENTALBRAWL_API AAirBlock : public AMeleeProjectile
{
	GENERATED_BODY()
	
public:
	/** called when projectile hits something */
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) final;
};
