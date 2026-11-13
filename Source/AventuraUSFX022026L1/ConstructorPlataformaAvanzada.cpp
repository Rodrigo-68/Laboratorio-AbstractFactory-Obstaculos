// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorPlataformaAvanzada.h"
#include "Plataforma.h"
#include "ComponenteEscudo.h"
#include "ComponenteMotor.h"

void AConstructorPlataformaAvanzada::ConstruirMallaBase(FVector Location, FRotator Rotation)
{
	PlataformaActual = GetWorld()->SpawnActor<APlataforma>(Location, Rotation);
}

void AConstructorPlataformaAvanzada::ConstruirEscudo()
{
	if (PlataformaActual)
	{
		AComponenteEscudo* NuevoEscudo = GetWorld()->SpawnActor<AComponenteEscudo>();
		PlataformaActual->AdjuntarEscudo(NuevoEscudo);
	}
}

void AConstructorPlataformaAvanzada::ConstruirMotor()
{
	if (PlataformaActual)
	{
		AComponenteMotor* NuevoMotor = GetWorld()->SpawnActor<AComponenteMotor>();
		PlataformaActual->AdjuntarMotor(NuevoMotor);
	}
}
