// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "University_ProjectCharacter.h"

#ifdef UNIVERSITY_PROJECT_University_ProjectCharacter_generated_h
#error "University_ProjectCharacter.generated.h already included, missing '#pragma once' in University_ProjectCharacter.h"
#endif
#define UNIVERSITY_PROJECT_University_ProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUniversity_ProjectCharacter *********************************************
#define FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectCharacter_NoRegister();

#define FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUniversity_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AUniversity_ProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNIVERSITY_PROJECT_API UClass* Z_Construct_UClass_AUniversity_ProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AUniversity_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/University_Project"), Z_Construct_UClass_AUniversity_ProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AUniversity_ProjectCharacter)


#define FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUniversity_ProjectCharacter(AUniversity_ProjectCharacter&&) = delete; \
	AUniversity_ProjectCharacter(const AUniversity_ProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniversity_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniversity_ProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUniversity_ProjectCharacter) \
	NO_API virtual ~AUniversity_ProjectCharacter();


#define FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_21_PROLOG
#define FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUniversity_ProjectCharacter;

// ********** End Class AUniversity_ProjectCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KeyT_Error_Desktop_University_Project_Source_University_Project_University_ProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
