// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPlataforma.h"
#include "ConstructorPlataforma.h"

void ADirectorPlataforma::ConstruirPlataformaBasica(FVector Location, FRotator Rotation)
{
	if (ConstructorActual)
	{
		ConstructorActual->ConstruirMallaBase(Location, Rotation);
		ConstructorActual->ConstruirMotor();
	}
}

void ADirectorPlataforma::ConstruirPlataformaCompleta(FVector Location, FRotator Rotation)
{
	if (ConstructorActual)
	{
		ConstructorActual->ConstruirMallaBase(Location, Rotation);
		ConstructorActual->ConstruirEscudo();
		ConstructorActual->ConstruirMotor();
	}
}

