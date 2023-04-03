// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <memory>
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ID_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FRACTURED_BYTE_TASK_API UID_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UID_Component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ID_Component")
	FString ID;

	//UMyGameInstance system;

};
