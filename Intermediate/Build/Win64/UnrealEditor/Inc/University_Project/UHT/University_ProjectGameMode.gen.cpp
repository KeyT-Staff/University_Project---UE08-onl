// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "University_ProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUniversity_ProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectGameMode();
UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_University_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUniversity_ProjectGameMode **********************************************
void AUniversity_ProjectGameMode::StaticRegisterNativesAUniversity_ProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUniversity_ProjectGameMode;
UClass* AUniversity_ProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AUniversity_ProjectGameMode;
	if (!Z_Registration_Info_UClass_AUniversity_ProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("University_ProjectGameMode"),
			Z_Registration_Info_UClass_AUniversity_ProjectGameMode.InnerSingleton,
			StaticRegisterNativesAUniversity_ProjectGameMode,
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
	return Z_Registration_Info_UClass_AUniversity_ProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUniversity_ProjectGameMode_NoRegister()
{
	return AUniversity_ProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUniversity_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "University_ProjectGameMode.h" },
		{ "ModuleRelativePath", "University_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniversity_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_University_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::ClassParams = {
	&AUniversity_ProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUniversity_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AUniversity_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniversity_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AUniversity_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniversity_ProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUniversity_ProjectGameMode);
AUniversity_ProjectGameMode::~AUniversity_ProjectGameMode() {}
// ********** End Class AUniversity_ProjectGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectGameMode_h__Script_University_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniversity_ProjectGameMode, AUniversity_ProjectGameMode::StaticClass, TEXT("AUniversity_ProjectGameMode"), &Z_Registration_Info_UClass_AUniversity_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniversity_ProjectGameMode), 1774207960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectGameMode_h__Script_University_Project_991476320(TEXT("/Script/University_Project"),
	Z_CompiledInDeferFile_FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectGameMode_h__Script_University_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectGameMode_h__Script_University_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
