// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DefaultMonsterDataRow.generated.h"

/**
 * 
 */
USTRUCT()
struct UPRACTICE_API FDefaultMonsterDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	TSubclassOf<AActor> ActorUClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	TMap<FString, class UAnimMontage*> AnimMontages;
};
