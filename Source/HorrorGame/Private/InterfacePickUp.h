// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfacePickUp.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfacePickUp : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IInterfacePickUp
{
	GENERATED_BODY()
public:
	virtual void OnPickUp() = 0;
};