// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARPROJECT_CarProjectGameMode_generated_h
#error "CarProjectGameMode.generated.h already included, missing '#pragma once' in CarProjectGameMode.h"
#endif
#define CARPROJECT_CarProjectGameMode_generated_h

#define CarProject_Source_CarProject_CarProjectGameMode_h_12_RPC_WRAPPERS
#define CarProject_Source_CarProject_CarProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CarProject_Source_CarProject_CarProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarProjectGameMode(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_ACarProjectGameMode(); \
public: \
	DECLARE_CLASS(ACarProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/CarProject"), CARPROJECT_API) \
	DECLARE_SERIALIZER(ACarProjectGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_CarProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACarProjectGameMode(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_ACarProjectGameMode(); \
public: \
	DECLARE_CLASS(ACarProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/CarProject"), CARPROJECT_API) \
	DECLARE_SERIALIZER(ACarProjectGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_CarProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CARPROJECT_API ACarProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CARPROJECT_API, ACarProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CARPROJECT_API ACarProjectGameMode(ACarProjectGameMode&&); \
	CARPROJECT_API ACarProjectGameMode(const ACarProjectGameMode&); \
public:


#define CarProject_Source_CarProject_CarProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CARPROJECT_API ACarProjectGameMode(ACarProjectGameMode&&); \
	CARPROJECT_API ACarProjectGameMode(const ACarProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CARPROJECT_API, ACarProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarProjectGameMode)


#define CarProject_Source_CarProject_CarProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define CarProject_Source_CarProject_CarProjectGameMode_h_9_PROLOG
#define CarProject_Source_CarProject_CarProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_RPC_WRAPPERS \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_INCLASS \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarProject_Source_CarProject_CarProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	CarProject_Source_CarProject_CarProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarProject_Source_CarProject_CarProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
