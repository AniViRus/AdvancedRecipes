#include "ARAdvancedRecipeDataProvider.h"

UWorld* UARAdvancedRecipeDataProvider::GetGameWorld()
{
    return GEngine->GetCurrentPlayWorld(nullptr);
}
