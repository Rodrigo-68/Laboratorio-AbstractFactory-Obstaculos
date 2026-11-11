// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaAbstractaObstaculosAereos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaAbstractaObstaculosAereos() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaAbstractaObstaculosAereos();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaAbstractaObstaculos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaAbstractaObstaculosAereos::StaticRegisterNativesAFabricaAbstractaObstaculosAereos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_NoRegister()
	{
		return AFabricaAbstractaObstaculosAereos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaAbstractaObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaAbstractaObstaculosAereos.h" },
		{ "ModuleRelativePath", "FabricaAbstractaObstaculosAereos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaAbstractaObstaculosAereos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::ClassParams = {
		&AFabricaAbstractaObstaculosAereos::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaAbstractaObstaculosAereos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaAbstractaObstaculosAereos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaAbstractaObstaculosAereos, 171112126);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaAbstractaObstaculosAereos>()
	{
		return AFabricaAbstractaObstaculosAereos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaAbstractaObstaculosAereos(Z_Construct_UClass_AFabricaAbstractaObstaculosAereos, &AFabricaAbstractaObstaculosAereos::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaAbstractaObstaculosAereos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaAbstractaObstaculosAereos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
