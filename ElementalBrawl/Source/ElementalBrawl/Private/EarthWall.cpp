// Fill out your copyright notice in the Description page of Project Settings.

#include "EarthWall.h"
#include "Components/BoxComponent.h"

// Sets default values
AEarthWall::AEarthWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(FName("TriggerVolume"));

	if (!ensure(TriggerVolume != nullptr)) return;

	RootComponent = TriggerVolume;

	TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AEarthWall::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AEarthWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEarthWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (launched)
	{
		SetActorLocation(GetActorLocation() + (direction * moveSpeed * DeltaTime));
	}
}

void AEarthWall::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("Ran Collision"));

	if (floor == nullptr)
	{
		floor = OtherActor;
		return;
	}

	if (OtherActor == floor)
	{
		return;
	}

	Deactivate();
}

void AEarthWall::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Ran overlap"));

	if (floor == nullptr)
	{
		floor = OtherActor;
		return;
	}

	if (OtherActor == floor)
	{
		return;
	}

	Deactivate();
}