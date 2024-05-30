// Copyright Epic Games, Inc. All Rights Reserved.

#include "touch2GameMode.h"
#include "touch2Character.h"
#include "UObject/ConstructorHelpers.h"

Atouch2GameMode::Atouch2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
