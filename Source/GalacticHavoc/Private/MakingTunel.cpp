// Fill out your copyright notice in the Description page of Project Settings.


#include "MakingTunel.h"

// Sets default values
AMakingTunel::AMakingTunel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMakingTunel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMakingTunel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMakingTunel::GenerateTunnel()
{
    // Nastavte základní geometrii, napøíklad válec
    UStaticMesh* CylinderMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));

    if (CylinderMesh)
    {
        UStaticMeshComponent* TunnelMeshComponent = NewObject<UStaticMeshComponent>(this);
        TunnelMeshComponent->SetStaticMesh(CylinderMesh);
        TunnelMeshComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

        // Nastavte velikost a pozici tunelu
        TunnelMeshComponent->SetWorldScale3D(FVector(3, 3, 10)); // Rozšiøte válec do tvaru tunelu
    }
}
