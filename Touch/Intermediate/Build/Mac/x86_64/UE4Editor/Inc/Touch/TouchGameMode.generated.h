// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOUCH_TouchGameMode_generated_h
#error "TouchGameMode.generated.h already included, missing '#pragma once' in TouchGameMode.h"
#endif
#define TOUCH_TouchGameMode_generated_h

#define Touch_Source_Touch_TouchGameMode_h_12_SPARSE_DATA
#define Touch_Source_Touch_TouchGameMode_h_12_RPC_WRAPPERS
#define Touch_Source_Touch_TouchGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Touch_Source_Touch_TouchGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchGameMode(); \
	friend struct Z_Construct_UClass_ATouchGameMode_Statics; \
public: \
	DECLARE_CLASS(ATouchGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Touch"), TOUCH_API) \
	DECLARE_SERIALIZER(ATouchGameMode)


#define Touch_Source_Touch_TouchGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATouchGameMode(); \
	friend struct Z_Construct_UClass_ATouchGameMode_Statics; \
public: \
	DECLARE_CLASS(ATouchGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Touch"), TOUCH_API) \
	DECLARE_SERIALIZER(ATouchGameMode)


#define Touch_Source_Touch_TouchGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOUCH_API ATouchGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOUCH_API, ATouchGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOUCH_API ATouchGameMode(ATouchGameMode&&); \
	TOUCH_API ATouchGameMode(const ATouchGameMode&); \
public:


#define Touch_Source_Touch_TouchGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOUCH_API ATouchGameMode(ATouchGameMode&&); \
	TOUCH_API ATouchGameMode(const ATouchGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOUCH_API, ATouchGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATouchGameMode)


#define Touch_Source_Touch_TouchGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Touch_Source_Touch_TouchGameMode_h_9_PROLOG
#define Touch_Source_Touch_TouchGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Touch_Source_Touch_TouchGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Touch_Source_Touch_TouchGameMode_h_12_SPARSE_DATA \
	Touch_Source_Touch_TouchGameMode_h_12_RPC_WRAPPERS \
	Touch_Source_Touch_TouchGameMode_h_12_INCLASS \
	Touch_Source_Touch_TouchGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Touch_Source_Touch_TouchGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Touch_Source_Touch_TouchGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Touch_Source_Touch_TouchGameMode_h_12_SPARSE_DATA \
	Touch_Source_Touch_TouchGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Touch_Source_Touch_TouchGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Touch_Source_Touch_TouchGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCH_API UClass* StaticClass<class ATouchGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Touch_Source_Touch_TouchGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
