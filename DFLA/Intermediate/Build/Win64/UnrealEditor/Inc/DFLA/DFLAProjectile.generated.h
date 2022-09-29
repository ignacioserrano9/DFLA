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
struct FHitResult;
#ifdef DFLA_DFLAProjectile_generated_h
#error "DFLAProjectile.generated.h already included, missing '#pragma once' in DFLAProjectile.h"
#endif
#define DFLA_DFLAProjectile_generated_h

#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_SPARSE_DATA
#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADFLAProjectile(); \
	friend struct Z_Construct_UClass_ADFLAProjectile_Statics; \
public: \
	DECLARE_CLASS(ADFLAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DFLA"), NO_API) \
	DECLARE_SERIALIZER(ADFLAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADFLAProjectile(); \
	friend struct Z_Construct_UClass_ADFLAProjectile_Statics; \
public: \
	DECLARE_CLASS(ADFLAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DFLA"), NO_API) \
	DECLARE_SERIALIZER(ADFLAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADFLAProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADFLAProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFLAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFLAProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFLAProjectile(ADFLAProjectile&&); \
	NO_API ADFLAProjectile(const ADFLAProjectile&); \
public:


#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFLAProjectile(ADFLAProjectile&&); \
	NO_API ADFLAProjectile(const ADFLAProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFLAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFLAProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADFLAProjectile)


#define FID_DFLA_Source_DFLA_DFLAProjectile_h_12_PROLOG
#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_SPARSE_DATA \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_RPC_WRAPPERS \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_INCLASS \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DFLA_Source_DFLA_DFLAProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_SPARSE_DATA \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_DFLA_Source_DFLA_DFLAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DFLA_API UClass* StaticClass<class ADFLAProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DFLA_Source_DFLA_DFLAProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
