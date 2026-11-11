// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

class UStaticMeshComponent;

enum class ETipoPlataforma
{
	PLATAFORMA_AEREA,
	PLATAFORMA_TERRESTRE,
	PLATAFORMA_SUBTERRANEA,
	PLATAFORMA_ACUATICA
};
UENUM(BlueprintType)
enum class ETipoMovimiento : uint8
{
	Lineal_X,
	Lineal_Y,
	Lineal_Z,
	Circular_XY,
	Circular_XZ,
	Circular_YZ,
	Diagonal_XY,
	Diagonal_XZ,
	Diagonal_YZ,
	ZigZag
};

UCLASS()
class AVENTURAUSFX022026L1_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma();

	ETipoPlataforma tipoPlataforma;
	bool bMovimientoActivo = true;

	UStaticMeshComponent* mallaPlataforma;
	ETipoMovimiento TipoMovimientoActual;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector movimientoEjes = FVector(0.0f, 0.0f, 0.0f);
	FVector movimientoLimitesMaximos = FVector(0.0f, 0.0f, 0.0f);
	FVector movimientoLimitesMinimos = FVector(0.0f, 0.0f, 0.0f);
	FVector movimientoVelocidades = FVector(0.0f, 0.0f, 0.0f);
	FVector movimientoDireccion = FVector(0.0f, 0.0f, 0.0f);
	FVector posicionActual = FVector(0.0f, 0.0f, 0.0f);

	float TiempoTranscurrido;
};
