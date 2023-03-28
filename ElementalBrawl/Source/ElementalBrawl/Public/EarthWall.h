// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EarthWall.generated.h"

UCLASS(ClassGroup = (MoveSetItem), meta = (BlueprintSpawnableComponent))
class ELEMENTALBRAWL_API AEarthWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEarthWall();

	FTimerHandle mActiveTimeHandler;
	void Launch(FVector placement) 
	{
		direction = (placement - GetActorLocation()).GetSafeNormal(); 
		direction.Z = 0.0f;
		launched = true;
	}

	void Deactivate() 
	{ 
		SetActorHiddenInGame(true); 
		SetActorEnableCollision(false); 
		launched = false;
		floor = nullptr;
		GetWorld()->GetTimerManager().ClearTimer(mActiveTimeHandler); 
	}

	void StartDeactivate(float time) { GetWorld()->GetTimerManager().SetTimer(mActiveTimeHandler, this, &AEarthWall::Deactivate, time, false); }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float mDamage = 10.0f;

	UPROPERTY(EditAnywhere, Category = Movement)
	float moveSpeed = 1000.0f;
	
	bool launched = false;
	FVector direction = {0.0f,0.0f,0.0f};

	AActor* floor = nullptr;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	class UBoxComponent* TriggerCapsule;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, Category = "Collision")
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
