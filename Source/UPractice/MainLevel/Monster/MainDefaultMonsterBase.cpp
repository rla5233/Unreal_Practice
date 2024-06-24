// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel/Monster/MainDefaultMonsterBase.h"

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

