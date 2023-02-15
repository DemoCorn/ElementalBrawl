// Fill out your copyright notice in the Description page of Project Settings.


#include "AirCooldown.h"
#include "../ElementalBrawlCharacter.h"

void AAirCooldown::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->Tags.Contains("Projectile"))
		{
			return;
		}

		UWorld* const World = GetWorld();
		if (World != nullptr && OtherActor->Tags.Contains("Player"))
		{
			AElementalBrawlCharacter* charecter = static_cast<AElementalBrawlCharacter*>(OtherActor);

			charecter->LaunchCharacter({ 0.0f, 0.0f, 3000.0f }, false, true);
		}

		Destroy();
	}
}