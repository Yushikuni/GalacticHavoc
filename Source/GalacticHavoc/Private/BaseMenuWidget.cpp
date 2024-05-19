// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetTree.h"
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

	Overlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));

	UWidget* RootWidget = WidgetTree->RootWidget;
	if (RootWidget == nullptr)
	{
		WidgetTree->RootWidget = Overlay;
		RootWidget = Overlay;
		UE_LOG(LogTemp, Warning, TEXT("Created new RootWidget as Overlay"));
	}
	else
	{
		Cast<UOverlay>(RootWidget)->AddChild(Overlay);
		UE_LOG(LogTemp, Error, TEXT("RootWidget is not an Overlay"));
	}

	Border = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("Border"));
	Overlay->AddChild(Border);

	HorizontalBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("Horizontal Box"));
	Border->AddChild(HorizontalBox);

	VerticalBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("Vertical Box"));
	HorizontalBox->AddChild(VerticalBox);

	
	
	//Border = 
}
