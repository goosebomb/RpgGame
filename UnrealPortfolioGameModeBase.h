// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealPortfolioGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPORTFOLIO_API AUnrealPortfolioGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		
public:
	AUnrealPortfolioGameModeBase();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<class UUserWidget> InterfaceWidgetClass;
};
