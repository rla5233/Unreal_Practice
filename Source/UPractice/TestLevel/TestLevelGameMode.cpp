// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevel/TestLevelGameMode.h"
#include "TestLevel/TestLevelActor.h"
#include "Global/GlobalGameInstance.h"

ATestLevelGameMode::ATestLevelGameMode()
{
}

void ATestLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	CreateClass = LoadClass<AActor>(nullptr, TEXT("/Script/Engine.Blueprint'/Game/Test/BluePrint/BP_TestLevelActor.BP_TestLevelActor_C'"));
	FTransform TransForm;
	GetWorld()->SpawnActor<AActor>(CreateClass, TransForm);

	UGlobalGameInstance* GameInst = Cast<UGlobalGameInstance>(GetWorld()->GetGameInstance());
}
