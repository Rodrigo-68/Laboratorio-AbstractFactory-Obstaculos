#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaHorizontal.generated.h"

UCLASS(Abstract)
class AVENTURAUSFX022026L1_API APlataformaHorizontal : public APlataforma
{
	GENERATED_BODY()

public:
	APlataformaHorizontal();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	FVector PosicionInicialOsc;
	float TiempoOsc;
	float VelocidadOscilacion;
	float DistanciaOscilacion;
};