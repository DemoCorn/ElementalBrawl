// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ElementalBrawlProjectile.h"
#include "Explosion.generated.h"

/**
 * 
 */
UCLASS()
class ELEMENTALBRAWL_API AExplosion : public AElementalBrawlProjectile
{
	GENERATED_BODY()
	
	void ResetHit() { canHit = true; GetWorld()->GetTimerManager().ClearTimer(mHitHandle); }

public:
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	FTimerHandle mHitHandle;
	float hitClock = 0.1f;
	bool canHit = true;
};
