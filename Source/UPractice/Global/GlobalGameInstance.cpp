// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalGameInstance.h"
#include "DataTable/DefaultMonsterDataRow.h"
#include "UPractice.h"

const FDefaultMonsterDataRow* UGlobalGameInstance::GetDefaultMonsterData(FName _Name)
{
	if (nullptr == DefaultMonsterDataTable)
	{
		UE_LOG(MyLog, Fatal, TEXT("%S(%u)> MonsterDataTable Is Null"), __FUNCTION__, __LINE__);
	}

	FDefaultMonsterDataRow* MonsterData = DefaultMonsterDataTable->FindRow<FDefaultMonsterDataRow>(_Name, nullptr);

	if (nullptr == MonsterData)
	{
		UE_LOG(MyLog, Error, TEXT("%S(%u)> MonsterData Is Null"), __FUNCTION__, __LINE__);
		return nullptr;
	}

	return MonsterData;
}

int32 UGlobalGameInstance::GetDefaultMonsterDataRowNum()
{
	if (nullptr == DefaultMonsterDataTable)
	{
		UE_LOG(MyLog, Fatal, TEXT("%S(%u)> MonsterDataTable Is Null"), __FUNCTION__, __LINE__);
	}

	return DefaultMonsterDataTable->GetRowNames().Num();
}
