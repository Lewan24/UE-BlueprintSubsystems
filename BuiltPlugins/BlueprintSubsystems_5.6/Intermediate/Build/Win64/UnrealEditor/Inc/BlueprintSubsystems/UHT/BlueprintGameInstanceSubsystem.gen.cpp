// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGameInstanceSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlueprintGameInstanceSubsystem() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem();
BLUEPRINTSUBSYSTEMS_API UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BlueprintSubsystems();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlueprintGameInstanceSubsystem Function Get *****************************
struct Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics
{
	struct BlueprintGameInstanceSubsystem_eventGet_Parms
	{
		UObject* WorldContextObject;
		UBlueprintGameInstanceSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Subsystems" },
		{ "Comment", "// Global access (Blueprint + C++)\n" },
		{ "ModuleRelativePath", "Public/BlueprintGameInstanceSubsystem.h" },
		{ "ToolTip", "Global access (Blueprint + C++)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGameInstanceSubsystem_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGameInstanceSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintGameInstanceSubsystem, nullptr, "Get", Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::BlueprintGameInstanceSubsystem_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::BlueprintGameInstanceSubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGameInstanceSubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlueprintGameInstanceSubsystem**)Z_Param__Result=UBlueprintGameInstanceSubsystem::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UBlueprintGameInstanceSubsystem Function Get *******************************

// ********** Begin Class UBlueprintGameInstanceSubsystem Function GetDerived **********************
struct Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics
{
	struct BlueprintGameInstanceSubsystem_eventGetDerived_Parms
	{
		UObject* WorldContextObject;
		UBlueprintGameInstanceSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Subsystems" },
		{ "ModuleRelativePath", "Public/BlueprintGameInstanceSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGameInstanceSubsystem_eventGetDerived_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGameInstanceSubsystem_eventGetDerived_Parms, ReturnValue), Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintGameInstanceSubsystem, nullptr, "GetDerived", Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::BlueprintGameInstanceSubsystem_eventGetDerived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::BlueprintGameInstanceSubsystem_eventGetDerived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGameInstanceSubsystem::execGetDerived)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlueprintGameInstanceSubsystem**)Z_Param__Result=UBlueprintGameInstanceSubsystem::GetDerived(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UBlueprintGameInstanceSubsystem Function GetDerived ************************

// ********** Begin Class UBlueprintGameInstanceSubsystem Function OnDeinitialize ******************
static FName NAME_UBlueprintGameInstanceSubsystem_OnDeinitialize = FName(TEXT("OnDeinitialize"));
void UBlueprintGameInstanceSubsystem::OnDeinitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintGameInstanceSubsystem_OnDeinitialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Subsystems" },
		{ "ModuleRelativePath", "Public/BlueprintGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintGameInstanceSubsystem, nullptr, "OnDeinitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBlueprintGameInstanceSubsystem Function OnDeinitialize ********************

// ********** Begin Class UBlueprintGameInstanceSubsystem Function OnInitialize ********************
static FName NAME_UBlueprintGameInstanceSubsystem_OnInitialize = FName(TEXT("OnInitialize"));
void UBlueprintGameInstanceSubsystem::OnInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintGameInstanceSubsystem_OnInitialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Subsystems" },
		{ "ModuleRelativePath", "Public/BlueprintGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintGameInstanceSubsystem, nullptr, "OnInitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBlueprintGameInstanceSubsystem Function OnInitialize **********************

// ********** Begin Class UBlueprintGameInstanceSubsystem ******************************************
void UBlueprintGameInstanceSubsystem::StaticRegisterNativesUBlueprintGameInstanceSubsystem()
{
	UClass* Class = UBlueprintGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get", &UBlueprintGameInstanceSubsystem::execGet },
		{ "GetDerived", &UBlueprintGameInstanceSubsystem::execGetDerived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem;
UClass* UBlueprintGameInstanceSubsystem::GetPrivateStaticClass()
{
	using TClass = UBlueprintGameInstanceSubsystem;
	if (!Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlueprintGameInstanceSubsystem"),
			Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.InnerSingleton,
			StaticRegisterNativesUBlueprintGameInstanceSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem_NoRegister()
{
	return UBlueprintGameInstanceSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class allowing creation of Blueprint-only GameInstance Subsystems.\n */" },
		{ "IncludePath", "BlueprintGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintGameInstanceSubsystem.h" },
		{ "ToolTip", "Base class allowing creation of Blueprint-only GameInstance Subsystems." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_Get, "Get" }, // 2817831163
		{ &Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_GetDerived, "GetDerived" }, // 4254519250
		{ &Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnDeinitialize, "OnDeinitialize" }, // 1427830235
		{ &Z_Construct_UFunction_UBlueprintGameInstanceSubsystem_OnInitialize, "OnInitialize" }, // 357523053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintSubsystems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::ClassParams = {
	&UBlueprintGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UBlueprintGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem.OuterSingleton;
}
UBlueprintGameInstanceSubsystem::UBlueprintGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameInstanceSubsystem);
UBlueprintGameInstanceSubsystem::~UBlueprintGameInstanceSubsystem() {}
// ********** End Class UBlueprintGameInstanceSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h__Script_BlueprintSubsystems_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGameInstanceSubsystem, UBlueprintGameInstanceSubsystem::StaticClass, TEXT("UBlueprintGameInstanceSubsystem"), &Z_Registration_Info_UClass_UBlueprintGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGameInstanceSubsystem), 3623603184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h__Script_BlueprintSubsystems_3258865941(TEXT("/Script/BlueprintSubsystems"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h__Script_BlueprintSubsystems_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintSubsystems_Source_BlueprintSubsystems_Public_BlueprintGameInstanceSubsystem_h__Script_BlueprintSubsystems_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
