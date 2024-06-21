// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SGA_2024_06_21_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta=(BindWidget)) 
	UButton* MyButton;

	UPROPERTY(meta = (BindWidget)) 
	UTextBlock* Btn_Text;
	
	UPROPERTY(meta = (BindWidget)) 
	UTextBlock* MyText;

	virtual void NativeConstruct() override;

	int32 nNumber;

	UFUNCTION()
	void OnlyMyButtonClicked();
	
};
