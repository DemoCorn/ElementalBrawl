// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/ElementalBrawlHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementalBrawlHUD() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlHUD_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void AElementalBrawlHUD::StaticRegisterNativesAElementalBrawlHUD()
	{
	}
	UClass* Z_Construct_UClass_AElementalBrawlHUD_NoRegister()
	{
		return AElementalBrawlHUD::StaticClass();
	}
	struct Z_Construct_UClass_AElementalBrawlHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElementalBrawlHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementalBrawlHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ElementalBrawlHUD.h" },
		{ "ModuleRelativePath", "ElementalBrawlHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElementalBrawlHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementalBrawlHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElementalBrawlHUD_Statics::ClassParams = {
		&AElementalBrawlHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AElementalBrawlHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElementalBrawlHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElementalBrawlHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElementalBrawlHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElementalBrawlHUD, 2348029369);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AElementalBrawlHUD>()
	{
		return AElementalBrawlHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElementalBrawlHUD(Z_Construct_UClass_AElementalBrawlHUD, &AElementalBrawlHUD::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AElementalBrawlHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElementalBrawlHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
