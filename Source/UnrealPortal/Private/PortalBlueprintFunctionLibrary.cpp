// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalBlueprintFunctionLibrary.h"
#include "Engine/StaticMeshActor.h"

bool UPortalBlueprintFunctionLibrary::IsPortalsOverlapped(AStaticMeshActor* PortalA, AStaticMeshActor* PortalB)
{
	FVector PortalAPosition = PortalA->GetTransform().GetLocation();
	FVector PortalBPosition = PortalB->GetTransform().GetLocation();
	
	FVector PortalASize = PortalA->GetStaticMeshComponent()->GetStaticMesh()->GetBounds().BoxExtent;
	FVector PortalBSize = PortalB->GetStaticMeshComponent()->GetStaticMesh()->GetBounds().BoxExtent;

	//check if the portals are overlapped
	if (PortalAPosition.X - PortalASize.X < PortalBPosition.X + PortalBSize.X &&
		PortalAPosition.X + PortalASize.X > PortalBPosition.X - PortalBSize.X &&
		PortalAPosition.Y - PortalASize.Y < PortalBPosition.Y + PortalBSize.Y &&
		PortalAPosition.Y + PortalASize.Y > PortalBPosition.Y - PortalBSize.Y &&
		PortalAPosition.Z - PortalASize.Z < PortalBPosition.Z + PortalBSize.Z &&
		PortalAPosition.Z + PortalASize.Z > PortalBPosition.Z - PortalBSize.Z)
	{
		return true;
	}
	
	return false;
}
