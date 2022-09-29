// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DFLA_DFLACharacter_generated_h
#error "DFLACharacter.generated.h already included, missing '#pragma once' in DFLACharacter.h"
#endif
#define DFLA_DFLACharacter_generated_h

#define FID_DFLA_Source_DFLA_DFLACharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_SPARSE_DATA
#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_RPC_WRAPPERS
#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADFLACharacter(); \
	friend struct Z_Construct_UClass_ADFLACharacter_Statics; \
public: \
	DECLARE_CLASS(ADFLACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DFLA"), NO_API) \
	DECLARE_SERIALIZER(ADFLACharacter)


#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADFLACharacter(); \
	friend struct Z_Construct_UClass_ADFLACharacter_Statics; \
public: \
	DECLARE_CLASS(ADFLACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DFLA"), NO_API) \
	DECLARE_SERIALIZER(ADFLACharacter)


#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADFLACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADFLACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFLACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFLACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFLACharacter(ADFLACharacter&&); \
	NO_API ADFLACharacter(const ADFLACharacter&); \
public:


#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADFLACharacter(ADFLACharacter&&); \
	NO_API ADFLACharacter(const ADFLACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADFLACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADFLACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADFLACharacter)


#define FID_DFLA_Source_DFLA_DFLACharacter_h_20_PROLOG
#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_SPARSE_DATA \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_RPC_WRAPPERS \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_INCLASS \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DFLA_Source_DFLA_DFLACharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_SPARSE_DATA \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_DFLA_Source_DFLA_DFLACharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DFLA_API UClass* StaticClass<class ADFLACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DFLA_Source_DFLA_DFLACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
