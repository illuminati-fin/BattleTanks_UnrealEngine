// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// forward declaration
class UTankBarrel;
class UTankTurret;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANKS_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()


private:
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	void MoveBarrelTowards(FVector AimDirection);

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
		
	void AimAt(FVector HitLocation, float LaunchSpeed);
	
	void SetBarrelReference(UTankBarrel* BarrelToSet);

	void SetTurretReference(UTankTurret* TurretToSet);

};
