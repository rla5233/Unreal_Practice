// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GlobalAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UPRACTICE_API UGlobalAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	void ChangeAnimation(const FString& _AnimName);

	void PushAnimation(const FString& _Key, class UAnimMontage* _Montage);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<FString, class UAnimMontage*> AnimMontages;
	
};
