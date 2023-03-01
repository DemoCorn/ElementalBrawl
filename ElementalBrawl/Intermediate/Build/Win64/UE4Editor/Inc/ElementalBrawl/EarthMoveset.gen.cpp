// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/EarthMoveset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEarthMoveset() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UEarthMoveset_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UEarthMoveset();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AEarthWall_NoRegister();
// End Cross Module References
	void UEarthMoveset::StaticRegisterNativesUEarthMoveset()
	{
	}
	UClass* Z_Construct_UClass_UEarthMoveset_NoRegister()
	{
		return UEarthMoveset::StaticClass();
	}
	struct Z_Construct_UClass_UEarthMoveset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Block;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallKickRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallKickRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWallPlacementRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWallPlacementRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEarthMoveset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovesetParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEarthMoveset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Moveset" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "EarthMoveset.h" },
		{ "ModuleRelativePath", "Public/EarthMoveset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEarthMoveset_Statics::NewProp_Block_MetaData[] = {
		{ "Category", "Defence" },
		{ "ModuleRelativePath", "Public/EarthMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEarthMoveset_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEarthMoveset, Block), Z_Construct_UClass_AEarthWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_Block_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_Block_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEarthMoveset_Statics::NewProp_WallKickRange_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/EarthMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEarthMoveset_Statics::NewProp_WallKickRange = { "WallKickRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEarthMoveset, WallKickRange), METADATA_PARAMS(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_WallKickRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_WallKickRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEarthMoveset_Statics::NewProp_mWallPlacementRange_MetaData[] = {
		{ "Category", "Defence" },
		{ "ModuleRelativePath", "Public/EarthMoveset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEarthMoveset_Statics::NewProp_mWallPlacementRange = { "mWallPlacementRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEarthMoveset, mWallPlacementRange), METADATA_PARAMS(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_mWallPlacementRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEarthMoveset_Statics::NewProp_mWallPlacementRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEarthMoveset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEarthMoveset_Statics::NewProp_Block,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEarthMoveset_Statics::NewProp_WallKickRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEarthMoveset_Statics::NewProp_mWallPlacementRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEarthMoveset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEarthMoveset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEarthMoveset_Statics::ClassParams = {
		&UEarthMoveset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEarthMoveset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEarthMoveset_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEarthMoveset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEarthMoveset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEarthMoveset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEarthMoveset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEarthMoveset, 3469605895);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<UEarthMoveset>()
	{
		return UEarthMoveset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEarthMoveset(Z_Construct_UClass_UEarthMoveset, &UEarthMoveset::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("UEarthMoveset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEarthMoveset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
