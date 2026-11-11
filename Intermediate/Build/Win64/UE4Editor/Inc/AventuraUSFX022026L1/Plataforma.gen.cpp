// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/Plataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataforma() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UEnum* Z_Construct_UEnum_AventuraUSFX022026L1_ETipoMovimiento();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataforma_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_APlataforma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* ETipoMovimiento_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AventuraUSFX022026L1_ETipoMovimiento, Z_Construct_UPackage__Script_AventuraUSFX022026L1(), TEXT("ETipoMovimiento"));
		}
		return Singleton;
	}
	template<> AVENTURAUSFX022026L1_API UEnum* StaticEnum<ETipoMovimiento>()
	{
		return ETipoMovimiento_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoMovimiento(ETipoMovimiento_StaticEnum, TEXT("/Script/AventuraUSFX022026L1"), TEXT("ETipoMovimiento"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AventuraUSFX022026L1_ETipoMovimiento_Hash() { return 1554271980U; }
	UEnum* Z_Construct_UEnum_AventuraUSFX022026L1_ETipoMovimiento()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AventuraUSFX022026L1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoMovimiento"), 0, Get_Z_Construct_UEnum_AventuraUSFX022026L1_ETipoMovimiento_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoMovimiento::Lineal_X", (int64)ETipoMovimiento::Lineal_X },
				{ "ETipoMovimiento::Lineal_Y", (int64)ETipoMovimiento::Lineal_Y },
				{ "ETipoMovimiento::Lineal_Z", (int64)ETipoMovimiento::Lineal_Z },
				{ "ETipoMovimiento::Circular_XY", (int64)ETipoMovimiento::Circular_XY },
				{ "ETipoMovimiento::Circular_XZ", (int64)ETipoMovimiento::Circular_XZ },
				{ "ETipoMovimiento::Circular_YZ", (int64)ETipoMovimiento::Circular_YZ },
				{ "ETipoMovimiento::Diagonal_XY", (int64)ETipoMovimiento::Diagonal_XY },
				{ "ETipoMovimiento::Diagonal_XZ", (int64)ETipoMovimiento::Diagonal_XZ },
				{ "ETipoMovimiento::Diagonal_YZ", (int64)ETipoMovimiento::Diagonal_YZ },
				{ "ETipoMovimiento::ZigZag", (int64)ETipoMovimiento::ZigZag },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Circular_XY.Name", "ETipoMovimiento::Circular_XY" },
				{ "Circular_XZ.Name", "ETipoMovimiento::Circular_XZ" },
				{ "Circular_YZ.Name", "ETipoMovimiento::Circular_YZ" },
				{ "Diagonal_XY.Name", "ETipoMovimiento::Diagonal_XY" },
				{ "Diagonal_XZ.Name", "ETipoMovimiento::Diagonal_XZ" },
				{ "Diagonal_YZ.Name", "ETipoMovimiento::Diagonal_YZ" },
				{ "Lineal_X.Name", "ETipoMovimiento::Lineal_X" },
				{ "Lineal_Y.Name", "ETipoMovimiento::Lineal_Y" },
				{ "Lineal_Z.Name", "ETipoMovimiento::Lineal_Z" },
				{ "ModuleRelativePath", "Plataforma.h" },
				{ "ZigZag.Name", "ETipoMovimiento::ZigZag" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
				nullptr,
				"ETipoMovimiento",
				"ETipoMovimiento",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APlataforma::StaticRegisterNativesAPlataforma()
	{
	}
	UClass* Z_Construct_UClass_APlataforma_NoRegister()
	{
		return APlataforma::StaticClass();
	}
	struct Z_Construct_UClass_APlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plataforma.h" },
		{ "ModuleRelativePath", "Plataforma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataforma_Statics::ClassParams = {
		&APlataforma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataforma, 4045411223);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<APlataforma>()
	{
		return APlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataforma(Z_Construct_UClass_APlataforma, &APlataforma::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("APlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
