// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"


// Hold barrel's properties and elevate method
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANKS_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 5; // sensible default

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegrees = 0;

public:
	// -1 is max downward speed and +1 is max up movement
	void Elevate(float RelativeSpeed);
	
	
};
