// Fill out your copyright notice in the Description page of Project Settings.


#include "VisualEffect.h"
#include "Components/SphereComponent.h"

// Sets default values
AVisualEffect::AVisualEffect()
{
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVisualEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisualEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(parent->GetActorLocation());
}

void AVisualEffect::SetParent(AElementalBrawlCharacter* par)
{
	parent = par;
}