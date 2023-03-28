// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/FireballProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireballProjectile() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AFireballProjectile_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AFireballProjectile();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
// End Cross Module References
	void AFireballProjectile::StaticRegisterNativesAFireballProjectile()
	{
	}
	UClass* Z_Construct_UClass_AFireballProjectile_NoRegister()
	{
		return AFireballProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFireballProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_explosion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireballProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElementalBrawlProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FireballProjectile.h" },
		{ "ModuleRelativePath", "Public/FireballProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballProjectile_Statics::NewProp_explosion_MetaData[] = {
		{ "Category", "explosion" },
		{ "ModuleRelativePath", "Public/FireballProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireballProjectile_Statics::NewProp_explosion = { "explosion", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireballProjectile, explosion), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFireballProjectile_Statics::NewProp_explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireballProjectile_Statics::NewProp_explosion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireballProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireballProjectile_Statics::NewProp_explosion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireballProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireballProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireballProjectile_Statics::ClassParams = {
		&AFireballProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireballProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireballProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireballProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireballProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireballProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireballProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireballProjectile, 1573247298);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AFireballProjectile>()
	{
		return AFireballProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireballProjectile(Z_Construct_UClass_AFireballProjectile, &AFireballProjectile::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AFireballProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireballProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
