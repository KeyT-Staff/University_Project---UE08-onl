// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversity_Project_init() {}
	UNIVERSITY_PROJECT_API UFunction* Z_Construct_UDelegateFunction_University_Project_BulletCountUpdatedDelegate__DelegateSignature();
	UNIVERSITY_PROJECT_API UFunction* Z_Construct_UDelegateFunction_University_Project_DamagedDelegate__DelegateSignature();
	UNIVERSITY_PROJECT_API UFunction* Z_Construct_UDelegateFunction_University_Project_PawnDeathDelegate__DelegateSignature();
	UNIVERSITY_PROJECT_API UFunction* Z_Construct_UDelegateFunction_University_Project_SprintStateChangedDelegate__DelegateSignature();
	UNIVERSITY_PROJECT_API UFunction* Z_Construct_UDelegateFunction_University_Project_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_University_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_University_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_University_Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_University_Project_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_University_Project_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_University_Project_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_University_Project_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_University_Project_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/University_Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7DAE9050,
				0x13EE3579,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_University_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_University_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_University_Project(Z_Construct_UPackage__Script_University_Project, TEXT("/Script/University_Project"), Z_Registration_Info_UPackage__Script_University_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7DAE9050, 0x13EE3579));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
