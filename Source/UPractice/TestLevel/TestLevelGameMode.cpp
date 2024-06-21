// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevel/TestLevelGameMode.h"
#include "TestLevel/TestLevelActor.h"
#include "Global/GlobalGameInstance.h"
#include "Global/DataTable/ActorDataRow.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UPractice.h"

ATestLevelGameMode::ATestLevelGameMode()
{
}

void ATestLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UGlobalGameInstance* GInst = GetWorld()->GetGameInstanceChecked<UGlobalGameInstance>();

	for (int i = 1; i <= 3; ++i)
	{
		FString Name = "Actor";
		Name += FString::FromInt(i);
		FName TempName = FName(Name);
		const FActorDataRow* ActorData = GInst->GetActorData(TempName);

		if (nullptr == ActorData)
		{
			UE_LOG(MyLog, Error, TEXT("%S(%u)> ActorData Is Null"), __FUNCTION__, __LINE__);
			return;
		}

		if (nullptr == ActorData->ActorUClass)
		{
			UE_LOG(MyLog, Error, TEXT("%S(%u)> ActorUclass Is Null"), __FUNCTION__, __LINE__);
			return;
		}

		FTransform Trans;
		Trans.SetLocation({ 300.0f + i * 100.0f, 0.0f, 500.0f });
		AActor* NewActor = GetWorld()->SpawnActor<AActor>(ActorData->ActorUClass, Trans);

		ATestLevelActor* NewTestActor = Cast<ATestLevelActor>(NewActor);
		NewTestActor->GetMesh()->SetSkeletalMeshAsset(ActorData->AnimationMesh);

	}
}

void ATestLevelGameMode::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

}
