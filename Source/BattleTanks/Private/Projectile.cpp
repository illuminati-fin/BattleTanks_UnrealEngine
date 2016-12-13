// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "Projectile.h"


// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// This will be inherited to the BP (if needed there)
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Projecticle movement Component"));
	MovementComponent->bAutoActivate = false;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AProjectile::LauchProjectile(float Speed)
{
	MovementComponent->SetVelocityInLocalSpace(FVector::ForwardVector * Speed); //Projectile is set to face same direction as barrel so forward vector
	MovementComponent->Activate(); // because deactivated in initializer
}

