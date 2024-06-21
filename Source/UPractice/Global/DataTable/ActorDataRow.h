// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ActorDataRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FActorDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	TSubclassOf<AActor> ActorUClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	class USkeletalMesh* AnimationMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	int HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	float Speed;

};