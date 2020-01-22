// Fill out your copyright notice in the Description page of Project Settings.


#include "Animal.h"

//ConstructorHelpers::FObjectFinder<UStaticMesh> AAnimal::SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));

// Sets default values
AAnimal::AAnimal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
    //RootComponent = CreateDefaultSubobject<USceneComponent>(FName("Root"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("AnimalMesh"));
	//Mesh->SetupAttachment(RootComponent);
	EatRadius = CreateDefaultSubobject<USphereComponent>(FName("EatBounds"));
	EatRadius->SetupAttachment(RootComponent);
	EatRadius->SetSphereRadius(400);
	//SphereMesh->SetStaticMesh(SphereMeshAsset.Object);
	//SphereMesh->SetupAttachment(DetectionRadius);
}

// Called when the game starts or when spawned
void AAnimal::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAnimal::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//Sphere = CreateDefaultSubobject<USphereComponent>("DetectionBounds");
	//Sphere->SetupAttachment(RootComponent);
	//Sphere->RegisterComponent();
	//Sphere->SetRelativeLocation(FVector(0, 0, 0));
	//DetectionRadius->bHiddenInGame = true;
}

// Called every frame
void AAnimal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

