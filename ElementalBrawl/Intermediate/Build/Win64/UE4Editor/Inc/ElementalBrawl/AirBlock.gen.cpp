// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/AirBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirBlock() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AAirBlock_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AAirBlock();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AMeleeProjectile();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
// End Cross Module References
	void AAirBlock::StaticRegisterNativesAAirBlock()
	{
	}
	UClass* Z_Construct_UClass_AAirBlock_NoRegister()
	{
		return AAirBlock::StaticClass();
	}
	struct Z_Construct_UClass_AAirBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeleeProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AirBlock.h" },
		{ "ModuleRelativePath", "Public/AirBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirBlock_Statics::ClassParams = {
		&AAirBlock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAirBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirBlock, 2247597415);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AAirBlock>()
	{
		return AAirBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirBlock(Z_Construct_UClass_AAirBlock, &AAirBlock::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AAirBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
