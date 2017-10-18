// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AProjectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAProjectile() {}
// Cross Module References
	CARPROJECT_API UFunction* Z_Construct_UFunction_AAProjectile_OnHit();
	CARPROJECT_API UClass* Z_Construct_UClass_AAProjectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CARPROJECT_API UClass* Z_Construct_UClass_AAProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CarProject();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AAProjectile::StaticRegisterNativesAAProjectile()
	{
		UClass* Class = AAProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AAProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AAProjectile_OnHit()
	{
		struct AProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* Actor;
			UPrimitiveComponent* Other;
			FVector Impulse;
			FHitResult HitResult;
		};
		UObject* Outer = Z_Construct_UClass_AAProjectile();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(AProjectile_eventOnHit_Parms));
			UProperty* NewProp_HitResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitResult, AProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_Impulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Impulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Impulse, AProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Other = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Other"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Other, AProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, AProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("void OnHit(AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit);"));
			MetaData->SetValue(NewProp_HitResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Other, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAProjectile_NoRegister()
	{
		return AAProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AAProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CarProject();
			OuterClass = AAProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AAProjectile_OnHit());

				UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Type, AAProjectile), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Speed, AAProjectile), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Damage, AAProjectile), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_ProjectileMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovementComponent, AAProjectile), 0x00100000000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AAProjectile), 0x00100000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAProjectile_OnHit(), "OnHit"); // 778436439
				static TCppClassTypeInfo<TCppClassTypeTraits<AAProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(NewProp_Type, TEXT("ToolTip"), TEXT("The type of projectile. Will effect its appearance/damage/speed etc."));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("ToolTip"), TEXT("How fast the projectile goes"));
				MetaData->SetValue(NewProp_Damage, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_Damage, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(NewProp_Damage, TEXT("ToolTip"), TEXT("Determines how much damage a projectile will do when collding with another actor"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ToolTip"), TEXT("Projectile movement component."));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("AProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAProjectile, 1333935298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAProjectile(Z_Construct_UClass_AAProjectile, &AAProjectile::StaticClass, TEXT("/Script/CarProject"), TEXT("AAProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
