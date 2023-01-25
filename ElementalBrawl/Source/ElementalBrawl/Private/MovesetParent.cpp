// Fill out your copyright notice in the Description page of Project Settings.


#include "MovesetParent.h"

#include "Kismet/GameplayStatics.h"

namespace
{
	inline const char* ToString(element ele)
	{
		switch (ele)
		{
			case element::air:		return "air";
			case element::water:	return "water";
			case element::earth:	return "earth";
			case element::fire:		return "fire";
			case element::parent:	return "parent";
			default:				return "unkown";
		}
	}
}

// Sets default values for this component's properties
UMovesetParent::UMovesetParent()
{
	mElement = element::parent;
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UMovesetParent::BeginPlay()
{
	Super::BeginPlay();

	if (!isActiveMoveset)
	{
		DestroyComponent();
		return;
	}

	mCharecter = static_cast<AElementalBrawlCharacter*>(GetOwner());

	mCharecter->BindMoveset(this);

	if (mCharecter == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Didn't Work"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Moveset Attached"));
	}
}


// Called every frame
void UMovesetParent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UMovesetParent::BasicAttack()
{
	if (!mBasicAttackAvailable)
	{
		return;
	}

	// try and fire a projectile
	if (BasicAttackProjectile != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator SpawnRotation = mCharecter->GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + SpawnRotation.RotateVector(mCharecter->GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AElementalBrawlProjectile>(BasicAttackProjectile, SpawnLocation, SpawnRotation, ActorSpawnParams);

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &UMovesetParent::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

void UMovesetParent::BasicAttackRelease()
{
	UE_LOG(LogTemp, Log, TEXT("Detected Parent Release"));
}