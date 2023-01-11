// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElementalBrawlGameMode.h"
#include "ElementalBrawlHUD.h"
#include "ElementalBrawlCharacter.h"
#include "UObject/ConstructorHelpers.h"

AElementalBrawlGameMode::AElementalBrawlGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AElementalBrawlHUD::StaticClass();
}
