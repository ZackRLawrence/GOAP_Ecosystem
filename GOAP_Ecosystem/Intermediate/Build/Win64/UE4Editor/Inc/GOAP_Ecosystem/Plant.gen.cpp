// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP_Ecosystem/Plants/Plant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlant() {}
// Cross Module References
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_APlant_NoRegister();
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_APlant();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GOAP_Ecosystem();
// End Cross Module References
	void APlant::StaticRegisterNativesAPlant()
	{
	}
	UClass* Z_Construct_UClass_APlant_NoRegister()
	{
		return APlant::StaticClass();
	}
	struct Z_Construct_UClass_APlant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP_Ecosystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plants/Plant.h" },
		{ "ModuleRelativePath", "Plants/Plant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlant_Statics::ClassParams = {
		&APlant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlant, 1006485045);
	template<> GOAP_ECOSYSTEM_API UClass* StaticClass<APlant>()
	{
		return APlant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlant(Z_Construct_UClass_APlant, &APlant::StaticClass, TEXT("/Script/GOAP_Ecosystem"), TEXT("APlant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
