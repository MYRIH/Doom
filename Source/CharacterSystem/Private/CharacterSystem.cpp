// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterSystem.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FCharacterSystem"

void FCharacterSystem::StartupModule()
{
}

void FCharacterSystem::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCharacterSystem, CharacterSystem);