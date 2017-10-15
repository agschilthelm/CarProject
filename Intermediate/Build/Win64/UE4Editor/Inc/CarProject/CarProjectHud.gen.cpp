// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarProjectHud.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarProjectHud() {}
// Cross Module References
	CARPROJECT_API UClass* Z_Construct_UClass_ACarProjectHud_NoRegister();
	CARPROJECT_API UClass* Z_Construct_UClass_ACarProjectHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CarProject();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ACarProjectHud::StaticRegisterNativesACarProjectHud()
	{
	}
	UClass* Z_Construct_UClass_ACarProjectHud_NoRegister()
	{
		return ACarProjectHud::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarProjectHud()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_CarProject();
			OuterClass = ACarProjectHud::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2080028Cu;


				UProperty* NewProp_HUDFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDFont"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HUDFont, ACarProjectHud), 0x0010000000000000, Z_Construct_UClass_UFont_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ACarProjectHud> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CarProjectHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CarProjectHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ModuleRelativePath"), TEXT("CarProjectHud.h"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ToolTip"), TEXT("Font used to render the vehicle info"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarProjectHud, 1865193487);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarProjectHud(Z_Construct_UClass_ACarProjectHud, &ACarProjectHud::StaticClass, TEXT("/Script/CarProject"), TEXT("ACarProjectHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarProjectHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
