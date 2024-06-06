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
	this->AddToViewport();
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
}
