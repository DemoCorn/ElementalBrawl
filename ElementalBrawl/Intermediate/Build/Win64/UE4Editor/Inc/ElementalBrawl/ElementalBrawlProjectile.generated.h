// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ELEMENTALBRAWL_ElementalBrawlProjectile_generated_h
#error "ElementalBrawlProjectile.generated.h already included, missing '#pragma once' in ElementalBrawlProjectile.h"
#endif
#define ELEMENTALBRAWL_ElementalBrawlProjectile_generated_h

#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_SPARSE_DATA
#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElementalBrawlProjectile(); \
	friend struct Z_Construct_UClass_AElementalBrawlProjectile_Statics; \
public: \
	DECLARE_CLASS(AElementalBrawlProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementalBrawl"), NO_API) \
	DECLARE_SERIALIZER(AElementalBrawlProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAElementalBrawlProjectile(); \
	friend struct Z_Construct_UClass_AElementalBrawlProjectile_Statics; \
public: \
	DECLARE_CLASS(AElementalBrawlProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementalBrawl"), NO_API) \
	DECLARE_SERIALIZER(AElementalBrawlProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElementalBrawlProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElementalBrawlProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElementalBrawlProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElementalBrawlProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElementalBrawlProjectile(AElementalBrawlProjectile&&); \
	NO_API AElementalBrawlProjectile(const AElementalBrawlProjectile&); \
public:


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElementalBrawlProjectile(AElementalBrawlProjectile&&); \
	NO_API AElementalBrawlProjectile(const AElementalBrawlProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElementalBrawlProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElementalBrawlProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElementalBrawlProjectile)


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AElementalBrawlProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AElementalBrawlProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__sphereSize() { return STRUCT_OFFSET(AElementalBrawlProjectile, sphereSize); } \
	FORCEINLINE static uint32 __PPO__shotSpeed() { return STRUCT_OFFSET(AElementalBrawlProjectile, shotSpeed); }


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_12_PROLOG
#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_SPARSE_DATA \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_RPC_WRAPPERS \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_INCLASS \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_SPARSE_DATA \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTALBRAWL_API UClass* StaticClass<class AElementalBrawlProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElementalBrawl_Source_ElementalBrawl_ElementalBrawlProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
