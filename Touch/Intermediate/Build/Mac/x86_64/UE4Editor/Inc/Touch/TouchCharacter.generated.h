// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOUCH_TouchCharacter_generated_h
#error "TouchCharacter.generated.h already included, missing '#pragma once' in TouchCharacter.h"
#endif
#define TOUCH_TouchCharacter_generated_h

#define Touch_Source_Touch_TouchCharacter_h_12_SPARSE_DATA
#define Touch_Source_Touch_TouchCharacter_h_12_RPC_WRAPPERS
#define Touch_Source_Touch_TouchCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Touch_Source_Touch_TouchCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchCharacter(); \
	friend struct Z_Construct_UClass_ATouchCharacter_Statics; \
public: \
	DECLARE_CLASS(ATouchCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Touch"), NO_API) \
	DECLARE_SERIALIZER(ATouchCharacter)


#define Touch_Source_Touch_TouchCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATouchCharacter(); \
	friend struct Z_Construct_UClass_ATouchCharacter_Statics; \
public: \
	DECLARE_CLASS(ATouchCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Touch"), NO_API) \
	DECLARE_SERIALIZER(ATouchCharacter)


#define Touch_Source_Touch_TouchCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATouchCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchCharacter(ATouchCharacter&&); \
	NO_API ATouchCharacter(const ATouchCharacter&); \
public:


#define Touch_Source_Touch_TouchCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchCharacter(ATouchCharacter&&); \
	NO_API ATouchCharacter(const ATouchCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATouchCharacter)


#define Touch_Source_Touch_TouchCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATouchCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATouchCharacter, FollowCamera); }


#define Touch_Source_Touch_TouchCharacter_h_9_PROLOG
#define Touch_Source_Touch_TouchCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Touch_Source_Touch_TouchCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Touch_Source_Touch_TouchCharacter_h_12_SPARSE_DATA \
	Touch_Source_Touch_TouchCharacter_h_12_RPC_WRAPPERS \
	Touch_Source_Touch_TouchCharacter_h_12_INCLASS \
	Touch_Source_Touch_TouchCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Touch_Source_Touch_TouchCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Touch_Source_Touch_TouchCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Touch_Source_Touch_TouchCharacter_h_12_SPARSE_DATA \
	Touch_Source_Touch_TouchCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Touch_Source_Touch_TouchCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Touch_Source_Touch_TouchCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCH_API UClass* StaticClass<class ATouchCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Touch_Source_Touch_TouchCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
