// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Plant.generated.h"

UCLASS()
class GOAP_ECOSYSTEM_API APlant : public AActor
{
	GENERATED_BODY()

private:
	const static float GenericBaseNutrition;
protected:
	float m_relativeSize;
	float m_nutritionMultiplier;
	float m_reproduceTime;

	const virtual float& GetBaseNutrition() const { return GenericBaseNutrition; }

	
public:	
	// Sets default values for this actor's properties
	APlant();
	void InitializePlant(const float &relativeSize, const float &nutritionMultiplier);

	float GetNutritionValue() const { return GetBaseNutrition() * m_relativeSize * m_relativeSize * m_relativeSize * m_nutritionMultiplier; }

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(Category = "CPPFunctions", BlueprintImplementableEvent, DisplayName = "Reproduce")
	void Reproduce();

	UFUNCTION(BlueprintCallable, DisplayName = "SpawnDescendent")
	virtual void SpawnDescendent(FVector location);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<APlant> PlantToSpawn;
};
