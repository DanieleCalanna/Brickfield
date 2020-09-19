// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LegoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BRICKFIELD_API ULegoGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetSplitScreenEnabled(bool bEnabled);

public:
	UFUNCTION(BlueprintCallable)
	ULocalPlayer* GetLegoLocalPlayerByIndex(const int32 Index) const;
	
};
