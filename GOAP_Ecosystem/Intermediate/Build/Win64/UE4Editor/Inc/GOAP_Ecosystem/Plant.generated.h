// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOAP_ECOSYSTEM_Plant_generated_h
#error "Plant.generated.h already included, missing '#pragma once' in Plant.h"
#endif
#define GOAP_ECOSYSTEM_Plant_generated_h

#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_RPC_WRAPPERS
#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlant(); \
	friend struct Z_Construct_UClass_APlant_Statics; \
public: \
	DECLARE_CLASS(APlant, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOAP_Ecosystem"), NO_API) \
	DECLARE_SERIALIZER(APlant)


#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlant(); \
	friend struct Z_Construct_UClass_APlant_Statics; \
public: \
	DECLARE_CLASS(APlant, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOAP_Ecosystem"), NO_API) \
	DECLARE_SERIALIZER(APlant)


#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlant(APlant&&); \
	NO_API APlant(const APlant&); \
public:


#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlant(APlant&&); \
	NO_API APlant(const APlant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlant)


#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_PRIVATE_PROPERTY_OFFSET
#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_9_PROLOG
#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_PRIVATE_PROPERTY_OFFSET \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_RPC_WRAPPERS \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_INCLASS \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_PRIVATE_PROPERTY_OFFSET \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_INCLASS_NO_PURE_DECLS \
	GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOAP_ECOSYSTEM_API UClass* StaticClass<class APlant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GOAP_Ecosystem_Source_GOAP_Ecosystem_Plants_Plant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
