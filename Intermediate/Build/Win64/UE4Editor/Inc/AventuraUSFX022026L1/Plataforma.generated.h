// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVENTURAUSFX022026L1_Plataforma_generated_h
#error "Plataforma.generated.h already included, missing '#pragma once' in Plataforma.h"
#endif
#define AVENTURAUSFX022026L1_Plataforma_generated_h

#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_SPARSE_DATA
#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_RPC_WRAPPERS
#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlataforma(); \
	friend struct Z_Construct_UClass_APlataforma_Statics; \
public: \
	DECLARE_CLASS(APlataforma, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AventuraUSFX022026L1"), NO_API) \
	DECLARE_SERIALIZER(APlataforma)


#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAPlataforma(); \
	friend struct Z_Construct_UClass_APlataforma_Statics; \
public: \
	DECLARE_CLASS(APlataforma, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AventuraUSFX022026L1"), NO_API) \
	DECLARE_SERIALIZER(APlataforma)


#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlataforma(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlataforma) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlataforma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlataforma); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlataforma(APlataforma&&); \
	NO_API APlataforma(const APlataforma&); \
public:


#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlataforma(APlataforma&&); \
	NO_API APlataforma(const APlataforma&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlataforma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlataforma); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlataforma)


#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_PRIVATE_PROPERTY_OFFSET
#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_33_PROLOG
#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_PRIVATE_PROPERTY_OFFSET \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_SPARSE_DATA \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_RPC_WRAPPERS \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_INCLASS \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_PRIVATE_PROPERTY_OFFSET \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_SPARSE_DATA \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_INCLASS_NO_PURE_DECLS \
	AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVENTURAUSFX022026L1_API UClass* StaticClass<class APlataforma>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AventuraUSFX022026L1_master_Source_AventuraUSFX022026L1_Plataforma_h


#define FOREACH_ENUM_ETIPOMOVIMIENTO(op) \
	op(ETipoMovimiento::Lineal_X) \
	op(ETipoMovimiento::Lineal_Y) \
	op(ETipoMovimiento::Lineal_Z) \
	op(ETipoMovimiento::Circular_XY) \
	op(ETipoMovimiento::Circular_XZ) \
	op(ETipoMovimiento::Circular_YZ) \
	op(ETipoMovimiento::Diagonal_XY) \
	op(ETipoMovimiento::Diagonal_XZ) \
	op(ETipoMovimiento::Diagonal_YZ) \
	op(ETipoMovimiento::ZigZag) 

enum class ETipoMovimiento : uint8;
template<> AVENTURAUSFX022026L1_API UEnum* StaticEnum<ETipoMovimiento>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
