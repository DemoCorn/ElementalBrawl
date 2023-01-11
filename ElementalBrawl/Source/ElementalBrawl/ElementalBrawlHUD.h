// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ElementalBrawlHUD.generated.h"

UCLASS()
class AElementalBrawlHUD : public AHUD
{
	GENERATED_BODY()

public:
	AElementalBrawlHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

