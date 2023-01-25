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
#ifdef ELEMENTALBRAWL_MeleeProjectile_generated_h
#error "MeleeProjectile.generated.h already included, missing '#pragma once' in MeleeProjectile.h"
#endif
#define ELEMENTALBRAWL_MeleeProjectile_generated_h

#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_SPARSE_DATA
#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execOnHit);


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execOnHit);


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeProjectile(); \
	friend struct Z_Construct_UClass_AMeleeProjectile_Statics; \
public: \
	DECLARE_CLASS(AMeleeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementalBrawl"), NO_API) \
	DECLARE_SERIALIZER(AMeleeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMeleeProjectile(); \
	friend struct Z_Construct_UClass_AMeleeProjectile_Statics; \
public: \
	DECLARE_CLASS(AMeleeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementalBrawl"), NO_API) \
	DECLARE_SERIALIZER(AMeleeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeleeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeleeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeProjectile(AMeleeProjectile&&); \
	NO_API AMeleeProjectile(const AMeleeProjectile&); \
public:


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeProjectile(AMeleeProjectile&&); \
	NO_API AMeleeProjectile(const AMeleeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeleeProjectile)


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMeleeProjectile, CollisionComp); }


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_13_PROLOG
#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_SPARSE_DATA \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_RPC_WRAPPERS \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_INCLASS \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_SPARSE_DATA \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_INCLASS_NO_PURE_DECLS \
	ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTALBRAWL_API UClass* StaticClass<class AMeleeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ElementalBrawl_Source_ElementalBrawl_Public_MeleeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
