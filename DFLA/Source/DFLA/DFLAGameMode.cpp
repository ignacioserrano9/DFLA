// Copyright Epic Games, Inc. All Rights Reserved.

#include "DFLAGameMode.h"
#include "DFLACharacter.h"
#include "UObject/ConstructorHelpers.h"

ADFLAGameMode::ADFLAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
