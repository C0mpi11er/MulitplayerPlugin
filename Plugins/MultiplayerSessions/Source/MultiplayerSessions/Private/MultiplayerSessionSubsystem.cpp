// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionSubsystem.h"
#include "OnlineSessionSettings.h"

UMultiplayerSessionSubsystem::UMultiplayerSessionSubsystem():
	MCreateGameSessionDelegate(
		FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreatGameSessionCompleted)),
	MFindGameSessionDelegate(
		FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindGameSessionCompleted)),
	MJoinGameSessionDelegate(
		FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinGameSessionCompleted)),
	MStartGameSessionDelegate(
		FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartGameSessionCompleted)),
	MDestroyGameSessionDelegate(
		FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroyGameSessionCompleted))

{
	MOnlineSubsystem = IOnlineSubsystem::Get();
	if (MOnlineSubsystem)
		MSessionInterface = MOnlineSubsystem->GetSessionInterface();
}

void UMultiplayerSessionSubsystem::CreateGameSession(int32 NumberOfPublicConnect, FString& MatchType)
{
	//exit function if null
	if (!MSessionInterface.IsValid())
	{
		return;
	}
	//destroy already existing session
	if ([[maybe_unused]] auto Existing{MSessionInterface->GetNamedSession(NAME_GameSession)})
	{
		MCreateOnDestroySession=true;
		MLastMatchType=MatchType;
		MLastNumberOfPublicConnects=NumberOfPublicConnect;
		DestroyGameSession(NAME_GameSession,true);
	}
		

	//store the delegate handle to access functionalities
	MCreateGameDelegateHandle = MSessionInterface->
		AddOnCreateSessionCompleteDelegate_Handle(MCreateGameSessionDelegate);

	if (const UWorld* World{GetWorld()})
	{
		const ULocalPlayer* Player{World->GetFirstLocalPlayerFromController()};
		MLastSessionSettings = MakeShareable(new FOnlineSessionSettings);
		if (MLastSessionSettings)
		{
			if (MOnlineSubsystem)
				//if session is a lan match
				MLastSessionSettings->bIsLANMatch = MOnlineSubsystem->GetSubsystemName() == "NULL" ? true : false;
			MLastSessionSettings->NumPublicConnections = NumberOfPublicConnect;
			MLastSessionSettings->bShouldAdvertise = true;
			MLastSessionSettings->bUsesPresence = true;
			MLastSessionSettings->bAllowJoinInProgress = true;
			MLastSessionSettings->bAllowJoinViaPresence = true;
			MLastSessionSettings->Set(FName{"MatchType"}, MatchType,
			                          EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
			MLastSessionSettings->bUseLobbiesIfAvailable = true;
			MLastSessionSettings->BuildUniqueId = 1;
		}
		if (Player) //session was not created
			if (!MSessionInterface->CreateSession(*Player->GetPreferredUniqueNetId(), NAME_GameSession,
			                                      *MLastSessionSettings))
			{
				//clear the Delegate handle if session is not created
				MSessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(MCreateGameDelegateHandle);
				//broadcast failure to all classes(menu class)
				MMultiplayerCreateSessionDelegate.Broadcast(false);
			}
	}
}

void UMultiplayerSessionSubsystem::FindGameSession(int32 MaxMatchResult)
{
	if (!MSessionInterface.IsValid())
	{
		TArray<FOnlineSessionSearchResult>EmptyArray{};
		MMultiplayerFindSessionDelegate.Broadcast(EmptyArray,false);
	}
	
	if (MSessionInterface.IsValid())
	{
		MLastSessionSearchSettings = MakeShareable(new FOnlineSessionSearch());

		//to know what to search for
		if (MLastSessionSearchSettings.IsValid())
		{
			MLastSessionSearchSettings->MaxSearchResults = MaxMatchResult;
			if (MOnlineSubsystem)
				MLastSessionSearchSettings->bIsLanQuery = MOnlineSubsystem->Get()->GetSubsystemName() == "NULL"
					                                          ? true
					                                          : false;
			MFindGameDelegateHandle = MSessionInterface->AddOnFindSessionsCompleteDelegate_Handle(
				MFindGameSessionDelegate);
			MLastSessionSearchSettings->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
		}

		const ULocalPlayer* Player{GetWorld()->GetFirstLocalPlayerFromController()};

		if (Player && MLastSessionSearchSettings.IsValid())
		{
			//could not find session
			if (!MSessionInterface->FindSessions(*Player->GetPreferredUniqueNetId(),
			                                     MLastSessionSearchSettings.ToSharedRef()))
			{
				MSessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(MFindGameDelegateHandle);
				TArray<FOnlineSessionSearchResult> EmptyArray{};
				//alert the menu class of search failure
				MMultiplayerFindSessionDelegate.Broadcast(EmptyArray, false);
			}
		}
	}
}

void UMultiplayerSessionSubsystem::JoinGameSession(const FOnlineSessionSearchResult& Result)
{
	if (!MSessionInterface.IsValid())
	{
		// tell the menu class there was a problem connecting
		MMultiplayerJoinSessionDelegate.Broadcast(EOnJoinSessionCompleteResult::UnknownError, false);
		return;
	}
	//storing delegate in handle
	MJoinGameDelegateHandle = MSessionInterface->AddOnJoinSessionCompleteDelegate_Handle(MJoinGameSessionDelegate);
	if (const ULocalPlayer* Player{GetWorld()->GetFirstLocalPlayerFromController()})
	{
		//could not join session
		if (!MSessionInterface->JoinSession(*Player->GetPreferredUniqueNetId(), NAME_GameSession, Result))
		{
			//flush handle from array of online session delegates
			MSessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(MJoinGameDelegateHandle);
			//broad cast to the menu class
			MMultiplayerJoinSessionDelegate.Broadcast(EOnJoinSessionCompleteResult::UnknownError, false);
		}
	}
}

void UMultiplayerSessionSubsystem::StartGameSession(FName SessionName, bool IsGameSessionStarted)
{
	if (!MSessionInterface.IsValid()) return;

	//add to array of online session delegates
	MStartGameDelegateHandle = MSessionInterface->AddOnStartSessionCompleteDelegate_Handle(MStartGameSessionDelegate);
	if (!MSessionInterface->StartSession(NAME_GameSession))
	{
		//clear the handle
		MSessionInterface->ClearOnStartSessionCompleteDelegate_Handle(MStartGameDelegateHandle);
		//broadcast to the menu class 
		MMultiplayerStartSessionDelegate.Broadcast(false);
	}
}

void UMultiplayerSessionSubsystem::DestroyGameSession(FName SessionName, bool IsGameSessionEnded)
{
	if (!MSessionInterface.IsValid())
	{
		//broad cast failure
		MMultiplayerDestroySessionDelegate.Broadcast(false);
		return;
	}

	MDestroyGameDelegateHandle=MSessionInterface->AddOnDestroySessionCompleteDelegate_Handle(MDestroyGameSessionDelegate);

	// session destroy was not completed
	if (!MSessionInterface->DestroySession(SessionName))
	{  //flush handle 
		MSessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(MDestroyGameDelegateHandle);
		//broadcast failure
		MMultiplayerDestroySessionDelegate.Broadcast(false);
	}
}


void UMultiplayerSessionSubsystem::OnCreatGameSessionCompleted(FName GameSession, bool IsSessionCreated)
{
	if (MSessionInterface.IsValid())
	{
		//session was created and handle is being flushed
		MSessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(MCreateGameDelegateHandle);
		//broadcast to the menu class
		MMultiplayerCreateSessionDelegate.Broadcast(IsSessionCreated);
	}
}

void UMultiplayerSessionSubsystem::OnFindGameSessionCompleted(bool IsGameSessionFound)
{
	//flush online session handle
	if (IsGameSessionFound && MSessionInterface)
		MSessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(MFindGameDelegateHandle);

	//because completed search in presence was completed but no match
	if (MLastSessionSearchSettings)
	{
		if (MLastSessionSearchSettings->SearchResults.Num() <= 0)
		{
			TArray<FOnlineSessionSearchResult> EmptySearchArray;
			MMultiplayerFindSessionDelegate.Broadcast(EmptySearchArray, false);
			return;
		}
	}
	//give menu function info of the completed search
	if (MLastSessionSearchSettings)
		MMultiplayerFindSessionDelegate.Broadcast(MLastSessionSearchSettings->SearchResults, true);
}

void UMultiplayerSessionSubsystem::OnJoinGameSessionCompleted(FName GameSession,
                                                              EOnJoinSessionCompleteResult::Type Result)
{
	//flush delegate from list of online session delegate
	if (MSessionInterface)
		MSessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(MJoinGameDelegateHandle);
	// inform the menu class.
	MMultiplayerJoinSessionDelegate.Broadcast(EOnJoinSessionCompleteResult::Success, true);
}

void UMultiplayerSessionSubsystem::OnStartGameSessionCompleted(FName GameSession, bool isGameStarted)
{
	if (isGameStarted)
	{
		if (MSessionInterface)
			MSessionInterface->ClearOnStartSessionCompleteDelegate_Handle(MStartGameDelegateHandle);
		MMultiplayerStartSessionDelegate.Broadcast(true);
	}
}

void UMultiplayerSessionSubsystem::OnDestroyGameSessionCompleted(FName GameSession, bool IsGameSessionDestroyed)
{
	if(!MSessionInterface.IsValid()) return;
	if (IsGameSessionDestroyed)
	{
		//flush delegate
		MSessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(MDestroyGameDelegateHandle);

		if (MCreateOnDestroySession)
		{
			// not to mistakenly spam the destroy session
			MCreateOnDestroySession=false;
			CreateGameSession(MLastNumberOfPublicConnects,MLastMatchType);
			//broadcast success.
			MMultiplayerDestroySessionDelegate.Broadcast(true);
		}
		
	}
}
