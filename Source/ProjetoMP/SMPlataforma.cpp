// Fill out your copyright notice in the Description page of Project Settings.


#include "SMPlataforma.h"

ASMPlataforma::ASMPlataforma()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);
}

void ASMPlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (HasAuthority()) 
	{
		FVector Location = GetActorLocation();
		Location += FVector(10, 0, 0);
		SetActorLocation(Location);
	}
}
