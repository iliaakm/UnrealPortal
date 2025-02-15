// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PortalBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPORTAL_API UPortalBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static bool IsPortalsOverlapped(AStaticMeshActor* PortalA, AStaticMeshActor* PortalB);
};
