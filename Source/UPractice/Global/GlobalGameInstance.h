// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UPRACTICE_API UGlobalGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	const struct FActorDataRow* GetActorData(FName _Name);

	UDataTable* GetActorDateTable()
	{
		return ActorDataTable;
	}

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UDataTable* ActorDataTable = nullptr;

};
