// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GalacticHavocPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GALACTICHAVOC_API AGalacticHavocPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	void SetPlayerEnabledState(bool bPlayerEnabled);	
};
