// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"
#include "Components/Button.h"
#include "MultiplayerSessionSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Kismet/KismetSystemLibrary.h"

bool UMenu::Initialize()
{
	//condition if super version of tis function is not called
	if (!Super::Initialize())return false;

	if (MHostButton)
	{
		//called when button is pressed
		MHostButton->OnClicked.AddDynamic(this, &ThisClass::UMenu::OnHostButtonClicked);
	}

	if (MJoinButton)
	{
		//call when button is pressed
		MJoinButton->OnClicked.AddDynamic(this, &ThisClass::UMenu::OnJoinButtonClicked);
	}

	if(MQuitButton)
	{
		//called when quite button is pressed
		MQuitButton->OnClicked.AddDynamic(this,&ThisClass::OnQuiteButtonClicked);
	}
	return true;
}

void UMenu::NativeDestruct()
{
    MenuTearDown();
	Super::NativeDestruct();
}

void UMenu::OnHostButtonClicked()
{
	//not to spam session creations
	  MHostButton->SetIsEnabled(false);
	
		if (MultiplayerSessionSubsystem)
			MultiplayerSessionSubsystem->CreateGameSession(MNumOfPublicConnections, MMatchType);
}

void UMenu::OnJoinButtonClicked()
{
	MJoinButton->SetIsEnabled(false);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString{"JoinButtonClicked"});
	}

	if (MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->FindGameSession(1000);
		
	}
	
}

void UMenu::OnQuiteButtonClicked()
{
	if(GetGameInstance())
	UKismetSystemLibrary::QuitGame(this,GetGameInstance()->GetFirstLocalPlayerController(GetWorld()),EQuitPreference::Quit,true);
}

void UMenu::MenuOnCreateSessionCompleted(bool IsSessionCreated)
{
	if (IsSessionCreated)
	{
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Green,FString{TEXT("online session was created")});
		
		if (UWorld* World{GetWorld()})
		{
			World->ServerTravel(MPathToLobby);
		}
	}
	else
	{
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,FString{TEXT("online session was not created")});
		//to enable creation of another session due to failure
		if(MHostButton)
			MHostButton->SetIsEnabled(true);
	}
}

void UMenu::MenuOnStartSessionCompleted(bool IsSessionStarted)
{
	if (IsSessionStarted)
	{
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1,8.f,FColor::Turquoise,FString{TEXT("Strated Game Session")});
	}
}

void UMenu::MenuOnDestroySessionCompleted(bool IsSessionStarted)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Emerald,FString{TEXT("session was destroyed")});
}

void UMenu::MenuOnFindSessionCompleted(TArray<FOnlineSessionSearchResult>& SearchResult, bool IsFoundResult)
{
	
	if(IsFoundResult)
	{
		for (const auto& Result :SearchResult )
		{
			//to init details of gotten MatchType name
			FString SearchedMatchType;
			Result.Session.SessionSettings.Get(FName{"MatchType"},SearchedMatchType);
            //Searched match type found
			if (MMatchType==SearchedMatchType)
			{
				if(MultiplayerSessionSubsystem)
					MultiplayerSessionSubsystem->JoinGameSession(Result);
			}
		}
	}
	//finding sessions were not successful or no matches to join
	if (!IsFoundResult||SearchResult.IsEmpty())
	{
		//enable button for retry
		if(MJoinButton)
			MJoinButton->SetIsEnabled(true);
	}
		
}

void UMenu::MenuOnJoinSessionCompleted(EOnJoinSessionCompleteResult::Type JoinResult, bool IsFoundResult)
{
	if (IsFoundResult)
	{
		if (const IOnlineSubsystem*Subsystem{IOnlineSubsystem::Get()})
		{
			if (const IOnlineSessionPtr OnlineSession{Subsystem->GetSessionInterface()})
			{
				FString IPAddress;
				OnlineSession->GetResolvedConnectString(NAME_GameSession,IPAddress);

				if(const auto Player{GetGameInstance()->GetFirstLocalPlayerController()})
				{
					Player->ClientTravel(IPAddress,ETravelType::TRAVEL_Absolute);

					if(MultiplayerSessionSubsystem)
						MultiplayerSessionSubsystem->StartGameSession(NAME_GameSession,true);
				}
					
			}
		}
	}
	if ( JoinResult!=EOnJoinSessionCompleteResult::Success)
	{
		if(MJoinButton)
			MJoinButton->SetIsEnabled(true);
	}
}

void UMenu::MenuSetup(int32 NumberOfPublicConnect, FString MatchType, FString LobbyMapPath)
{
	MPathToLobby=FString::Printf(TEXT("%s?listen"),*LobbyMapPath);
	MNumOfPublicConnections = NumberOfPublicConnect;
	MMatchType = MatchType;
	AddToViewport();
	bIsFocusable = true;
	SetVisibility(ESlateVisibility::Visible);
	
	if (const UWorld* World{GetWorld()})
	{
		const auto PlayerController{World->GetFirstPlayerController()};
		//for input to respond to ui only
		FInputModeUIOnly InputModeUIOnly;
		//sets the widget for input to focus on
		InputModeUIOnly.SetWidgetToFocus(TakeWidget());

		//for mouse to be able to navigate beyond  viewport
		InputModeUIOnly.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

		if (PlayerController)
		{
			PlayerController->SetInputMode(InputModeUIOnly);
			//for mouse cursor to be displayed on viewport
			PlayerController->SetShowMouseCursor(true);
		}
	}
	//multiplayersession is derived from game instance
	//multiplayersession is constructed when game instance is also constructed
	if (const UGameInstance* GameInstance{GetGameInstance()})
		MultiplayerSessionSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionSubsystem>();
	
	if(MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->MMultiplayerCreateSessionDelegate.AddDynamic(this,&ThisClass::MenuOnCreateSessionCompleted);
		MultiplayerSessionSubsystem->MMultiplayerFindSessionDelegate.AddUObject(this,&ThisClass::MenuOnFindSessionCompleted);
		MultiplayerSessionSubsystem->MMultiplayerJoinSessionDelegate.AddUObject(this,&ThisClass::MenuOnJoinSessionCompleted);
		MultiplayerSessionSubsystem->MMultiplayerStartSessionDelegate.AddDynamic(this,&ThisClass::UMenu::MenuOnStartSessionCompleted);
		MultiplayerSessionSubsystem->MMultiplayerDestroySessionDelegate.AddDynamic(this,&ThisClass::UMenu::MenuOnDestroySessionCompleted);
	}
		
}

void UMenu::MenuTearDown()
{
	//remove from viewport
	RemoveFromParent();

	if (const UWorld* World{GetWorld()})
	{
		if (const auto Player{World->GetFirstPlayerController()})
		{
			//inputs affect game only and not ui
			const FInputModeGameOnly InputMode;

			Player->SetInputMode(InputMode);
			Player->SetShowMouseCursor(false);
		}
	}
}
