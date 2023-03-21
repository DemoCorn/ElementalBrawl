// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/ProjectileMovementComponent.h"
#include "ShowTurret.h"

// Sets default values
AShowTurret::AShowTurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShowTurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShowTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mBasicAttackAvailable)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// Spawn params
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// Spawn projectile and set params
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(basicAttackProjectile, GetActorLocation(), shotDirection, ActorSpawnParams);
			projectile->Tags.Add("Projectile");

			UProjectileMovementComponent* projectileMovement = projectile->GetProjectileMovement();
			projectileMovement->MaxSpeed = mShotSpeed;

			mBasicAttackAvailable = false;
			World->GetTimerManager().SetTimer(mBasicAttackCooldownHandler, this, &AShowTurret::BasicAttackOffCooldown, mBasicAttackCooldown, false);
		}
	}
}

