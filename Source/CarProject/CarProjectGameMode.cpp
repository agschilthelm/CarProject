// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CarProjectGameMode.h"
#include "CarProjectPawn.h"
#include "CarProjectHud.h"

ACarProjectGameMode::ACarProjectGameMode()
{
	DefaultPawnClass = ACarProjectPawn::StaticClass();
	HUDClass = ACarProjectHud::StaticClass();
}
