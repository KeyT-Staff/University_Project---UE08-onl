// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "University_ProjectCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUniversity_ProjectCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectCameraManager();
UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_University_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUniversity_ProjectCameraManager *****************************************
void AUniversity_ProjectCameraManager::StaticRegisterNativesAUniversity_ProjectCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUniversity_ProjectCameraManager;
UClass* AUniversity_ProjectCameraManager::GetPrivateStaticClass()
{
	using TClass = AUniversity_ProjectCameraManager;
	if (!Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("University_ProjectCameraManager"),
			Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.InnerSingleton,
			StaticRegisterNativesAUniversity_ProjectCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AUniversity_ProjectCameraManager_NoRegister()
{
	return AUniversity_ProjectCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "University_ProjectCameraManager.h" },
		{ "ModuleRelativePath", "University_ProjectCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniversity_ProjectCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_University_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::ClassParams = {
	&AUniversity_ProjectCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUniversity_ProjectCameraManager()
{
	if (!Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.OuterSingleton, Z_Construct_UClass_AUniversity_ProjectCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniversity_ProjectCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUniversity_ProjectCameraManager);
AUniversity_ProjectCameraManager::~AUniversity_ProjectCameraManager() {}
// ********** End Class AUniversity_ProjectCameraManager *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_University_Project___UE08_onl_Source_University_Project_University_ProjectCameraManager_h__Script_University_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniversity_ProjectCameraManager, AUniversity_ProjectCameraManager::StaticClass, TEXT("AUniversity_ProjectCameraManager"), &Z_Registration_Info_UClass_AUniversity_ProjectCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniversity_ProjectCameraManager), 824092697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_University_Project___UE08_onl_Source_University_Project_University_ProjectCameraManager_h__Script_University_Project_2542990374(TEXT("/Script/University_Project"),
	Z_CompiledInDeferFile_FID_University_Project___UE08_onl_Source_University_Project_University_ProjectCameraManager_h__Script_University_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_University_Project___UE08_onl_Source_University_Project_University_ProjectCameraManager_h__Script_University_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
