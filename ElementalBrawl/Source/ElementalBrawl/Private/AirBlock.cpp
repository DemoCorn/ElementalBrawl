// Fill out your copyright notice in the Description page of Project Settings.


#include "AirBlock.h"
#include "GameFramework/ProjectileMovementComponent.h"

void AAirBlock::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->Tags.Contains("Projectile"))
		{
			UProjectileMovementComponent* moveComp = OtherActor->FindComponentByClass<UProjectileMovementComponent>();

			if (moveComp != nullptr)
			{
				const FRotator Rotation = mCharecter->GetControlRotation();
				const FVector Location = ((mCharecter->GetMuzzleLocation() != nullptr) ? mCharecter->GetMuzzleLocation()->GetComponentLocation() : mCharecter->GetActorLocation()) + Rotation.RotateVector(mCharecter->GunOffset);

				SetActorLocationAndRotation(Location, Rotation, false, nullptr, ETeleportType::TeleportPhysics);
			}
		}

		Destroy();
	}
}