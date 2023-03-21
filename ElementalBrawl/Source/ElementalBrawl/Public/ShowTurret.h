// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ElementalBrawlProjectile.h"
#include "GameFramework/Actor.h"
#include "ShowTurret.generated.h"

UCLASS()
class ELEMENTALBRAWL_API AShowTurret : public AActor
{
	GENERATED_BODY()
	
public:	
	virtual void BasicAttackOffCooldown() { mBasicAttackAvailable = true; GetWorld()->GetTimerManager().ClearTimer(mBasicAttackCooldownHandler); }

	// Sets default values for this actor's properties
	AShowTurret();

	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AElementalBrawlProjectile> basicAttackProjectile;

	UPROPERTY(EditAnywhere, Category = Projectile)
	FRotator shotDirection;

	UPROPERTY(EditAnywhere, Category = Projectile)
	float mShotSpeed = 100.0f;

	bool mBasicAttackAvailable = true;
	UPROPERTY(EditAnywhere, Category = Cooldown)
	float mBasicAttackCooldown = 0.3f;

	FTimerHandle mBasicAttackCooldownHandler;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
