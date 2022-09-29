// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DFLA/DFLAGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDFLAGameMode() {}
// Cross Module References
	DFLA_API UClass* Z_Construct_UClass_ADFLAGameMode_NoRegister();
	DFLA_API UClass* Z_Construct_UClass_ADFLAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DFLA();
// End Cross Module References
	void ADFLAGameMode::StaticRegisterNativesADFLAGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADFLAGameMode);
	UClass* Z_Construct_UClass_ADFLAGameMode_NoRegister()
	{
		return ADFLAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADFLAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADFLAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DFLA,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADFLAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DFLAGameMode.h" },
		{ "ModuleRelativePath", "DFLAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADFLAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADFLAGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADFLAGameMode_Statics::ClassParams = {
		&ADFLAGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADFLAGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADFLAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADFLAGameMode()
	{
		if (!Z_Registration_Info_UClass_ADFLAGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADFLAGameMode.OuterSingleton, Z_Construct_UClass_ADFLAGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADFLAGameMode.OuterSingleton;
	}
	template<> DFLA_API UClass* StaticClass<ADFLAGameMode>()
	{
		return ADFLAGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADFLAGameMode);
	struct Z_CompiledInDeferFile_FID_DFLA_Source_DFLA_DFLAGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DFLA_Source_DFLA_DFLAGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADFLAGameMode, ADFLAGameMode::StaticClass, TEXT("ADFLAGameMode"), &Z_Registration_Info_UClass_ADFLAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADFLAGameMode), 2219826289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DFLA_Source_DFLA_DFLAGameMode_h_2376546873(TEXT("/Script/DFLA"),
		Z_CompiledInDeferFile_FID_DFLA_Source_DFLA_DFLAGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DFLA_Source_DFLA_DFLAGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
