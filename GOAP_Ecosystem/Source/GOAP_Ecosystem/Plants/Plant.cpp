// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "UObject/ConstructorHelpers.h"

const float APlant::GenericBaseNutrition = 1;

// Sets default values
APlant::APlant() : m_reproduceTime(5)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("PlantMesh");

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMeshObject(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush.SM_Bush'"));
	if (PlantMeshObject.Succeeded())
		Mesh->SetStaticMesh(PlantMeshObject.Object);

}

void APlant::InitializePlant(const float &relativeSize, const float &nutritionMultiplier)
{
	m_relativeSize = relativeSize;
	m_nutritionMultiplier = nutritionMultiplier;
	this->SetActorScale3D(FVector(m_relativeSize));
}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();

	
}


void APlant::SpawnDescendent(FVector location)
{
	this->GetWorld()->SpawnActor<APlant>(PlantToSpawn, location, FRotator(0));
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_reproduceTime -= DeltaTime;
	if (m_reproduceTime > 0)
		return;
	if (FMath::RandRange(0, 1) < .004)
	{
		this->Reproduce();
		m_reproduceTime = FMath::RandRange(4,10);
	}
}

