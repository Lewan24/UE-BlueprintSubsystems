// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "BlueprintGameInstanceSubsystem.generated.h"

/**
 * Base class allowing creation of Blueprint-only GameInstance Subsystems.
 */
UCLASS(Blueprintable, Abstract, BlueprintType)
class BLUEPRINTSUBSYSTEMS_API UBlueprintGameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Blueprint Subsystems")
    void OnInitialize();

    UFUNCTION(BlueprintImplementableEvent, Category = "Blueprint Subsystems")
    void OnDeinitialize();

    virtual void Initialize(FSubsystemCollectionBase& Collection) override
    {
        Super::Initialize(Collection);
        OnInitialize();
    }

    virtual void Deinitialize() override
    {
        OnDeinitialize();
        Super::Deinitialize();
    }

    UFUNCTION(BlueprintPure, Category="Blueprint Subsystems", meta=(WorldContext="WorldContextObject"))
    static UBlueprintGameInstanceSubsystem* GetDerived(UObject* WorldContextObject);
    
    // Global access (Blueprint + C++)
    UFUNCTION(BlueprintPure, Category = "Blueprint Subsystems", meta = (WorldContext = "WorldContextObject"))
    static UBlueprintGameInstanceSubsystem* Get(UObject* WorldContextObject)
    {
        if (!WorldContextObject)
            return nullptr;

        UWorld* World = WorldContextObject->GetWorld();
        if (!World)
            return nullptr;

        UGameInstance* GI = World->GetGameInstance();
        if (!GI)
            return nullptr;

        // return the subsystem (works also for Blueprint-derived subsystem classes)
        return GI->GetSubsystem<UBlueprintGameInstanceSubsystem>();
    }
};
