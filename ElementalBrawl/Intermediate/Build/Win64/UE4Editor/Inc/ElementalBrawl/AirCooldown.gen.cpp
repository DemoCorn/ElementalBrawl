// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/AirCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirCooldown() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AAirCooldown_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AAirCooldown();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void AAirCooldown::StaticRegisterNativesAAirCooldown()
	{
	}
	UClass* Z_Construct_UClass_AAirCooldown_NoRegister()
	{
		return AAirCooldown::StaticClass();
	}
	struct Z_Construct_UClass_AAirCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElementalBrawlProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirCooldown_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AirCooldown.h" },
		{ "ModuleRelativePath", "Public/AirCooldown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirCooldown_Statics::ClassParams = {
		&AAirCooldown::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAirCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirCooldown, 2880749440);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AAirCooldown>()
	{
		return AAirCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirCooldown(Z_Construct_UClass_AAirCooldown, &AAirCooldown::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AAirCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
