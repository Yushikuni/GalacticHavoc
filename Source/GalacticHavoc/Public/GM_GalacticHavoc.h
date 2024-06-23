// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BasePlayerCharacter.h"
#include "GM_GalacticHavoc.generated.h"

/**
 * Game Mode for Galactic Havoc Game
 */
UCLASS()
class GALACTICHAVOC_API AGM_GalacticHavoc : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

private:
	class ABasePlayerCharacter* Player;
	class AGalacticHavocPlayerController* GalacticHavocPlayerController;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float StartDelay = 3.f;

	void HandleGameStart();
	
};