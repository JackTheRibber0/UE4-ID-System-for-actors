// Fill out your copyright notice in the Description page of Project Settings.


#include "ID_System.h"

ID_System::ID_System()
{
}

ID_System::~ID_System()
{
}

void ID_System::popId(const FString& id)
{
	nIDs_.Remove(id);
}

void ID_System::pushId(const FString& id)
{
	bool decision;
	decision = isDuplicate(id);

	if (decision == false)
	{
		nIDs_.Add(id);
	}

}

bool ID_System::isDuplicate(const FString& id) const
{
	int size = nIDs_.Num();
	if (size == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "0");
	}
	if (size == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "1");
	}
	if (size == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "2");
	}

	for (FString element : nIDs_)
	{
		if (element.Equals(id))
		{
			//UE_LOG(LogTemp, Fatal, TEXT("DUPLICATE"));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "DETECTED");
		}
	}

	return false;
}