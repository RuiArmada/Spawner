// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpawnerGameMode.h"
#include "SpawnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpawnerGameMode::ASpawnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
