// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMotor.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AComponenteMotor::AComponenteMotor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	UStaticMeshComponent* Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMotor"));
	// Usamos un cilindro para simular el motor
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (MeshAsset.Succeeded()) Mesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = Mesh;
	SetActorScale3D(FVector(0.5f, 0.5f, 0.2f));
}

