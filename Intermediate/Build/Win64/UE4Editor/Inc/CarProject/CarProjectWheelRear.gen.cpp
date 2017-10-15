// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarProjectWheelRear.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarProjectWheelRear() {}
// Cross Module References
	CARPROJECT_API UClass* Z_Construct_UClass_UCarProjectWheelRear_NoRegister();
	CARPROJECT_API UClass* Z_Construct_UClass_UCarProjectWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CarProject();
// End Cross Module References
	void UCarProjectWheelRear::StaticRegisterNativesUCarProjectWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UCarProjectWheelRear_NoRegister()
	{
		return UCarProjectWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UCarProjectWheelRear()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVehicleWheel();
			Z_Construct_UPackage__Script_CarProject();
			OuterClass = UCarProjectWheelRear::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UCarProjectWheelRear> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CarProjectWheelRear.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CarProjectWheelRear.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarProjectWheelRear, 4025956048);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarProjectWheelRear(Z_Construct_UClass_UCarProjectWheelRear, &UCarProjectWheelRear::StaticClass, TEXT("/Script/CarProject"), TEXT("UCarProjectWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarProjectWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
