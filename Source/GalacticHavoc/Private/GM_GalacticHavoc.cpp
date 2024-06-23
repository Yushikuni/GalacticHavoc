// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_GalacticHavoc.h"
#include "Kismet/GameplayStatics.h"

#include "GalacticHavocPlayerController.h"

void AGM_GalacticHavoc::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}


void AGM_GalacticHavoc::HandleGameStart()
{
	Player = Cast<ABasePlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	GalacticHavocPlayerController = Cast<AGalacticHavocPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	StartGame();
	
	if (GalacticHavocPlayerController)
	{
		GalacticHavocPlayerController->SetPlayerEnabledState(false);

		FTimerHandle PlayerEnableTimerHandle;
		FTimerDelegate PlayerEnableTimerDelegate = FTimerDelegate::CreateUObject(
			GalacticHavocPlayerController, &AGalacticHavocPlayerController::SetPlayerEnabledState, true);

		GetWorldTimerManager().SetTimer(PlayerEnableTimerHandle, PlayerEnableTimerDelegate, StartDelay, false);
	}
}
