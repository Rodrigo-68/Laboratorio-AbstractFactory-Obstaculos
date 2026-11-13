// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorPlataforma.generated.h"

class APlataforma;

UCLASS()
class AVENTURAUSFX022026L1_API AConstructorPlataforma : public AActor
{
	GENERATED_BODY()
	
public:
	// Referencia a la plataforma que estamos construyendo
	APlataforma* PlataformaActual = nullptr;

	// Métodos del Builder
	virtual void ConstruirMallaBase(FVector Location, FRotator Rotation) PURE_VIRTUAL(AConstructorPlataforma::ConstruirMallaBase, );
	virtual void ConstruirEscudo() PURE_VIRTUAL(AConstructorPlataforma::ConstruirEscudo, );
	virtual void ConstruirMotor() PURE_VIRTUAL(AConstructorPlataforma::ConstruirMotor, );

	// Método para obtener el producto final
	APlataforma* ObtenerPlataforma() { return PlataformaActual; }
};
