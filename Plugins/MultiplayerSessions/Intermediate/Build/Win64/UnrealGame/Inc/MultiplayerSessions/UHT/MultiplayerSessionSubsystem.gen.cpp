// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessions/Public/MultiplayerSessionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem_NoRegister();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms
		{
			bool IsSessionCreated;
		};
		static void NewProp_IsSessionCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSessionCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::NewProp_IsSessionCreated_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms*)Obj)->IsSessionCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::NewProp_IsSessionCreated = { "IsSessionCreated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::NewProp_IsSessionCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::NewProp_IsSessionCreated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///custom delegate to be broad to the menu class\n//<CustomDelegates>\n" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
		{ "ToolTip", "//custom delegate to be broad to the menu class\n//<CustomDelegates>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerCreateSession__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerCreateSession_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerCreateSession__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerStartSession_Parms
		{
			bool IsSessionStarted;
		};
		static void NewProp_IsSessionStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSessionStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::NewProp_IsSessionStarted_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerStartSession_Parms*)Obj)->IsSessionStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::NewProp_IsSessionStarted = { "IsSessionStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerStartSession_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::NewProp_IsSessionStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::NewProp_IsSessionStarted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerStartSession__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerStartSession_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerStartSession__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms
		{
			bool IsSessionDestroyed;
		};
		static void NewProp_IsSessionDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSessionDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::NewProp_IsSessionDestroyed_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms*)Obj)->IsSessionDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::NewProp_IsSessionDestroyed = { "IsSessionDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::NewProp_IsSessionDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::NewProp_IsSessionDestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerDestroySession__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerDestroySession_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerDestroySession__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMultiplayerSessionSubsystem::execOnDestroyGameSessionCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GameSession);
		P_GET_UBOOL(Z_Param_IsGameSessionDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroyGameSessionCompleted(Z_Param_GameSession,Z_Param_IsGameSessionDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerSessionSubsystem::execOnStartGameSessionCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GameSession);
		P_GET_UBOOL(Z_Param_isGameStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartGameSessionCompleted(Z_Param_GameSession,Z_Param_isGameStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerSessionSubsystem::execOnFindGameSessionCompleted)
	{
		P_GET_UBOOL(Z_Param_IsGameSessionFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFindGameSessionCompleted(Z_Param_IsGameSessionFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayerSessionSubsystem::execOnCreatGameSessionCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GameSession);
		P_GET_UBOOL(Z_Param_IsSessionCreated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreatGameSessionCompleted(Z_Param_GameSession,Z_Param_IsSessionCreated);
		P_NATIVE_END;
	}
	void UMultiplayerSessionSubsystem::StaticRegisterNativesUMultiplayerSessionSubsystem()
	{
		UClass* Class = UMultiplayerSessionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCreatGameSessionCompleted", &UMultiplayerSessionSubsystem::execOnCreatGameSessionCompleted },
			{ "OnDestroyGameSessionCompleted", &UMultiplayerSessionSubsystem::execOnDestroyGameSessionCompleted },
			{ "OnFindGameSessionCompleted", &UMultiplayerSessionSubsystem::execOnFindGameSessionCompleted },
			{ "OnStartGameSessionCompleted", &UMultiplayerSessionSubsystem::execOnStartGameSessionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics
	{
		struct MultiplayerSessionSubsystem_eventOnCreatGameSessionCompleted_Parms
		{
			FName GameSession;
			bool IsSessionCreated;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_GameSession;
		static void NewProp_IsSessionCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSessionCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayerSessionSubsystem_eventOnCreatGameSessionCompleted_Parms, GameSession), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_IsSessionCreated_SetBit(void* Obj)
	{
		((MultiplayerSessionSubsystem_eventOnCreatGameSessionCompleted_Parms*)Obj)->IsSessionCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_IsSessionCreated = { "IsSessionCreated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayerSessionSubsystem_eventOnCreatGameSessionCompleted_Parms), &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_IsSessionCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_GameSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::NewProp_IsSessionCreated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//<internal callback functions>\n" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
		{ "ToolTip", "<internal callback functions>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionSubsystem, nullptr, "OnCreatGameSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::MultiplayerSessionSubsystem_eventOnCreatGameSessionCompleted_Parms), Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics
	{
		struct MultiplayerSessionSubsystem_eventOnDestroyGameSessionCompleted_Parms
		{
			FName GameSession;
			bool IsGameSessionDestroyed;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_GameSession;
		static void NewProp_IsGameSessionDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameSessionDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayerSessionSubsystem_eventOnDestroyGameSessionCompleted_Parms, GameSession), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_IsGameSessionDestroyed_SetBit(void* Obj)
	{
		((MultiplayerSessionSubsystem_eventOnDestroyGameSessionCompleted_Parms*)Obj)->IsGameSessionDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_IsGameSessionDestroyed = { "IsGameSessionDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayerSessionSubsystem_eventOnDestroyGameSessionCompleted_Parms), &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_IsGameSessionDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_GameSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::NewProp_IsGameSessionDestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionSubsystem, nullptr, "OnDestroyGameSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::MultiplayerSessionSubsystem_eventOnDestroyGameSessionCompleted_Parms), Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics
	{
		struct MultiplayerSessionSubsystem_eventOnFindGameSessionCompleted_Parms
		{
			bool IsGameSessionFound;
		};
		static void NewProp_IsGameSessionFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameSessionFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::NewProp_IsGameSessionFound_SetBit(void* Obj)
	{
		((MultiplayerSessionSubsystem_eventOnFindGameSessionCompleted_Parms*)Obj)->IsGameSessionFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::NewProp_IsGameSessionFound = { "IsGameSessionFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayerSessionSubsystem_eventOnFindGameSessionCompleted_Parms), &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::NewProp_IsGameSessionFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::NewProp_IsGameSessionFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionSubsystem, nullptr, "OnFindGameSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::MultiplayerSessionSubsystem_eventOnFindGameSessionCompleted_Parms), Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics
	{
		struct MultiplayerSessionSubsystem_eventOnStartGameSessionCompleted_Parms
		{
			FName GameSession;
			bool isGameStarted;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_GameSession;
		static void NewProp_isGameStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGameStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayerSessionSubsystem_eventOnStartGameSessionCompleted_Parms, GameSession), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_isGameStarted_SetBit(void* Obj)
	{
		((MultiplayerSessionSubsystem_eventOnStartGameSessionCompleted_Parms*)Obj)->isGameStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_isGameStarted = { "isGameStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayerSessionSubsystem_eventOnStartGameSessionCompleted_Parms), &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_isGameStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_GameSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::NewProp_isGameStarted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionSubsystem, nullptr, "OnStartGameSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::MultiplayerSessionSubsystem_eventOnStartGameSessionCompleted_Parms), Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerSessionSubsystem);
	UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem_NoRegister()
	{
		return UMultiplayerSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnCreatGameSessionCompleted, "OnCreatGameSessionCompleted" }, // 2829529815
		{ &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnDestroyGameSessionCompleted, "OnDestroyGameSessionCompleted" }, // 2656826525
		{ &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnFindGameSessionCompleted, "OnFindGameSessionCompleted" }, // 1735076981
		{ &Z_Construct_UFunction_UMultiplayerSessionSubsystem_OnStartGameSessionCompleted, "OnStartGameSessionCompleted" }, // 2368508657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//</CustomDelegates>\n" },
		{ "IncludePath", "MultiplayerSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
		{ "ToolTip", "</CustomDelegates>" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::ClassParams = {
		&UMultiplayerSessionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayerSessionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayerSessionSubsystem.OuterSingleton;
	}
	template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<UMultiplayerSessionSubsystem>()
	{
		return UMultiplayerSessionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionSubsystem);
	UMultiplayerSessionSubsystem::~UMultiplayerSessionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionSubsystem, UMultiplayerSessionSubsystem::StaticClass, TEXT("UMultiplayerSessionSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionSubsystem), 1793979137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_2715311437(TEXT("/Script/MultiplayerSessions"),
		Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
