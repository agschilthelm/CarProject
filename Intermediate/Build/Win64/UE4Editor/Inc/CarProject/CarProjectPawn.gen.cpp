// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarProjectPawn.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarProjectPawn() {}
// Cross Module References
	CARPROJECT_API UFunction* Z_Construct_UFunction_ACarProjectPawn_Fire();
	CARPROJECT_API UClass* Z_Construct_UClass_ACarProjectPawn();
	CARPROJECT_API UFunction* Z_Construct_UFunction_ACarProjectPawn_InitializeAttributes();
	CARPROJECT_API UClass* Z_Construct_UClass_ACarProjectPawn_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_CarProject();
	CARPROJECT_API UClass* Z_Construct_UClass_AAProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ACarProjectPawn::StaticRegisterNativesACarProjectPawn()
	{
		UClass* Class = ACarProjectPawn::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&ACarProjectPawn::execFire },
			{ "InitializeAttributes", (Native)&ACarProjectPawn::execInitializeAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ACarProjectPawn_Fire()
	{
		UObject* Outer = Z_Construct_UClass_ACarProjectPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function that handles firing projectiles."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACarProjectPawn_InitializeAttributes()
	{
		struct CarProjectPawn_eventInitializeAttributes_Parms
		{
			FString type_str;
		};
		UObject* Outer = Z_Construct_UClass_ACarProjectPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitializeAttributes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(CarProjectPawn_eventInitializeAttributes_Parms));
			UProperty* NewProp_type_str = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("type_str"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(type_str, CarProjectPawn_eventInitializeAttributes_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACarProjectPawn_NoRegister()
	{
		return ACarProjectPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarProjectPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWheeledVehicle();
			Z_Construct_UPackage__Script_CarProject();
			OuterClass = ACarProjectPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ACarProjectPawn_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_ACarProjectPawn_InitializeAttributes());

				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, ACarProjectPawn), 0x0014000000000001, Z_Construct_UClass_AAProjectile_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Speed, ACarProjectPawn), 0x0010000000000005);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Health, ACarProjectPawn), 0x0010000000000005);
				UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Type, ACarProjectPawn), 0x0010000000000005);
				UProperty* NewProp_MuzzleOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MuzzleOffset, ACarProjectPawn), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInReverseGear, ACarProjectPawn);
				UProperty* NewProp_bInReverseGear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInReverseGear"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInReverseGear, ACarProjectPawn), 0x0010000000030015, CPP_BOOL_PROPERTY_BITMASK(bInReverseGear, ACarProjectPawn), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInCarCameraActive, ACarProjectPawn);
				UProperty* NewProp_bInCarCameraActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInCarCameraActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInCarCameraActive, ACarProjectPawn), 0x0010000000030015, CPP_BOOL_PROPERTY_BITMASK(bInCarCameraActive, ACarProjectPawn), sizeof(bool), true);
				UProperty* NewProp_GearDisplayReverseColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayReverseColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GearDisplayReverseColor, ACarProjectPawn), 0x0010000000030015, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_GearDisplayColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GearDisplayColor, ACarProjectPawn), 0x0010000000030015, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_GearDisplayString = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GearDisplayString"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(GearDisplayString, ACarProjectPawn), 0x0010000000030015);
				UProperty* NewProp_SpeedDisplayString = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedDisplayString"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(SpeedDisplayString, ACarProjectPawn), 0x0010000000030015);
				UProperty* NewProp_EngineSoundComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EngineSoundComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EngineSoundComponent, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_InCarGear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InCarGear"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InCarGear, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_InCarSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InCarSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InCarSpeed, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_InternalCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InternalCamera, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_InternalCameraBase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalCameraBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InternalCameraBase, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_SpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArm, ACarProjectPawn), 0x00400000000b001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACarProjectPawn_Fire(), "Fire"); // 2971620129
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACarProjectPawn_InitializeAttributes(), "InitializeAttributes"); // 356958416
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ACarProjectPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn."));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("CarPawn"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("ToolTip"), TEXT("The vehicle's health"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("CarPawn"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_Health, TEXT("ToolTip"), TEXT("The vehicle's health"));
				MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("CarPawn"));
				MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_Type, TEXT("ToolTip"), TEXT("The vehicle's health"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the camera lorcation."));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_bInReverseGear, TEXT("ToolTip"), TEXT("Are we in reverse gear"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_bInCarCameraActive, TEXT("ToolTip"), TEXT("Are we using incar camera"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayReverseColor, TEXT("ToolTip"), TEXT("The color of the incar gear text when in reverse"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayColor, TEXT("ToolTip"), TEXT("The color of the incar gear text in forward gears"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_GearDisplayString, TEXT("ToolTip"), TEXT("The current gear as a string (R,N, 1,2 etc)"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_SpeedDisplayString, TEXT("ToolTip"), TEXT("The current speed as a string eg 10 km/h"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_EngineSoundComponent, TEXT("ToolTip"), TEXT("Audio component for the engine sound"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_InCarGear, TEXT("ToolTip"), TEXT("Text component for the In-Car gear"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_InCarSpeed, TEXT("ToolTip"), TEXT("Text component for the In-Car speed"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_InternalCamera, TEXT("ToolTip"), TEXT("Camera component for the In-Car view"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_InternalCameraBase, TEXT("ToolTip"), TEXT("SCene component for the In-Car view origin"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("ToolTip"), TEXT("Camera component that will be our viewpoint"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ModuleRelativePath"), TEXT("CarProjectPawn.h"));
				MetaData->SetValue(NewProp_SpringArm, TEXT("ToolTip"), TEXT("Spring arm that will offset the camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarProjectPawn, 500145114);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarProjectPawn(Z_Construct_UClass_ACarProjectPawn, &ACarProjectPawn::StaticClass, TEXT("/Script/CarProject"), TEXT("ACarProjectPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarProjectPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
