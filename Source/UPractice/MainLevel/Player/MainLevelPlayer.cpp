// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel/Player/MainLevelPlayer.h"

// Sets default values
AMainLevelPlayer::AMainLevelPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainLevelPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainLevelPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainLevelPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
