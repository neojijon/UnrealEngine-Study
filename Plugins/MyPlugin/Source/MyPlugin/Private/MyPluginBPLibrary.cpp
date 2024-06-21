// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyPluginBPLibrary.h"
#include "MyPlugin.h"

UMyPluginBPLibrary::UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMyPluginBPLibrary::MyPluginSampleFunction(float Param)
{
	return -1;
}

FString UMyPluginBPLibrary::MyPluginFunction(float Param)
{
	UE_LOG(LogTemp, Warning, TEXT(" MyPluginFunction 이 호출되었습니다."));

	return TEXT(" MyPluginFunction 이 호출되었습니다.");
}

