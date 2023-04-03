// Fill out your copyright notice in the Description page of Project Settings.


#include "ID_Component.h"

// Sets default values for this component's properties
UID_Component::UID_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UID_Component::BeginPlay()
{
	Super::BeginPlay();

	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI)
	{
		GI->pushId(ID);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "pushId_WAS_CALLED");
	}
	// ...
	
}

// Called every frame
void UID_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}