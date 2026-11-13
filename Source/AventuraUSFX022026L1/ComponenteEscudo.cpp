// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteEscudo.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AComponenteEscudo::AComponenteEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	UStaticMeshComponent* Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEscudo"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded()) Mesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = Mesh;
	SetActorScale3D(FVector(1.5f)); // Un poco más grande que la plataforma	 la esfera de colisión del escudo

}

