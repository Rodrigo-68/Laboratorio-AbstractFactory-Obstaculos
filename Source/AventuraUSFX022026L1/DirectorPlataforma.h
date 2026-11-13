// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorPlataforma.generated.h"

class AConstructorPlataforma;

UCLASS()
class AVENTURAUSFX022026L1_API ADirectorPlataforma : public AActor
{
	GENERATED_BODY()
	
public:
	AConstructorPlataforma* ConstructorActual = nullptr;

	void SetConstructor(AConstructorPlataforma* NuevoConstructor) { ConstructorActual = NuevoConstructor; }

	// Receta 1: Plataforma Básica (Solo malla y motor)
	void ConstruirPlataformaBasica(FVector Location, FRotator Rotation);

	// Receta 2: Plataforma Completa (Malla, escudo y motor)
	void ConstruirPlataformaCompleta(FVector Location, FRotator Rotation);
};
