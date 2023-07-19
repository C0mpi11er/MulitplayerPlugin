// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_MultiplayerSessionSubsystem_generated_h
#error "MultiplayerSessionSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionSubsystem.h"
#endif
#define MULTIPLAYERSESSIONS_MultiplayerSessionSubsystem_generated_h

#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_15_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms \
{ \
	bool IsSessionCreated; \
}; \
static inline void FMultiplayerCreateSession_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerCreateSession, bool IsSessionCreated) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms Parms; \
	Parms.IsSessionCreated=IsSessionCreated ? true : false; \
	MultiplayerCreateSession.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_16_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerStartSession_Parms \
{ \
	bool IsSessionStarted; \
}; \
static inline void FMultiplayerStartSession_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerStartSession, bool IsSessionStarted) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerStartSession_Parms Parms; \
	Parms.IsSessionStarted=IsSessionStarted ? true : false; \
	MultiplayerStartSession.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_17_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms \
{ \
	bool IsSessionDestroyed; \
}; \
static inline void FMultiplayerDestroySession_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerDestroySession, bool IsSessionDestroyed) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms Parms; \
	Parms.IsSessionDestroyed=IsSessionDestroyed ? true : false; \
	MultiplayerDestroySession.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_SPARSE_DATA
#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDestroyGameSessionCompleted); \
	DECLARE_FUNCTION(execOnStartGameSessionCompleted); \
	DECLARE_FUNCTION(execOnFindGameSessionCompleted); \
	DECLARE_FUNCTION(execOnCreatGameSessionCompleted);


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDestroyGameSessionCompleted); \
	DECLARE_FUNCTION(execOnStartGameSessionCompleted); \
	DECLARE_FUNCTION(execOnFindGameSessionCompleted); \
	DECLARE_FUNCTION(execOnCreatGameSessionCompleted);


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_ACCESSORS
#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	NO_API virtual ~UMultiplayerSessionSubsystem();


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	NO_API virtual ~UMultiplayerSessionSubsystem();


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_23_PROLOG
#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_SPARSE_DATA \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_RPC_WRAPPERS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_ACCESSORS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_INCLASS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_SPARSE_DATA \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_ACCESSORS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class UMultiplayerSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
