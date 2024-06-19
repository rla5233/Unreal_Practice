// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevel/TestLevelGameMode.h"
#include "TestLevel/TestLevelActor.h"

void ATestLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UClass* CreateClass = ATestLevelActor::StaticClass();
	FTransform Transform;
	GetWorld()->SpawnActor<AActor>(CreateClass, Transform);
}
