// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalGameInstance.h"
#include "DataTable/MonsterDataRow.h"
#include "UPractice.h"

const FMonsterDataRow* UGlobalGameInstance::GetMonsterData(FName _Name)
{
	if (nullptr == MonsterDataTable)
	{
		UE_LOG(MyLog, Fatal, TEXT("%S(%u)> MonsterDataTable Is Nullptr"), __FUNCTION__, __LINE__);
	}

	FMonsterDataRow* MonsterData = MonsterDataTable->FindRow<FMonsterDataRow>(_Name, nullptr);

	if (nullptr == MonsterData)
	{
		UE_LOG(MyLog, Error, TEXT("%S(%u)> %s Name Data Is Nullptr"), __FUNCTION__, __LINE__);
		return nullptr;
	}

	return MonsterData;
}

UDataTable* UGlobalGameInstance::GetMonsterDataTable()
{
	if (nullptr == MonsterDataTable)
	{
		UE_LOG(MyLog, Fatal, TEXT("%S(%u)> MonsterDataTable Is Nullptr"), __FUNCTION__, __LINE__);
	}

	return MonsterDataTable;
}