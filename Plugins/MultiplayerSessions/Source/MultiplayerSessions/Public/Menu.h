// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ObjectPtr.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
protected:
	virtual bool Initialize() override;
	virtual void NativeDestruct() override;
	//<ButtonCallbacks>
	UFUNCTION()
	void OnHostButtonClicked();
	UFUNCTION()
	void OnJoinButtonClicked();

	UFUNCTION()
	void OnQuiteButtonClicked();
	//</ButtonCallbacks>

    //<MenuCallbacksForMultiplayerSubsystem>
	UFUNCTION()
	void MenuOnCreateSessionCompleted(bool IsSessionCreated);
	
	UFUNCTION()
	void MenuOnStartSessionCompleted(bool IsSessionStarted);
	
	UFUNCTION()
	void MenuOnDestroySessionCompleted(bool IsSessionStarted);
	
	void MenuOnFindSessionCompleted(TArray<FOnlineSessionSearchResult>& SearchResult, bool IsFoundResult);
	
	void MenuOnJoinSessionCompleted(EOnJoinSessionCompleteResult::Type JoinResult,bool IsFoundResult);
	
private:
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnect=4, FString MatchType =TEXT("FreeForAll"), FString LobbyMapPath=TEXT("/Game/MenuMap/Lobby"));
    // returns game to normal settings before menu
	void MenuTearDown();

private:
	//bind to the blueprint host button
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<class UButton> MHostButton;

	//bind to the blue print join button
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton>MJoinButton;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton>MQuitButton;
	
    //handles all the online functionalities
	TObjectPtr<class UMultiplayerSessionSubsystem>MultiplayerSessionSubsystem;

  // <MenuSetupInputs>
	int32 MNumOfPublicConnections{4};
	FString MMatchType{TEXT("FreeForAll")};
	//</MenuSetupInputs>

	FString MPathToLobby{""};
	
};
