// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetTree.h"
#include "Blueprint/UserWidget.h"
#include "Components/Overlay.h"
#include "Components/Border.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"

void UBaseMenuWidget::OpenMenu()
{
	this->AddToViewport(); // Nastavte vyšší Z-order hodnotu
	UE_LOG(LogTemp, Warning, TEXT("Menu opened and added to viewport"));

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true;
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(TakeWidget());
		PlayerController->SetInputMode(InputMode);
		UE_LOG(LogTemp, Warning, TEXT("Mouse cursor enabled and input mode set to UI only"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerController not found"));
	}

}

void UBaseMenuWidget::CloseMenu()
{
	this->RemoveFromParent();
}

void UBaseMenuWidget::QuitGame()
{
	UGameplayStatics::OpenLevel(this, FName("L_MainMenu"));
}

void UBaseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeMenu();
}
void UBaseMenuWidget::InitializeMenu()
{
	UE_LOG(LogTemp, Warning, TEXT("InitializeMenu Called"));

	if (!WidgetTree) return;

	if (!Overlay)
	{
		Overlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));
		WidgetTree->RootWidget = Overlay;
	}

	if (!Border)
	{
		Border = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("Border"));
		Overlay->AddChild(Border);
	}

	if (!HorizontalBox)
	{
		HorizontalBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("Horizontal Box"));
		Border->AddChild(HorizontalBox);
	}

	if (!VerticalBox)
	{
		VerticalBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("Vertical Box"));
		HorizontalBox->AddChild(VerticalBox);
	}

	// Ujistìte se, že viditelnost je nastavena na Visible
	Overlay->SetVisibility(ESlateVisibility::Visible);
	Border->SetVisibility(ESlateVisibility::Visible);
	HorizontalBox->SetVisibility(ESlateVisibility::Visible);
	VerticalBox->SetVisibility(ESlateVisibility::Visible);

	// Nastavte interaktivitu pro widgety
	Overlay->SetIsEnabled(true);
	Border->SetIsEnabled(true);
	HorizontalBox->SetIsEnabled(true);
	VerticalBox->SetIsEnabled(true);
}
