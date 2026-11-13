// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPlataformaBasica.h"
#include "Plataforma.h"
#include "ComponenteMotor.h"


void AConstructorPlataformaBasica::ConstruirMallaBase(FVector Location, FRotator Rotation)
{
	// Instanciamos la plataforma base
	PlataformaActual = GetWorld()->SpawnActor<APlataforma>(Location, Rotation);
}

void AConstructorPlataformaBasica::ConstruirEscudo()
{
	// Las básicas no llevan escudo (lo dejamos vacío)
}

void AConstructorPlataformaBasica::ConstruirMotor()
{
	// Solo le ponemos un motor
	if (PlataformaActual)
	{
		AComponenteMotor* NuevoMotor = GetWorld()->SpawnActor<AComponenteMotor>();
		PlataformaActual->AdjuntarMotor(NuevoMotor);
	}
}



