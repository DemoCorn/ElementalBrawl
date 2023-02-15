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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCooldownShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCooldownShot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMoveset_Statics::NewProp_mCooldownShot_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/WaterMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterMoveset_Statics::NewProp_mCooldownShot = { "mCooldownShot", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaterMoveset, mCooldownShot), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWaterMoveset_Statics::NewProp_mCooldownShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMoveset_Statics::NewProp_mCooldownShot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterMoveset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMoveset_Statics::NewProp_mCooldownShot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterMoveset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterMoveset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaterMoveset_Statics::ClassParams = {
		&UWaterMoveset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterMoveset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMoveset_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UWaterMoveset, 3098469881);
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
