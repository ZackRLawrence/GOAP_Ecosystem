// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP_Ecosystem/Animal/Behavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehavior() {}
// Cross Module References
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_UBehavior_NoRegister();
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_UBehavior();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GOAP_Ecosystem();
// End Cross Module References
	void UBehavior::StaticRegisterNativesUBehavior()
	{
	}
	UClass* Z_Construct_UClass_UBehavior_NoRegister()
	{
		return UBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP_Ecosystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehavior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Animal/Behavior.h" },
		{ "ModuleRelativePath", "Animal/Behavior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehavior_Statics::ClassParams = {
		&UBehavior::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBehavior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehavior, 1377683163);
	template<> GOAP_ECOSYSTEM_API UClass* StaticClass<UBehavior>()
	{
		return UBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehavior(Z_Construct_UClass_UBehavior, &UBehavior::StaticClass, TEXT("/Script/GOAP_Ecosystem"), TEXT("UBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
