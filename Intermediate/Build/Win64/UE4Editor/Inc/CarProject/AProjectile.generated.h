// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CARPROJECT_AProjectile_generated_h
#error "AProjectile.generated.h already included, missing '#pragma once' in AProjectile.h"
#endif
#define CARPROJECT_AProjectile_generated_h

#define CarProject_Source_CarProject_AProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_Actor,Z_Param_Other,Z_Param_Impulse,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define CarProject_Source_CarProject_AProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_Actor,Z_Param_Other,Z_Param_Impulse,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define CarProject_Source_CarProject_AProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAProjectile(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_AAProjectile(); \
public: \
	DECLARE_CLASS(AAProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CarProject"), NO_API) \
	DECLARE_SERIALIZER(AAProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_AProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAProjectile(); \
	friend CARPROJECT_API class UClass* Z_Construct_UClass_AAProjectile(); \
public: \
	DECLARE_CLASS(AAProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CarProject"), NO_API) \
	DECLARE_SERIALIZER(AAProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CarProject_Source_CarProject_AProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAProjectile(AAProjectile&&); \
	NO_API AAProjectile(const AAProjectile&); \
public:


#define CarProject_Source_CarProject_AProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAProjectile(AAProjectile&&); \
	NO_API AAProjectile(const AAProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAProjectile)


#define CarProject_Source_CarProject_AProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define CarProject_Source_CarProject_AProjectile_h_11_PROLOG
#define CarProject_Source_CarProject_AProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_AProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_AProjectile_h_14_RPC_WRAPPERS \
	CarProject_Source_CarProject_AProjectile_h_14_INCLASS \
	CarProject_Source_CarProject_AProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarProject_Source_CarProject_AProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarProject_Source_CarProject_AProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	CarProject_Source_CarProject_AProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CarProject_Source_CarProject_AProjectile_h_14_INCLASS_NO_PURE_DECLS \
	CarProject_Source_CarProject_AProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarProject_Source_CarProject_AProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
