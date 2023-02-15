// Fill out your copyright notice in the Description page of Project Settings.


#include "Explosion.h"

void AExplosion::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && canHit)
	{
		if (OtherActor->Tags.Contains("Projectile") && !OtherActor->Tags.Contains("Player"))
		{
			return;
		}

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			canHit = false;
			World->GetTimerManager().SetTimer(mHitHandle, this, &AExplosion::ResetHit, hitClock, false);

			UE_LOG(LogTemp, Log, TEXT("Projectile Damage: %f"), mDamage);
		}
	}
}