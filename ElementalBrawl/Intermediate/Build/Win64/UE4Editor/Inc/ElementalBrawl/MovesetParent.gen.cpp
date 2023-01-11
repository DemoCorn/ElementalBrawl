// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/MovesetParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesetParent() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_UMovesetParent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void UMovesetParent::StaticRegisterNativesUMovesetParent()
	{
	}
	UClass* Z_Construct_UClass_UMovesetParent_NoRegister()
	{
		return UMovesetParent::StaticClass();
	}
	struct Z_Construct_UClass_UMovesetParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesetParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Moveset" },
		{ "IncludePath", "MovesetParent.h" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesetParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesetParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesetParent_Statics::ClassParams = {
		&UMovesetParent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovesetParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovesetParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovesetParent, 1711587008);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<UMovesetParent>()
	{
		return UMovesetParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovesetParent(Z_Construct_UClass_UMovesetParent, &UMovesetParent::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("UMovesetParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesetParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
