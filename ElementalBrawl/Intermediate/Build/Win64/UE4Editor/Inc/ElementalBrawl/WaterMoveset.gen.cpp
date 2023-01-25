// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/WaterMoveset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterMoveset() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UWaterMoveset_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UWaterMoveset();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void UWaterMoveset::StaticRegisterNativesUWaterMoveset()
	{
	}
	UClass* Z_Construct_UClass_UWaterMoveset_NoRegister()
	{
		return UWaterMoveset::StaticClass();
	}
	struct Z_Construct_UClass_UWaterMoveset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterMoveset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovesetParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMoveset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Moveset" },
		{ "IncludePath", "WaterMoveset.h" },
		{ "ModuleRelativePath", "Public/WaterMoveset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterMoveset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterMoveset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaterMoveset_Statics::ClassParams = {
		&UWaterMoveset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterMoveset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMoveset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterMoveset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaterMoveset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaterMoveset, 286287385);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<UWaterMoveset>()
	{
		return UWaterMoveset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaterMoveset(Z_Construct_UClass_UWaterMoveset, &UWaterMoveset::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("UWaterMoveset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterMoveset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
