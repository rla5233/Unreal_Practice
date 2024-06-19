// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevel/TestLevelGameMode.h"
#include "TestLevel/TestLevelActor.h"

void ATestLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UClass* CreateClass = ATestLevelActor::StaticClass();
	FTransform Transform;
	GetWorld()->SpawnActor<AActor>(CreateClass, Transform);

	UClass* BP_CreateClass = LoadClass<AActor>(nullptr, TEXT("/Script/Engine.Blueprint'/Game/Test/BluePrint/BP_TestLevelActor.BP_TestLevelActor_C'"));
	FTransform BP_Transform;
	GetWorld()->SpawnActor<AActor>(BP_CreateClass, BP_Transform);

}
