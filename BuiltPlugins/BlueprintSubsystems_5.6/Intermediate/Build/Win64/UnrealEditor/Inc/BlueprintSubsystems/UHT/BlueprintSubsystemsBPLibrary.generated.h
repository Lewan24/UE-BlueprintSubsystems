// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintSubsystemsBPLibrary.h"

#ifdef BLUEPRINTSUBSYSTEMS_BlueprintSubsystemsBPLibrary_generated_h
#error "BlueprintSubsystemsBPLibrary.generated.h already included, missing '#pragma once' in BlueprintSubsystemsBPLibrary.h"
#endif
#define BLUEPRINTSUBSYSTEMS_BlueprintSubsystemsBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintSubsystemsBPLibrary ********************************************
BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintSubsystemsBPLibrary_NoRegister();

#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintSubsystemsBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintSubsystemsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintSubsystemsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintSubsystemsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintSubsystems"), Z_Construct_UClass_UBlueprintSubsystemsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintSubsystemsBPLibrary)


#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintSubsystemsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintSubsystemsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintSubsystemsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSubsystemsBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintSubsystemsBPLibrary(UBlueprintSubsystemsBPLibrary&&) = delete; \
	UBlueprintSubsystemsBPLibrary(const UBlueprintSubsystemsBPLibrary&) = delete; \
	NO_API virtual ~UBlueprintSubsystemsBPLibrary();


#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_25_PROLOG
#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_28_INCLASS \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintSubsystemsBPLibrary;

// ********** End Class UBlueprintSubsystemsBPLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintSubsystemsBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
