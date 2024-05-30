// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Touch/TouchGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchGameMode() {}
// Cross Module References
	TOUCH_API UClass* Z_Construct_UClass_ATouchGameMode_NoRegister();
	TOUCH_API UClass* Z_Construct_UClass_ATouchGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Touch();
// End Cross Module References
	void ATouchGameMode::StaticRegisterNativesATouchGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATouchGameMode_NoRegister()
	{
		return ATouchGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATouchGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATouchGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Touch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATouchGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TouchGameMode.h" },
		{ "ModuleRelativePath", "TouchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATouchGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATouchGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATouchGameMode_Statics::ClassParams = {
		&ATouchGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATouchGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATouchGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATouchGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATouchGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATouchGameMode, 3464741337);
	template<> TOUCH_API UClass* StaticClass<ATouchGameMode>()
	{
		return ATouchGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATouchGameMode(Z_Construct_UClass_ATouchGameMode, &ATouchGameMode::StaticClass, TEXT("/Script/Touch"), TEXT("ATouchGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
