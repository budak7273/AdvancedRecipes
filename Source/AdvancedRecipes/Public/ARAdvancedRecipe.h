#pragma once

#include "CoreMinimal.h"
#include "FGRecipe.h"
#include "ARAdvancedRecipeDataProvider.h"
#include "ARAdvancedRecipe.generated.h"

/**
 * Convenience class that implements IARAdvancedRecipeDataProvider intended to be used as a parent class for FGRecipes defined as blueprint assets.
 */
UCLASS(Blueprintable)
class ADVANCEDRECIPES_API UARAdvancedRecipe : public UFGRecipe, public IARAdvancedRecipeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin IARAdvancedRecipeDataProvider
	const virtual FText GetDetailedDescription_Implementation();
	//~ End IARAdvancedRecipeDataProvider

public:
	/**
	 * Multi-line compatible localized description explaining the behavior of the recipe to end users
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Advanced Recipe", meta = (Multiline = true))
	FText mDetailedDescription;
	
};
