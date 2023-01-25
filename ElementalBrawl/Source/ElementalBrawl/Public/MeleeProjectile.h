// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../ElementalBrawlCharacter.h"
#include "MeleeProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config = Game)
class ELEMENTALBRAWL_API AMeleeProjectile : public AActor
{
	GENERATED_BODY()
		
	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComp;
	AElementalBrawlCharacter* mCharecter = nullptr;

	/** Projectile movement component */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	//UProjectileMovementComponent* ProjectileMovement;


public:
	AMeleeProjectile();
	void SetCharecter(AElementalBrawlCharacter* chr) { mCharecter = chr; }

	float mDamage = 0.0f;

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	virtual void Tick(float deltaSeconds);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	//UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

};
