// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/AirMoveset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirMoveset() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UAirMoveset_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UAirMoveset();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AMeleeProjectile_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
// End Cross Module References
	void UAirMoveset::StaticRegisterNativesUAirMoveset()
	{
	}
	UClass* Z_Construct_UClass_UAirMoveset_NoRegister()
	{
		return UAirMoveset::StaticClass();
	}
	struct Z_Construct_UClass_UAirMoveset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlockProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CooldownProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAirMoveset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovesetParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirMoveset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Moveset" },
		{ "IncludePath", "AirMoveset.h" },
		{ "ModuleRelativePath", "Public/AirMoveset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirMoveset_Statics::NewProp_BlockProjectile_MetaData[] = {
		{ "Category", "Defence" },
		{ "ModuleRelativePath", "Public/AirMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAirMoveset_Statics::NewProp_BlockProjectile = { "BlockProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAirMoveset, BlockProjectile), Z_Construct_UClass_AMeleeProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAirMoveset_Statics::NewProp_BlockProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAirMoveset_Statics::NewProp_BlockProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirMoveset_Statics::NewProp_CooldownProjectile_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/AirMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAirMoveset_Statics::NewProp_CooldownProjectile = { "CooldownProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAirMoveset, CooldownProjectile), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAirMoveset_Statics::NewProp_CooldownProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAirMoveset_Statics::NewProp_CooldownProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAirMoveset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAirMoveset_Statics::NewProp_BlockProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAirMoveset_Statics::NewProp_CooldownProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAirMoveset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirMoveset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAirMoveset_Statics::ClassParams = {
		&UAirMoveset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAirMoveset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAirMoveset_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAirMoveset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAirMoveset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAirMoveset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAirMoveset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAirMoveset, 3443905448);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<UAirMoveset>()
	{
		return UAirMoveset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAirMoveset(Z_Construct_UClass_UAirMoveset, &UAirMoveset::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("UAirMoveset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAirMoveset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
