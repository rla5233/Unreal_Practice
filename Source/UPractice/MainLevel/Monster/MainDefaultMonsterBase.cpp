// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel/Monster/MainDefaultMonsterBase.h"
#include "Global/GlobalAnimInstance.h"
#include "Global/GlobalGameInstance.h"
#include "Global/DataTable/DefaultMonsterDataRow.h"

// Sets default values
AMainDefaultMonsterBase::AMainDefaultMonsterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainDefaultMonsterBase::BeginPlay()
{
	Super::BeginPlay();

	UGlobalGameInstance* GameInst = Cast<UGlobalGameInstance>(GetGameInstance());
	
	if (nullptr == GameInst)
	{
		UE_LOG(LogTemp, Fatal, TEXT("%S(%u)> GameInst Is Null"), __FUNCTION__, __LINE__);
		return;
	}
	
	UGlobalAnimInstance* AnimInst = Cast<UGlobalAnimInstance>(GetMesh()->GetAnimInstance());

	if (nullptr == AnimInst)
	{
		UE_LOG(LogTemp, Fatal, TEXT("%S(%u)> AnimInst Is Null"), __FUNCTION__, __LINE__);
		return;
	}

	const FDefaultMonsterDataRow* BaseData = GameInst->GetDefaultMonsterData(TEXT("MonsterType_0"));

	for (TPair<FString, class UAnimMontage*> Montage : BaseData->AnimMontages)
	{
		AnimInst->PushAnimation(Montage.Key, Montage.Value);
	}

	AnimInst->ChangeAnimation(TEXT("Walk"));
}

// Called every frame
void AMainDefaultMonsterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainDefaultMonsterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

