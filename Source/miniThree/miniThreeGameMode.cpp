// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "miniThreeGameMode.h"
#include "miniThreeCharacter.h"

AminiThreeGameMode::AminiThreeGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AminiThreeCharacter::StaticClass();	
}
