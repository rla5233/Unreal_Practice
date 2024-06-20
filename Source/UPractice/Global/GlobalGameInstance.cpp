// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalGameInstance.h"
#include "DataTable/ActorDataRow.h"
#include "UPractice.h"

const FActorDataRow* UGlobalGameInstance::GetActorData(FName _Name)
{
	if (nullptr == ActorDataTable)
	{
		UE_LOG(MyLog, Error, TEXT("%S(%u)> ActorDataTable Is Nullptr"), __FUNCTION__, __LINE__);
	}

	FActorDataRow* ActorData = ActorDataTable->FindRow<FActorDataRow>(_Name, nullptr);

	if (nullptr == ActorData)
	{
		UE_LOG(MyLog, Error, TEXT("%S(%u)> %s Name Data Is Nullptr"), __FUNCTION__, __LINE__);
		return nullptr;
	}

	return ActorData;
}
