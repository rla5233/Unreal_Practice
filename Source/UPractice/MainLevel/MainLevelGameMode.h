// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MainLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UPRACTICE_API AMainLevelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AMainLevelGameMode();

public:
	void BeginPlay() override;
	void Tick(float _DeltaTime) override;
	
public:
	void SpawnRandomDefaultMonster();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int DefaultMonsterMaxSize = 1;

};
