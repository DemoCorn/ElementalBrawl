// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/Explosion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosion() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AExplosion_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AExplosion();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void AExplosion::StaticRegisterNativesAExplosion()
	{
	}
	UClass* Z_Construct_UClass_AExplosion_NoRegister()
	{
		return AExplosion::StaticClass();
	}
	struct Z_Construct_UClass_AExplosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElementalBrawlProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Explosion.h" },
		{ "ModuleRelativePath", "Public/Explosion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosion_Statics::ClassParams = {
		&AExplosion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosion, 2352586120);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AExplosion>()
	{
		return AExplosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosion(Z_Construct_UClass_AExplosion, &AExplosion::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AExplosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
