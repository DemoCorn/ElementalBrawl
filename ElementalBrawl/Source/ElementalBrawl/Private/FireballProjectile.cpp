// Fill out your copyright notice in the Description page of Project Settings.


#include "FireballProjectile.h"

void AFireballProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->Tags.Contains("Projectile"))
		{
			return;
		}

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			AElementalBrawlProjectile* projectile = World->SpawnActor<AElementalBrawlProjectile>(explosion, this->GetTransform());
		}

		Destroy();
	}
}