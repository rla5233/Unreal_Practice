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
	UDataTable* GetMonsterDataTable();

	const struct FMonsterDataRow* GetMonsterData(FName _Name);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UDataTable* MonsterDataTable = nullptr;

};
