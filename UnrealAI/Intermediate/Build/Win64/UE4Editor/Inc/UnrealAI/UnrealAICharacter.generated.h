// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALAI_UnrealAICharacter_generated_h
#error "UnrealAICharacter.generated.h already included, missing '#pragma once' in UnrealAICharacter.h"
#endif
#define UNREALAI_UnrealAICharacter_generated_h

#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_RPC_WRAPPERS
#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealAICharacter(); \
	friend struct Z_Construct_UClass_AUnrealAICharacter_Statics; \
public: \
	DECLARE_CLASS(AUnrealAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAI"), NO_API) \
	DECLARE_SERIALIZER(AUnrealAICharacter)


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealAICharacter(); \
	friend struct Z_Construct_UClass_AUnrealAICharacter_Statics; \
public: \
	DECLARE_CLASS(AUnrealAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAI"), NO_API) \
	DECLARE_SERIALIZER(AUnrealAICharacter)


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealAICharacter(AUnrealAICharacter&&); \
	NO_API AUnrealAICharacter(const AUnrealAICharacter&); \
public:


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealAICharacter(AUnrealAICharacter&&); \
	NO_API AUnrealAICharacter(const AUnrealAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealAICharacter)


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AUnrealAICharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUnrealAICharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AUnrealAICharacter, CursorToWorld); }


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_9_PROLOG
#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_RPC_WRAPPERS \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_INCLASS \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealAI_Source_UnrealAI_UnrealAICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALAI_API UClass* StaticClass<class AUnrealAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealAI_Source_UnrealAI_UnrealAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
