// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARPROJECT_CarProjectPawn_generated_h
#error "CarProjectPawn.generated.h already included, missing '#pragma once' in CarProjectPawn.h"
#endif
#define CARPROJECT_CarProjectPawn_generated_h

#define CarProject_Source_CarProject_CarProjectPawn_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define CarProject_Source_CarProject_CarProjectPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define CarProject_Source_CarProject_CarProjectPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarProjectPawn(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_ACarProjectPawn(); \
public: \
	DECLARE_CLASS(ACarProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CarProject"), NO_API) \
	DECLARE_SERIALIZER(ACarProjectPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_CarProjectPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACarProjectPawn(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_ACarProjectPawn(); \
public: \
	DECLARE_CLASS(ACarProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CarProject"), NO_API) \
	DECLARE_SERIALIZER(ACarProjectPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_CarProjectPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarProjectPawn(ACarProjectPawn&&); \
	NO_API ACarProjectPawn(const ACarProjectPawn&); \
public:


#define CarProject_Source_CarProject_CarProjectPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarProjectPawn(ACarProjectPawn&&); \
	NO_API ACarProjectPawn(const ACarProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarProjectPawn)


#define CarProject_Source_CarProject_CarProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACarProjectPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACarProjectPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ACarProjectPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ACarProjectPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ACarProjectPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ACarProjectPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ACarProjectPawn, EngineSoundComponent); }


#define CarProject_Source_CarProject_CarProjectPawn_h_16_PROLOG
#define CarProject_Source_CarProject_CarProjectPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_CarProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_CarProjectPawn_h_19_RPC_WRAPPERS \
	CarProject_Source_CarProject_CarProjectPawn_h_19_INCLASS \
	CarProject_Source_CarProject_CarProjectPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarProject_Source_CarProject_CarProjectPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_CarProjectPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_CarProjectPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CarProject_Source_CarProject_CarProjectPawn_h_19_INCLASS_NO_PURE_DECLS \
	CarProject_Source_CarProject_CarProjectPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarProject_Source_CarProject_CarProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
