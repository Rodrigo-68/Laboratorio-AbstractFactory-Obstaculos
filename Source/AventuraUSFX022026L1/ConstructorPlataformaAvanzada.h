// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorPlataforma.h"
#include "ConstructorPlataformaAvanzada.generated.h"


UCLASS()
class AVENTURAUSFX022026L1_API AConstructorPlataformaAvanzada : public AConstructorPlataforma
{
	GENERATED_BODY()

public:
	virtual void ConstruirMallaBase(FVector Location, FRotator Rotation) override;
	virtual void ConstruirEscudo() override;
	virtual void ConstruirMotor() override;
	
};
