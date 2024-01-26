// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedRecipes.h"

#define LOCTEXT_NAMESPACE "FAdvancedRecipesModule"

void FAdvancedRecipesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAdvancedRecipesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAdvancedRecipesModule, AdvancedRecipes)