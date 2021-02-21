// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSschoolGameMode.h"
#include "FPSschoolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSschoolGameMode::AFPSschoolGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
