// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintGameInstanceSubsystem.h"

#ifdef BLUEPRINTSUBSYSTEMS_BlueprintGameInstanceSubsystem_generated_h
#error "BlueprintGameInstanceSubsystem.generated.h already included, missing '#pragma once' in BlueprintGameInstanceSubsystem.h"
#endif
#define BLUEPRINTSUBSYSTEMS_BlueprintGameInstanceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBlueprintGameInstanceSubsystem;
class UObject;

// ********** Begin Class UBlueprintGameInstanceSubsystem ******************************************
#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetDerived);


#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_CALLBACK_WRAPPERS
BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister();

#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintSubsystems"), Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintGameInstanceSubsystem)


#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintGameInstanceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintGameInstanceSubsystem(UBlueprintGameInstanceSubsystem&&) = delete; \
	UBlueprintGameInstanceSubsystem(const UBlueprintGameInstanceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameInstanceSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBlueprintGameInstanceSubsystem) \
	NO_API virtual ~UBlueprintGameInstanceSubsystem();


#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_14_PROLOG
#define FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintGameInstanceSubsystem;

// ********** End Class UBlueprintGameInstanceSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
