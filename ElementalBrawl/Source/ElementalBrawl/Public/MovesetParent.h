// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../ElementalBrawlCharacter.h"
#include "../ElementalBrawlProjectile.h"
#include "MeleeProjectile.h"

#include "MovesetParent.generated.h"

enum element
{
	air,
	water,
	earth,
	fire,
	parent
};

UCLASS( ClassGroup=(Moveset), meta=(BlueprintSpawnableComponent) )
class ELEMENTALBRAWL_API UMovesetParent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovesetParent();

	void BasicAttackOffCooldown() { mBasicAttackAvailable = true; GetWorld()->GetTimerManager().ClearTimer(mBasicAttackCooldownHandler); }
	void DefenceOffCooldown() { mDefenceAvailable = true; GetWorld()->GetTimerManager().ClearTimer(mDefenceCooldownHandler); }
	void MovementOffCooldown() { mMovementAvailable = true; GetWorld()->GetTimerManager().ClearTimer(mMovementCooldownHandler); }
	void CooldownOffCooldown() { mCooldownAvailable = true; GetWorld()->GetTimerManager().ClearTimer(mCooldownCooldownHandler); }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	AElementalBrawlCharacter* mCharecter = nullptr;

	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AElementalBrawlProjectile> BasicAttackProjectile;
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AMeleeProjectile>			 BasicAttackMelee;

	UPROPERTY(EditAnywhere, Category = Active)
	bool isActiveMoveset = true;

	bool mBasicAttackAvailable = true;
	float mBasicAttackCooldown = 0.3f;

	bool mDefenceAvailable = true;
	float mDefenceCooldown = 0.3f;

	bool mMovementAvailable = true;
	float mMovementCooldown = 0.3f;

	bool mCooldownAvailable = true;
	float mCooldownCooldown = 0.3f;

	element mElement;

	FTimerHandle mBasicAttackCooldownHandler;
	FTimerHandle mDefenceCooldownHandler;
	FTimerHandle mMovementCooldownHandler;
	FTimerHandle mCooldownCooldownHandler;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void BasicAttack();
	virtual void BasicAttackRelease();

	virtual void DefenceAction();

	virtual void MovementAction();

	virtual void CooldownAction();
};
