

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ARAdvancedRecipeDataProvider.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UARAdvancedRecipeDataProvider : public UInterface
{
	GENERATED_BODY()
};

/**
 * Implement this on your recipe to offer Advanced Recipes features
 */
class ADVANCEDRECIPES_API IARAdvancedRecipeDataProvider
{
	GENERATED_BODY()

public:
	/**
	 * Multi-line compatible localized description explaining the behavior of the recipe to end users
	 */
	UFUNCTION(BlueprintNativeEvent)
	const FText GetDetailedDescription();
};
