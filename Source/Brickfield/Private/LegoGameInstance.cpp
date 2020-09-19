// Fill out your copyright notice in the Description page of Project Settings.

#include "LegoGameInstance.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"

void ULegoGameInstance::SetSplitScreenEnabled(bool bEnabled)
{
	UWorld* WorldContext = GetWorld();
	if (WorldContext)
	{
		WorldContext->GetGameViewport()->SetDisableSplitscreenOverride(!bEnabled);
	}
}

ULocalPlayer* ULegoGameInstance::GetLegoLocalPlayerByIndex(const int32 Index) const
{
	if (Index < GetNumLocalPlayers())
	{
		return GetLocalPlayerByIndex(Index);
	}
	else { return nullptr; }
}
