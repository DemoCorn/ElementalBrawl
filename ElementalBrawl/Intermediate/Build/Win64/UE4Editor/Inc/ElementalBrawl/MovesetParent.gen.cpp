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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AElementalBrawlProjectile_NoRegister();
	ELEMENTALBRAWL_API UClass* Z_Construct_UClass_AMeleeProjectile_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicAttackProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BasicAttackProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicAttackMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BasicAttackMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isActiveMoveset_MetaData[];
#endif
		static void NewProp_isActiveMoveset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActiveMoveset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBasicAttackCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBasicAttackCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefenceCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDefenceCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMovementCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMovementCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCooldownCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCooldownCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackProjectile = { "BasicAttackProjectile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, BasicAttackProjectile), Z_Construct_UClass_AElementalBrawlProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackMelee_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackMelee = { "BasicAttackMelee", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, BasicAttackMelee), Z_Construct_UClass_AMeleeProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset_MetaData[] = {
		{ "Category", "Active" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	void Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset_SetBit(void* Obj)
	{
		((UMovesetParent*)Obj)->isActiveMoveset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset = { "isActiveMoveset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovesetParent), &Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_mBasicAttackCooldown_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_mBasicAttackCooldown = { "mBasicAttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, mBasicAttackCooldown), METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mBasicAttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mBasicAttackCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_mDefenceCooldown_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_mDefenceCooldown = { "mDefenceCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, mDefenceCooldown), METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mDefenceCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mDefenceCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_mMovementCooldown_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_mMovementCooldown = { "mMovementCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, mMovementCooldown), METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mMovementCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mMovementCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesetParent_Statics::NewProp_mCooldownCooldown_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "ModuleRelativePath", "Public/MovesetParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovesetParent_Statics::NewProp_mCooldownCooldown = { "mCooldownCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovesetParent, mCooldownCooldown), METADATA_PARAMS(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mCooldownCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::NewProp_mCooldownCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovesetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_BasicAttackMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_isActiveMoveset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_mBasicAttackCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_mDefenceCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_mMovementCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovesetParent_Statics::NewProp_mCooldownCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesetParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesetParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesetParent_Statics::ClassParams = {
		&UMovesetParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovesetParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovesetParent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UMovesetParent, 3295829989);
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
