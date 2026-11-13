// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "ComponenteEscudo.h"
#include "ComponenteMotor.h"
#include "Engine/StaticMesh.h"

// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlataformaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));

	// Create mesh component for the projectile sphere
	mallaPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaPlataforma"));
	mallaPlataforma->SetStaticMesh(PlataformaMeshAsset.Object);
	mallaPlataforma->SetupAttachment(RootComponent);

	RootComponent = mallaPlataforma;
	/*
	ZMax = 800.0f;
	ZMin = 200.0f;
	Velocidad = 100.0f;
	Signo = 1.0f;
	*/

	movimientoEjes = FVector(1.0f, 0.0f, 0.0f);
	movimientoLimitesMaximos = FVector(FMath::RandRange(200.0f, 800.0f), FMath::RandRange(200.0f, 800.0f), FMath::RandRange(200.0f, 800.0f));
	movimientoLimitesMinimos = FVector(FMath::RandRange(-800.0f, -200.0f), FMath::RandRange(-800.0f, -200.0f), FMath::RandRange(-800.0f, -200.0f));
	movimientoVelocidades = FVector(FMath::RandRange(50.0f, 200.0f), FMath::RandRange(50.0f, 200.0f), FMath::RandRange(50.0f, 200.0f));
	movimientoDireccion = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f));
	//movimientoDireccion = FVector(1.0f, 0.0f, 0.0f);
	TipoMovimientoActual = static_cast<ETipoMovimiento>(FMath::RandRange(0, 9));

	TiempoTranscurrido = 0.0f;
}

void APlataforma::AdjuntarEscudo(AComponenteEscudo* Escudo)
{
	if (Escudo)
	{
		EscudoConstruido = Escudo;
		Escudo->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		Escudo->SetActorRelativeLocation(FVector(0, 0, 0)); // Centrado
	}
}

void APlataforma::AdjuntarMotor(AComponenteMotor* Motor)
{
	if (Motor)
	{
		MotorConstruido = Motor;
		Motor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		Motor->SetActorRelativeLocation(FVector(0, 0, -50)); // Debajo de la plataforma
	}
}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Actualizamos el tiempo transcurrido para todos los cálculos
	TiempoTranscurrido += DeltaTime;

	// Lógica de pausa: 5 segundos estáticas, 10 segundos moviéndose (Ciclo de 15s)
	float TiempoCiclo = FMath::Fmod(TiempoTranscurrido, 15.0f);

	if (TiempoCiclo < 5.0f)
	{
		return;
	}

	if (TiempoCiclo >= 5.0f && TiempoCiclo < 15.0f)
	{
		posicionActual = GetActorLocation();
		FVector posicionNueva = posicionActual;

		float TiempoLocal = TiempoCiclo - 5.0f;

		switch (TipoMovimientoActual)
		{
		case ETipoMovimiento::Lineal_X:
			if (posicionActual.X >= movimientoLimitesMaximos.X || posicionActual.X <= movimientoLimitesMinimos.X)
				movimientoDireccion.X *= -1.0f;
			posicionNueva.X += movimientoDireccion.X * movimientoVelocidades.X * DeltaTime;
			break;

		case ETipoMovimiento::Lineal_Y:
			if (posicionActual.Y >= movimientoLimitesMaximos.Y || posicionActual.Y <= movimientoLimitesMinimos.Y)
				movimientoDireccion.Y *= -1.0f;
			posicionNueva.Y += movimientoDireccion.Y * movimientoVelocidades.Y * DeltaTime;
			break;

		case ETipoMovimiento::Lineal_Z:
			if (posicionActual.Z >= movimientoLimitesMaximos.Z || posicionActual.Z <= movimientoLimitesMinimos.Z)
				movimientoDireccion.Z *= -1.0f;
			posicionNueva.Z += movimientoDireccion.Z * movimientoVelocidades.Z * DeltaTime;
			break;

		case ETipoMovimiento::Circular_XY:
			posicionNueva.X += FMath::Cos(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			posicionNueva.Y += FMath::Sin(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			break;

		case ETipoMovimiento::Circular_XZ:
			posicionNueva.X += FMath::Cos(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			posicionNueva.Z += FMath::Sin(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			break;

		case ETipoMovimiento::Circular_YZ:
			posicionNueva.Y += FMath::Cos(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			posicionNueva.Z += FMath::Sin(TiempoLocal * 2.0f) * 150.0f * DeltaTime;
			break;

		case ETipoMovimiento::Diagonal_XY:
			if (posicionActual.X >= movimientoLimitesMaximos.X || posicionActual.X <= movimientoLimitesMinimos.X) movimientoDireccion.X *= -1.0f;
			if (posicionActual.Y >= movimientoLimitesMaximos.Y || posicionActual.Y <= movimientoLimitesMinimos.Y) movimientoDireccion.Y *= -1.0f;
			posicionNueva.X += movimientoDireccion.X * movimientoVelocidades.X * DeltaTime;
			posicionNueva.Y += movimientoDireccion.Y * movimientoVelocidades.Y * DeltaTime;
			break;

		case ETipoMovimiento::Diagonal_XZ:
			if (posicionActual.X >= movimientoLimitesMaximos.X || posicionActual.X <= movimientoLimitesMinimos.X) movimientoDireccion.X *= -1.0f;
			if (posicionActual.Z >= movimientoLimitesMaximos.Z || posicionActual.Z <= movimientoLimitesMinimos.Z) movimientoDireccion.Z *= -1.0f;
			posicionNueva.X += movimientoDireccion.X * movimientoVelocidades.X * DeltaTime;
			posicionNueva.Z += movimientoDireccion.Z * movimientoVelocidades.Z * DeltaTime;
			break;

		case ETipoMovimiento::Diagonal_YZ:
			if (posicionActual.Y >= movimientoLimitesMaximos.Y || posicionActual.Y <= movimientoLimitesMinimos.Y) movimientoDireccion.Y *= -1.0f;
			if (posicionActual.Z >= movimientoLimitesMaximos.Z || posicionActual.Z <= movimientoLimitesMinimos.Z) movimientoDireccion.Z *= -1.0f;
			posicionNueva.Y += movimientoDireccion.Y * movimientoVelocidades.Y * DeltaTime;
			posicionNueva.Z += movimientoDireccion.Z * movimientoVelocidades.Z * DeltaTime;
			break;

		case ETipoMovimiento::ZigZag:
			if (FMath::Fmod(TiempoLocal, 3.0f) < 1.5f) {
				posicionNueva.X += movimientoVelocidades.X * DeltaTime;
			}
			else {
				posicionNueva.Y += movimientoVelocidades.Y * DeltaTime;
			}
			break;
		}

		SetActorLocation(posicionNueva);
	}

}