// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainLevelPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UPRACTICE_API AMainLevelPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetupInputComponent() override;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* InputMapping = nullptr;

};
