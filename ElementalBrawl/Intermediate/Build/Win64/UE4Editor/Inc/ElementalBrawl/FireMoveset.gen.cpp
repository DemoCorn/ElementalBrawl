// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/FireMoveset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireMoveset() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UFireMoveset_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UFireMoveset();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AVisualEffect_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
// End Cross Module References
	void UFireMoveset::StaticRegisterNativesUFireMoveset()
	{
	}
	UClass* Z_Construct_UClass_UFireMoveset_NoRegister()
	{
		return UFireMoveset::StaticClass();
	}
	struct Z_Construct_UClass_UFireMoveset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShieldSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFireball_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFireball;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMovementBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMovementBoost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireMoveset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovesetParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireMoveset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Moveset" },
		{ "IncludePath", "FireMoveset.h" },
		{ "ModuleRelativePath", "Public/FireMoveset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireMoveset_Statics::NewProp_ShieldSprite_MetaData[] = {
		{ "Category", "Defence" },
		{ "ModuleRelativePath", "Public/FireMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFireMoveset_Statics::NewProp_ShieldSprite = { "ShieldSprite", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireMoveset, ShieldSprite), Z_Construct_UClass_AVisualEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFireMoveset_Statics::NewProp_ShieldSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireMoveset_Statics::NewProp_ShieldSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireMoveset_Statics::NewProp_mFireball_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/FireMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFireMoveset_Statics::NewProp_mFireball = { "mFireball", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireMoveset, mFireball), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFireMoveset_Statics::NewProp_mFireball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireMoveset_Statics::NewProp_mFireball_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireMoveset_Statics::NewProp_mMovementBoost_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FireMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireMoveset_Statics::NewProp_mMovementBoost = { "mMovementBoost", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireMoveset, mMovementBoost), METADATA_PARAMS(Z_Construct_UClass_UFireMoveset_Statics::NewProp_mMovementBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireMoveset_Statics::NewProp_mMovementBoost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireMoveset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireMoveset_Statics::NewProp_ShieldSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireMoveset_Statics::NewProp_mFireball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireMoveset_Statics::NewProp_mMovementBoost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireMoveset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireMoveset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireMoveset_Statics::ClassParams = {
		&UFireMoveset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFireMoveset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFireMoveset_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFireMoveset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireMoveset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireMoveset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireMoveset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireMoveset, 2940493608);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<UFireMoveset>()
	{
		return UFireMoveset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireMoveset(Z_Construct_UClass_UFireMoveset, &UFireMoveset::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("UFireMoveset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireMoveset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
