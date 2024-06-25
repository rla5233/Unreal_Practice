// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel/Player/MainLevelPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

void AMainLevelPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	InputSystem->ClearAllMappings();
	InputSystem->AddMappingContext(InputMapping, 0);
}
