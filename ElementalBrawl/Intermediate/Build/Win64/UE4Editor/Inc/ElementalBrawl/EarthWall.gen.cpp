// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/EarthWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEarthWall() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AEarthWall_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AEarthWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void AEarthWall::StaticRegisterNativesAEarthWall()
	{
	}
	UClass* Z_Construct_UClass_AEarthWall_NoRegister()
	{
		return AEarthWall::StaticClass();
	}
	struct Z_Construct_UClass_AEarthWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEarthWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarthWall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MoveSetItem" },
		{ "IncludePath", "EarthWall.h" },
		{ "ModuleRelativePath", "Public/EarthWall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEarthWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEarthWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEarthWall_Statics::ClassParams = {
		&AEarthWall::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEarthWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEarthWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEarthWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEarthWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEarthWall, 1185723868);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AEarthWall>()
	{
		return AEarthWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEarthWall(Z_Construct_UClass_AEarthWall, &AEarthWall::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AEarthWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEarthWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
