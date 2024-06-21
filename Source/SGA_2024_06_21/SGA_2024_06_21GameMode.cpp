// Copyright Epic Games, Inc. All Rights Reserved.

#include "SGA_2024_06_21GameMode.h"
#include "SGA_2024_06_21Character.h"
#include "UObject/ConstructorHelpers.h"

ASGA_2024_06_21GameMode::ASGA_2024_06_21GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
