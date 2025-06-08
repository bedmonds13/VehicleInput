// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "CustomVehicleMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLEINPUT_API UCustomVehicleMovementComponent : public UChaosWheeledVehicleMovementComponent
{
	GENERATED_BODY()
	

	UFUNCTION(BlueprintCallable)
	void ResetWheelPhysics();
};
