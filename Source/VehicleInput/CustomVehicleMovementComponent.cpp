// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomVehicleMovementComponent.h"

void UCustomVehicleMovementComponent::ResetWheelPhysics()
{
	RecreatePhysicsState();
}
