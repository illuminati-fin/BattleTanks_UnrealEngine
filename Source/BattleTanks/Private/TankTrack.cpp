// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "TankTrack.h"


void UTankTrack::SetThrottle(float Throttle)
{
	UE_LOG(LogTemp, Warning, TEXT("Throttle set to: %f"), Throttle);

	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();

	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent()); //Could be casted to tank as well
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);

}

