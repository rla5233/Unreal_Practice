// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalEnum.generated.h"


UENUM(BlueprintType)
enum class EMonsterAnim : uint8
{
	Run,
	Attack
};

UCLASS()
class UPRACTICE_API UMyEnum : public UObject
{
	GENERATED_BODY()
	
};
