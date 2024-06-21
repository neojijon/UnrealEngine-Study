// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

void UMyUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (MyButton != nullptr)
	{
		nNumber = 0;
		Btn_Text->SetText(FText::FromString(TEXT("위젯 UI Test")));
		MyButton->OnClicked.AddDynamic(this, &UMyUserWidget::OnlyMyButtonClicked);
	}

}

void UMyUserWidget::OnlyMyButtonClicked()
{
	if (MyText)
	{
		nNumber++;		
		UE_LOG(LogTemp, Warning, TEXT("Number : %d"), nNumber);
		MyText->SetText(FText::FromString(TEXT("버튼이 클릭되었습니다.!!! %d")));
	}
}
