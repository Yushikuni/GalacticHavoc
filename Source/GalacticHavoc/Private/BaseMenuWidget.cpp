// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMenuWidget.h"
#include "Kismet/GameplayStatics.h"

void UBaseMenuWidget::OpenMenu()
{
	this->AddToViewport();
}

void UBaseMenuWidget::CloseMenu()
{
	this->RemoveFromParent();
}

void UBaseMenuWidget::QuitGame()
{
	//UGameplayStatics::OpenLevel(this, FName("L_MainMenu"));
}

void UBaseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeMenu();
}
void UBaseMenuWidget::InitializeMenu()
{
}
