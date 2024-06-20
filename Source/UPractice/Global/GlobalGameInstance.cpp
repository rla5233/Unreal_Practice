// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalGameInstance.h"
#include "DataTable/ActorDataRow.h"

const FActorDataRow* UGlobalGameInstance::GetActorData(FName _Name)
{
	if (nullptr == ActorDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("%S(%u)> if (nullptr == ActorDataTable)"), __FUNCTION__, __LINE__);
	}

	return nullptr;
}
