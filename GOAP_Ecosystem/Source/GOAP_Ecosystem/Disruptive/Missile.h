// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Math/Vector.h"
#include "Math/RotationMatrix.h"
#include "Missile.generated.h"

UCLASS()
class GOAP_ECOSYSTEM_API AMissile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMissile(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector targetLocation = FVector(0, 0, 0);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FQuat QuatPow(const FQuat &quat, const float &pow);

	void UpdateMovement(const FVector &targetLocation, const float &DeltaTime);
	//void FindPlayer();
	//void UpdateTarget();

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Movement")
	class UProjectileMovementComponent* Movement;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Target")
	class AActor* target = nullptr;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Test")
	float turnRate = 2;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Test")
	float speed = 1000.f;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Test")
	float missileSpinSpeed = 2;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Mesh")
	class UStaticMeshComponent* missileMesh;

	class USceneComponent* rootComponent;

};
