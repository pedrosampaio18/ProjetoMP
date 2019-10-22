// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SMPlataforma.generated.h"

/**
 * 
 */
UCLASS()
class PROJETOMP_API ASMPlataforma : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	ASMPlataforma();

	virtual void Tick(float DeltaTime) override;
	float SpeedPlataforma;
};
