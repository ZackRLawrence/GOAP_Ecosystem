// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP_Ecosystem/Animal/TestBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBehavior() {}
// Cross Module References
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_UTestBehavior_NoRegister();
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_UTestBehavior();
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_UBehavior();
	UPackage* Z_Construct_UPackage__Script_GOAP_Ecosystem();
// End Cross Module References
	void UTestBehavior::StaticRegisterNativesUTestBehavior()
	{
	}
	UClass* Z_Construct_UClass_UTestBehavior_NoRegister()
	{
		return UTestBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UTestBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP_Ecosystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBehavior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animal/TestBehavior.h" },
		{ "ModuleRelativePath", "Animal/TestBehavior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestBehavior_Statics::ClassParams = {
		&UTestBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestBehavior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestBehavior, 4158319439);
	template<> GOAP_ECOSYSTEM_API UClass* StaticClass<UTestBehavior>()
	{
		return UTestBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestBehavior(Z_Construct_UClass_UTestBehavior, &UTestBehavior::StaticClass, TEXT("/Script/GOAP_Ecosystem"), TEXT("UTestBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
