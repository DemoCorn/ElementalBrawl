// Fill out your copyright notice in the Description page of Project Settings.


#include "MovesetParent.h"

// Sets default values for this component's properties
UMovesetParent::UMovesetParent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UMovesetParent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UMovesetParent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

