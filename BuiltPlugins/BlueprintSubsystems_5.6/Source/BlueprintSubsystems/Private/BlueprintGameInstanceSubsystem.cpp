// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintGameInstanceSubsystem.h"

UBlueprintGameInstanceSubsystem* UBlueprintGameInstanceSubsystem::GetDerived(UObject* WorldContextObject)
{
	if (!WorldContextObject) return nullptr;

	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return nullptr;

	UGameInstance* GI = World->GetGameInstance();
	if (!GI) return nullptr;

	// Przejście po WSZYSTKICH subsystemach GI
	const TArray<UGameInstanceSubsystem*>& Subsystems = GI->GetSubsystemArrayCopy<UGameInstanceSubsystem>();

	for (UGameInstanceSubsystem* Sub : Subsystems)
	{
		if (Sub && Sub->IsA(UBlueprintGameInstanceSubsystem::StaticClass()))
		{
			return Cast<UBlueprintGameInstanceSubsystem>(Sub);
		}
	}

	return nullptr;
}
