// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalBrawl/Public/ShowTurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowTurret() {}
// Cross Module References
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AShowTurret_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AShowTurret();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElementalBrawl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AShowTurret::StaticRegisterNativesAShowTurret()
	{
	}
	UClass* Z_Construct_UClass_AShowTurret_NoRegister()
	{
		return AShowTurret::StaticClass();
	}
	struct Z_Construct_UClass_AShowTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basicAttackProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_basicAttackProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shotDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mShotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBasicAttackCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBasicAttackCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShowTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementalBrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowTurret_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowTurret.h" },
		{ "ModuleRelativePath", "Public/ShowTurret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowTurret_Statics::NewProp_basicAttackProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShowTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShowTurret_Statics::NewProp_basicAttackProjectile = { "basicAttackProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShowTurret, basicAttackProjectile), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShowTurret_Statics::NewProp_basicAttackProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::NewProp_basicAttackProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowTurret_Statics::NewProp_shotDirection_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShowTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShowTurret_Statics::NewProp_shotDirection = { "shotDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShowTurret, shotDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AShowTurret_Statics::NewProp_shotDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::NewProp_shotDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowTurret_Statics::NewProp_mShotSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/ShowTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShowTurret_Statics::NewProp_mShotSpeed = { "mShotSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShowTurret, mShotSpeed), METADATA_PARAMS(Z_Construct_UClass_AShowTurret_Statics::NewProp_mShotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::NewProp_mShotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowTurret_Statics::NewProp_mBasicAttackCooldown_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/ShowTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShowTurret_Statics::NewProp_mBasicAttackCooldown = { "mBasicAttackCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShowTurret, mBasicAttackCooldown), METADATA_PARAMS(Z_Construct_UClass_AShowTurret_Statics::NewProp_mBasicAttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::NewProp_mBasicAttackCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShowTurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowTurret_Statics::NewProp_basicAttackProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowTurret_Statics::NewProp_shotDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowTurret_Statics::NewProp_mShotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowTurret_Statics::NewProp_mBasicAttackCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShowTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShowTurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShowTurret_Statics::ClassParams = {
		&AShowTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShowTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShowTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShowTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShowTurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShowTurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShowTurret, 1773306362);
	template<> ELEMENTALBRAWL_API UClass* StaticClass<AShowTurret>()
	{
		return AShowTurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShowTurret(Z_Construct_UClass_AShowTurret, &AShowTurret::StaticClass, TEXT("/Script/ElementalBrawl"), TEXT("AShowTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShowTurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
