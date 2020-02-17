// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Engine.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

const float APlant::GenericBaseNutrition = 1;

// Sets default values
APlant::APlant() : m_reproduceTime(FMath::FRandRange(4.f, 10.f)), m_relativeSize(1), m_nutritionMultiplier(1)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(1, 5, FColor::Red, FString::Printf(TEXT("reproductionTime: %f"), m_reproduceTime));

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
	GEngine->AddOnScreenDebugMessage(3, 5, FColor::Green, FString::Printf(TEXT("Size: %s, Nutrition: %s"), *FString::SanitizeFloat(m_relativeSize), *FString::SanitizeFloat(m_nutritionMultiplier)));
}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();

	
}


void APlant::SpawnDescendent(FVector location)
{
	float rotation = FMath::FRandRange(0, 360);
	GEngine->AddOnScreenDebugMessage(4, 5, FColor::Blue, FString::SanitizeFloat(rotation));
	APlant* child = this->GetWorld()->SpawnActor<APlant>(PlantToSpawn, location, FRotator(0, rotation, 0));
	if (child)
	{
		float childSize = m_relativeSize + FMath::FRandRange(-mutationRange, mutationRange);
		float childNutrition = m_nutritionMultiplier + FMath::FRandRange(-mutationRange, mutationRange);
		child->InitializePlant(childSize, childNutrition);
	}
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_reproduceTime -= DeltaTime;
	if (m_reproduceTime > 0)
		return;
	if (FMath::FRandRange(0.f, 1.f) < .004)
	{
		this->Reproduce();
		m_reproduceTime = FMath::FRandRange(4.f,10.f);
		if (GEngine) GEngine->AddOnScreenDebugMessage(2, 5, FColor::Yellow, FString::Printf(TEXT("reproductionTime: %f"), m_reproduceTime));
	}
}

