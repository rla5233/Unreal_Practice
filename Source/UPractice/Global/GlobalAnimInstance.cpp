// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/GlobalAnimInstance.h"

void UGlobalAnimInstance::ChangeAnimation(const FString& _AnimName)
{
	if (false == AnimMontages.Contains(_AnimName))
	{
		UE_LOG(LogType, Fatal, TEXT("%S(%u) AnimMontages Is Null"), __FUNCTION__, __LINE__);
		return;
	}

	UAnimMontage* Montage = AnimMontages[_AnimName];

	if (nullptr == Montage)
	{
		UE_LOG(LogType, Fatal, TEXT("%S(%u) Montages Is Null"), __FUNCTION__, __LINE__);
		return;
	}

	Montage_Play(Montage);
}

void UGlobalAnimInstance::PushAnimation(const FString& _Key, UAnimMontage* _Montage)
{
	if (true == AnimMontages.Contains(_Key))
	{
		return;
	}

	AnimMontages.Add(_Key, _Montage);
}
