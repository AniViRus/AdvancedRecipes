#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ARAdvancedRecipeDataProvider.generated.h"

UCLASS ()
class ADVANCEDRECIPES_API UARAdvancedRecipeDataProvider : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static UWorld* GetGameWorld();
};
