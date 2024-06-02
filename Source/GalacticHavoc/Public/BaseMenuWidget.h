// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseMenuWidget.generated.h"

/**
 * This is template class for WBP Menus and screens such as Dead screen and Win screen
 */
UCLASS()
class GALACTICHAVOC_API UBaseMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void OpenMenu();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void CloseMenu();

	UFUNCTION(BlueprintCallable, Category = "Menu")
	void QuitGame();

	virtual void InitializeMenu();

protected:
	virtual void NativeConstruct() override;

private:
	UPROPERTY(/*meta = (BindWidget)*/)
	class UOverlay* Overlay;
	
	UPROPERTY(/*meta = (BindWidget)*/)
	class UBorder* Border;
	
	UPROPERTY(/*meta = (BindWidget)*/)
	class UHorizontalBox* HorizontalBox;

	UPROPERTY(/*meta = (BindWidget)*/)
	class UVerticalBox* VerticalBox;
};
