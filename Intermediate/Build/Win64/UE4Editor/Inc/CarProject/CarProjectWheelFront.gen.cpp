// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarProjectWheelFront.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarProjectWheelFront() {}
// Cross Module References
	CARPROJECT_API UClass* Z_Construct_UClass_UCarProjectWheelFront_NoRegister();
	CARPROJECT_API UClass* Z_Construct_UClass_UCarProjectWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CarProject();
// End Cross Module References
	void UCarProjectWheelFront::StaticRegisterNativesUCarProjectWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCarProjectWheelFront_NoRegister()
	{
		return UCarProjectWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UCarProjectWheelFront()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVehicleWheel();
			Z_Construct_UPackage__Script_CarProject();
			OuterClass = UCarProjectWheelFront::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UCarProjectWheelFront> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CarProjectWheelFront.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CarProjectWheelFront.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarProjectWheelFront, 3743051207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarProjectWheelFront(Z_Construct_UClass_UCarProjectWheelFront, &UCarProjectWheelFront::StaticClass, TEXT("/Script/CarProject"), TEXT("UCarProjectWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarProjectWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
