// Fill out your copyright notice in the Description page of Project Settings.

#include "MainLevel/MainLevelGameMode.h"
#include "Global/GlobalGameInstance.h"
#include "Global/DataTable/DefaultMonsterDataRow.h"
#include "Monster/MainDefaultMonsterBase.h"
#include "UPractice.h"

AMainLevelGameMode::AMainLevelGameMode()
{

}

void AMainLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	SpawnRandomDefaultMonster();
}

void AMainLevelGameMode::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);
}

void AMainLevelGameMode::SpawnRandomDefaultMonster()
{
	UGlobalGameInstance* GInst = GetWorld()->GetGameInstanceChecked<UGlobalGameInstance>();
	int32 DefaultMonsterDataRowNum = GInst->GetDefaultMonsterDataRowNum();

	for (int i = 0; i < DefaultMonsterMaxSize; i++)
	{
		FString Name = "MonsterType_0";
		const FDefaultMonsterDataRow* MonsterData = GInst->GetDefaultMonsterData(FName(Name));

		if (nullptr == MonsterData)
		{
			UE_LOG(MyLog, Error, TEXT("%S(%u)> MonsterData Is Null"), __FUNCTION__, __LINE__);
			return;
		}

		if (nullptr == MonsterData->ActorUClass)
		{
			UE_LOG(MyLog, Error, TEXT("%S(%u)> MonsterData ActorUClass Is Null"), __FUNCTION__, __LINE__);
			return;
		}

		FTransform InitTrans;
		InitTrans.SetLocation({ 2450.0f, 2000.0f, 300.0f });
		AActor* NewActor = GetWorld()->SpawnActor<AActor>(MonsterData->ActorUClass, InitTrans);

		AMainDefaultMonsterBase* NewDefaultMonster = Cast<AMainDefaultMonsterBase>(NewActor);
		NewDefaultMonster->GetMesh()->SetSkeletalMeshAsset(MonsterData->AnimMesh);
	}
}
