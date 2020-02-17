// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP_Ecosystem/PlayStationPractice/Threading/PrimeCalculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimeCalculator() {}
// Cross Module References
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_APrimeCalculator_NoRegister();
	GOAP_ECOSYSTEM_API UClass* Z_Construct_UClass_APrimeCalculator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GOAP_Ecosystem();
	GOAP_ECOSYSTEM_API UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTask();
	GOAP_ECOSYSTEM_API UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain();
// End Cross Module References
	void APrimeCalculator::StaticRegisterNativesAPrimeCalculator()
	{
		UClass* Class = APrimeCalculator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunPrimeTask", &APrimeCalculator::execRunPrimeTask },
			{ "RunPrimeTaskOnMain", &APrimeCalculator::execRunPrimeTaskOnMain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics
	{
		struct PrimeCalculator_eventRunPrimeTask_Parms
		{
			int32 NumPrimes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPrimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::NewProp_NumPrimes = { "NumPrimes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrimeCalculator_eventRunPrimeTask_Parms, NumPrimes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::NewProp_NumPrimes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayStationPractice/Threading/PrimeCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrimeCalculator, nullptr, "RunPrimeTask", nullptr, nullptr, sizeof(PrimeCalculator_eventRunPrimeTask_Parms), Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrimeCalculator_RunPrimeTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics
	{
		struct PrimeCalculator_eventRunPrimeTaskOnMain_Parms
		{
			int32 NumPrimes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPrimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::NewProp_NumPrimes = { "NumPrimes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrimeCalculator_eventRunPrimeTaskOnMain_Parms, NumPrimes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::NewProp_NumPrimes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayStationPractice/Threading/PrimeCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrimeCalculator, nullptr, "RunPrimeTaskOnMain", nullptr, nullptr, sizeof(PrimeCalculator_eventRunPrimeTaskOnMain_Parms), Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrimeCalculator_NoRegister()
	{
		return APrimeCalculator::StaticClass();
	}
	struct Z_Construct_UClass_APrimeCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimeCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP_Ecosystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrimeCalculator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrimeCalculator_RunPrimeTask, "RunPrimeTask" }, // 611808843
		{ &Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain, "RunPrimeTaskOnMain" }, // 1770212183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayStationPractice/Threading/PrimeCalculator.h" },
		{ "ModuleRelativePath", "PlayStationPractice/Threading/PrimeCalculator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimeCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimeCalculator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrimeCalculator_Statics::ClassParams = {
		&APrimeCalculator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimeCalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrimeCalculator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrimeCalculator, 1460587664);
	template<> GOAP_ECOSYSTEM_API UClass* StaticClass<APrimeCalculator>()
	{
		return APrimeCalculator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimeCalculator(Z_Construct_UClass_APrimeCalculator, &APrimeCalculator::StaticClass, TEXT("/Script/GOAP_Ecosystem"), TEXT("APrimeCalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimeCalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
