// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MultiplayerSessionSubsystem.generated.h"

/**
 * 
 */
//custom delegate to be broad to the menu class
//<CustomDelegates>
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerCreateSession,bool,IsSessionCreated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerStartSession,bool,IsSessionStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerDestroySession,bool,IsSessionDestroyed);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerFindSession,TArray<FOnlineSessionSearchResult>& SearchResult,bool IsFoundResult);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerJoinSession,EOnJoinSessionCompleteResult::Type JoinResult,bool IsFoundResult);
//</CustomDelegates>


UCLASS()
class MULTIPLAYERSESSIONS_API UMultiplayerSessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMultiplayerSessionSubsystem();
	
	//<Custom Delegates>
	FMultiplayerCreateSession MMultiplayerCreateSessionDelegate;
	FMultiplayerFindSession MMultiplayerFindSessionDelegate;
	FMultiplayerJoinSession MMultiplayerJoinSessionDelegate;
	FMultiplayerStartSession MMultiplayerStartSessionDelegate;
	FMultiplayerDestroySession MMultiplayerDestroySessionDelegate;
	//</Custom Delegates>

	//all function will be assessed from the menu class
	void CreateGameSession(int32 NumberOfPublicConnect,FString&MatchType);
	void FindGameSession(int32 MaxMatchResult);
	void JoinGameSession(const FOnlineSessionSearchResult& Result);
	void StartGameSession(FName SessionName,bool IsGameSessionStarted);
	void DestroyGameSession(FName SessionName,bool IsGameSessionEnded);

protected:
	//<internal callback functions>

	UFUNCTION()
	void OnCreatGameSessionCompleted(FName GameSession,bool IsSessionCreated);

	UFUNCTION()
	void OnFindGameSessionCompleted(bool IsGameSessionFound);
	
	void OnJoinGameSessionCompleted(FName GameSession, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION()
	void OnStartGameSessionCompleted(FName GameSession,bool isGameStarted);

	UFUNCTION()
	void OnDestroyGameSessionCompleted(FName GameSession,bool IsGameSessionDestroyed);
    //</internal callbacks>
private:

	//to get all session interface functions and delegates
	IOnlineSessionPtr MSessionInterface;
	TObjectPtr<class IOnlineSubsystem>MOnlineSubsystem;
	TSharedPtr<class FOnlineSessionSettings>MLastSessionSettings;
	TSharedPtr<class FOnlineSessionSearch>MLastSessionSearchSettings;

	//game session delegates will be bind internal call back functions
	//and as well added to the online session interface delegate list

	//<OnlineSubsystem Delegates>
	FOnCreateSessionCompleteDelegate MCreateGameSessionDelegate;
	FDelegateHandle MCreateGameDelegateHandle;

	FOnFindSessionsCompleteDelegate MFindGameSessionDelegate;
	FDelegateHandle MFindGameDelegateHandle;

	FOnJoinSessionCompleteDelegate MJoinGameSessionDelegate;
	FDelegateHandle MJoinGameDelegateHandle;

	FOnStartSessionCompleteDelegate MStartGameSessionDelegate;
	FDelegateHandle MStartGameDelegateHandle;

	FOnDestroySessionCompleteDelegate MDestroyGameSessionDelegate;
	FDelegateHandle MDestroyGameDelegateHandle;
	//</OnlineSubSystemDelegate and Handle>



	//in the case of Destroying an already existing session
	//this params will be called on destroy session completed callback
	//to create new session after session has been destroyed
	//<CreateNewSessionParam>
	bool MCreateOnDestroySession{false};
	int32 MLastNumberOfPublicConnects;
	FString MLastMatchType;
	//</CreatNewSessionParam>

};
