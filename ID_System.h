// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FRACTURED_BYTE_TASK_API ID_System
{
public:

	ID_System();
	~ID_System();

	void pushId(const FString& id);
	void popId(const FString& id);
	bool isDuplicate(const FString& id) const;

private:

	TArray<FString> nIDs_;

};
