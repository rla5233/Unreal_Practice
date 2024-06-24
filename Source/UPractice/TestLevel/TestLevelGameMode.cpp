// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevel/TestLevelGameMode.h"
#include "TestLevel/TestLevelMonster.h"
#include "Global/GlobalGameInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UPractice.h"

ATestLevelGameMode::ATestLevelGameMode()
{
}

void ATestLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	//UGlobalGameInstance* GInst = GetWorld()->GetGameInstanceChecked<UGlobalGameInstance>();
	//
	//UDataTable* MonsterDT = GInst->GetMonsterDataTable();

	//for (int i = 0; i < MonsterDT->GetRowNames().Num(); ++i)
	//{
	//	FString Name = "Monster";
	//	Name += FString::FromInt(i);
	//	FName TempName = FName(Name);
	//	const FMonsterDataRow* ActorData = GInst->GetMonsterData(TempName);

	//	if (nullptr == ActorData)
	//	{
	//		UE_LOG(MyLog, Error, TEXT("%S(%u)> ActorData Is Null"), __FUNCTION__, __LINE__);
	//		return;
	//	}

	//	if (nullptr == ActorData->MonsterUClass)
	//	{
	//		UE_LOG(MyLog, Error, TEXT("%S(%u)> ActorUclass Is Null"), __FUNCTION__, __LINE__);
	//		return;
	//	}

	//	FTransform Trans;
	//	Trans.SetLocation({ 300.0f + i * 100.0f, 0.0f, 500.0f });
	//	AActor* NewActor = GetWorld()->SpawnActor<AActor>(ActorData->MonsterUClass, Trans);

	//	ATestLevelMonster* NewTestMonster = Cast<ATestLevelMonster>(NewActor);
	//	NewTestMonster->GetMesh()->SetSkeletalMeshAsset(ActorData->AnimationMesh);
	//}
}

void ATestLevelGameMode::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

}
