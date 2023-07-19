// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessions/Public/Menu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu() {}
// Cross Module References
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMenu();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
// End Cross Module References
	DEFINE_FUNCTION(UMenu::execMenuSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnect);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchType);
		P_GET_PROPERTY(FStrProperty,Z_Param_LobbyMapPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuSetup(Z_Param_NumberOfPublicConnect,Z_Param_MatchType,Z_Param_LobbyMapPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execMenuOnDestroySessionCompleted)
	{
		P_GET_UBOOL(Z_Param_IsSessionStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuOnDestroySessionCompleted(Z_Param_IsSessionStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execMenuOnStartSessionCompleted)
	{
		P_GET_UBOOL(Z_Param_IsSessionStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuOnStartSessionCompleted(Z_Param_IsSessionStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execMenuOnCreateSessionCompleted)
	{
		P_GET_UBOOL(Z_Param_IsSessionCreated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuOnCreateSessionCompleted(Z_Param_IsSessionCreated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execOnQuiteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuiteButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execOnJoinButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenu::execOnHostButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHostButtonClicked();
		P_NATIVE_END;
	}
	void UMenu::StaticRegisterNativesUMenu()
	{
		UClass* Class = UMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MenuOnCreateSessionCompleted", &UMenu::execMenuOnCreateSessionCompleted },
			{ "MenuOnDestroySessionCompleted", &UMenu::execMenuOnDestroySessionCompleted },
			{ "MenuOnStartSessionCompleted", &UMenu::execMenuOnStartSessionCompleted },
			{ "MenuSetup", &UMenu::execMenuSetup },
			{ "OnHostButtonClicked", &UMenu::execOnHostButtonClicked },
			{ "OnJoinButtonClicked", &UMenu::execOnJoinButtonClicked },
			{ "OnQuiteButtonClicked", &UMenu::execOnQuiteButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics
	{
		struct Menu_eventMenuOnCreateSessionCompleted_Parms
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
	void Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::NewProp_IsSessionCreated_SetBit(void* Obj)
	{
		((Menu_eventMenuOnCreateSessionCompleted_Parms*)Obj)->IsSessionCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::NewProp_IsSessionCreated = { "IsSessionCreated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Menu_eventMenuOnCreateSessionCompleted_Parms), &Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::NewProp_IsSessionCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::NewProp_IsSessionCreated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//<MenuCallbacksForMultiplayerSubsystem>\n" },
		{ "ModuleRelativePath", "Public/Menu.h" },
		{ "ToolTip", "<MenuCallbacksForMultiplayerSubsystem>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "MenuOnCreateSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::Menu_eventMenuOnCreateSessionCompleted_Parms), Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics
	{
		struct Menu_eventMenuOnDestroySessionCompleted_Parms
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
	void Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::NewProp_IsSessionStarted_SetBit(void* Obj)
	{
		((Menu_eventMenuOnDestroySessionCompleted_Parms*)Obj)->IsSessionStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::NewProp_IsSessionStarted = { "IsSessionStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Menu_eventMenuOnDestroySessionCompleted_Parms), &Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::NewProp_IsSessionStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::NewProp_IsSessionStarted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "MenuOnDestroySessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::Menu_eventMenuOnDestroySessionCompleted_Parms), Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics
	{
		struct Menu_eventMenuOnStartSessionCompleted_Parms
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
	void Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::NewProp_IsSessionStarted_SetBit(void* Obj)
	{
		((Menu_eventMenuOnStartSessionCompleted_Parms*)Obj)->IsSessionStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::NewProp_IsSessionStarted = { "IsSessionStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Menu_eventMenuOnStartSessionCompleted_Parms), &Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::NewProp_IsSessionStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::NewProp_IsSessionStarted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "MenuOnStartSessionCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::Menu_eventMenuOnStartSessionCompleted_Parms), Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_MenuSetup_Statics
	{
		struct Menu_eventMenuSetup_Parms
		{
			int32 NumberOfPublicConnect;
			FString MatchType;
			FString LobbyMapPath;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnect;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyMapPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnect = { "NumberOfPublicConnect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Menu_eventMenuSetup_Parms, NumberOfPublicConnect), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Menu_eventMenuSetup_Parms, MatchType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_LobbyMapPath = { "LobbyMapPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Menu_eventMenuSetup_Parms, LobbyMapPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenu_MenuSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenu_MenuSetup_Statics::NewProp_LobbyMapPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_MenuSetup_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_LobbyMapPath", "/Game/MenuMap/Lobby" },
		{ "CPP_Default_MatchType", "FreeForAll" },
		{ "CPP_Default_NumberOfPublicConnect", "4" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_MenuSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "MenuSetup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMenu_MenuSetup_Statics::Menu_eventMenuSetup_Parms), Z_Construct_UFunction_UMenu_MenuSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_MenuSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_MenuSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_MenuSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//<ButtonCallbacks>\n" },
		{ "ModuleRelativePath", "Public/Menu.h" },
		{ "ToolTip", "<ButtonCallbacks>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnHostButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_OnHostButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnHostButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnJoinButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_OnJoinButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnJoinButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "OnQuiteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenu_OnQuiteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_OnQuiteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenu);
	UClass* Z_Construct_UClass_UMenu_NoRegister()
	{
		return UMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MHostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MHostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MJoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MJoinButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MQuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MQuitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenu_MenuOnCreateSessionCompleted, "MenuOnCreateSessionCompleted" }, // 2741458678
		{ &Z_Construct_UFunction_UMenu_MenuOnDestroySessionCompleted, "MenuOnDestroySessionCompleted" }, // 195381925
		{ &Z_Construct_UFunction_UMenu_MenuOnStartSessionCompleted, "MenuOnStartSessionCompleted" }, // 323054723
		{ &Z_Construct_UFunction_UMenu_MenuSetup, "MenuSetup" }, // 2705561378
		{ &Z_Construct_UFunction_UMenu_OnHostButtonClicked, "OnHostButtonClicked" }, // 3188018964
		{ &Z_Construct_UFunction_UMenu_OnJoinButtonClicked, "OnJoinButtonClicked" }, // 1920888528
		{ &Z_Construct_UFunction_UMenu_OnQuiteButtonClicked, "OnQuiteButtonClicked" }, // 1858572788
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Menu.h" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::NewProp_MHostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//bind to the blueprint host button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu.h" },
		{ "ToolTip", "bind to the blueprint host button" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_MHostButton = { "MHostButton", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenu, MHostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::NewProp_MHostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::NewProp_MHostButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::NewProp_MJoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//bind to the blue print join button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu.h" },
		{ "ToolTip", "bind to the blue print join button" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_MJoinButton = { "MJoinButton", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenu, MJoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::NewProp_MJoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::NewProp_MJoinButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenu_Statics::NewProp_MQuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_MQuitButton = { "MQuitButton", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMenu, MQuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::NewProp_MQuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::NewProp_MQuitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_MHostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_MJoinButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_MQuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenu_Statics::ClassParams = {
		&UMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenu()
	{
		if (!Z_Registration_Info_UClass_UMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenu.OuterSingleton, Z_Construct_UClass_UMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenu.OuterSingleton;
	}
	template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<UMenu>()
	{
		return UMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenu);
	UMenu::~UMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenu, UMenu::StaticClass, TEXT("UMenu"), &Z_Registration_Info_UClass_UMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenu), 1309982185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_1573258618(TEXT("/Script/MultiplayerSessions"),
		Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_matth_Documents_Unreal_Projects_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
