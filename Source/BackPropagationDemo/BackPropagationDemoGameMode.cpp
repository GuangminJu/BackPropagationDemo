// Copyright Epic Games, Inc. All Rights Reserved.

#include "BackPropagationDemoGameMode.h"
#include "BackPropagationDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABackPropagationDemoGameMode::ABackPropagationDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
