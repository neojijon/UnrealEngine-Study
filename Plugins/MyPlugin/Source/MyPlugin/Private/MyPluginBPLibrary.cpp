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
	UE_LOG(LogTemp, Warning, TEXT(" MyPluginFunction �� ȣ��Ǿ����ϴ�."));

	return TEXT(" MyPluginFunction �� ȣ��Ǿ����ϴ�.");
}

