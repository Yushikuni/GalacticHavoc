// Fill out your copyright notice in the Description page of Project Settings.


#include "TunnelComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"


// Sets default values for this component's properties
UTunnelComponent::UTunnelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UTunnelComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UTunnelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTunnelComponent::GenerateTunel()
{
	// Nastavte základní geometrii, napøíklad válec
	UStaticMesh* CylinderMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));

	if (CylinderMesh)
	{
		UStaticMeshComponent* TunnelMeshComponent = NewObject<UStaticMeshComponent>(this);
		TunnelMeshComponent->SetStaticMesh(CylinderMesh);
		//TunnelMeshComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

		// Nastavte velikost a pozici tunelu
		TunnelMeshComponent->SetWorldScale3D(FVector(3, 3, 10)); // Rozšiøte válec do tvaru tunelu
	}
}
