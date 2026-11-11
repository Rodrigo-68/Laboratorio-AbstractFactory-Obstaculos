// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FabricaAbstractaObstaculos.h"
#include "FabricaObstaculosAereos.h"
#include "FabricaObstaculosTerrestres.h"
#include "Obstaculo.h"
#include "AventuraUSFX022026L1GameMode.generated.h"

class APlataforma;
class AInventory;
class AFabricaPlataformas;
class AFachadaPlataformas;

UCLASS(MinimalAPI)
class AAventuraUSFX022026L1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAventuraUSFX022026L1GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	AInventory* Inventory;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	TArray<APlataforma*> aPlataformas;
	AFabricaPlataformas* FabricaPlataformas;
	AFachadaPlataformas* Fachada = nullptr;
	
	FTimerHandle TimerEliminarPlataforma;

	void EliminarPlataforma();
	int tipoPlataformaActual;
};



