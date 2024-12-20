// Copyright Epic Games, Inc. All Rights Reserved.

#include "Accerator_GameGameMode.h"
#include "Accerator_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAccerator_GameGameMode::AAccerator_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
