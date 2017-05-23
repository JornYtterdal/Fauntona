// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Fauntona.h"
#include "FauntonaGameMode.h"
#include "FauntonaCharacter.h"

AFauntonaGameMode::AFauntonaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
