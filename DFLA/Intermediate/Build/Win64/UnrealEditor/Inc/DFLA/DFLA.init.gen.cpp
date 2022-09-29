// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDFLA_init() {}
	DFLA_API UFunction* Z_Construct_UDelegateFunction_DFLA_OnPickUp__DelegateSignature();
	DFLA_API UFunction* Z_Construct_UDelegateFunction_DFLA_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DFLA;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DFLA()
	{
		if (!Z_Registration_Info_UPackage__Script_DFLA.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DFLA_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DFLA_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DFLA",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x43C2FC9E,
				0x0E08E952,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DFLA.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DFLA.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DFLA(Z_Construct_UPackage__Script_DFLA, TEXT("/Script/DFLA"), Z_Registration_Info_UPackage__Script_DFLA, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x43C2FC9E, 0x0E08E952));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
