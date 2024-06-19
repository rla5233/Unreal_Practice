// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UPRACTICE_API ATestLevelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATestLevelGameMode();

public:
	void BeginPlay() override;
	
private:
	UPROPERTY(Category = "MemberValue", VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FTransform CPPTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UClass* CreateClass = nullptr;

};
