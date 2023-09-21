// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstroChase3rdGameMode.h"
#include "AstroChase3rdCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAstroChase3rdGameMode::AAstroChase3rdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
