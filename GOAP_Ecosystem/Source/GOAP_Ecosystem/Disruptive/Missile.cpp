// Fill out your copyright notice in the Description page of Project Settings.


#include "Missile.h"

// Sets default values
AMissile::AMissile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	missileMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Missile"));
	rootComponent->SetupAttachment(RootComponent);

	Movement = ObjectInitializer.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileMovement"));
	Movement->ProjectileGravityScale = 0.f;
	Movement->bRotationFollowsVelocity = false;
	Movement->bIsHomingProjectile = false;
	Movement->HomingAccelerationMagnitude = 0.f;
	Movement->Velocity = FVector(0,0,0);

}

// Called when the game starts or when spawned
void AMissile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (target)
	{
		targetLocation = target->GetActorLocation();
	}
	UpdateMovement(targetLocation);
}

//Rather than passing a transform to the function, I've passed a Vector. This is so in the future we could pass any location, regardless of where we got it, to the missile.
void AMissile::UpdateMovement(const FVector &targetLocation)
{
	//Convert Forward Vector to Quaternion
	FQuat current = GetActorForwardVector().Rotation().Quaternion();

	//Find Vector for target direction, then convert to Quaternion
	FQuat target = (targetLocation - GetActorLocation()).Rotation().Quaternion();

	FQuat clampedChange = FQuat::MakeFromEuler(QuatPow(target * current.Inverse(), turnRate).Euler());

	//Spherically LERP between the two Quaternions by our turnRate
	SetActorRotation(clampedChange * current);

	//Apply the new rotation to our velocity
	Movement->Velocity = GetActorForwardVector() * speed;

	//For fun, spin the missile Mesh!
	missileMesh->AddLocalRotation(FRotator(0, 0, missileSpinSpeed));
}

//Custom function to find the exponentional Power of a Quaternion
FQuat AMissile::QuatPow(const FQuat &quat, const float &pow)
{
	//To Axis and Angle will play the axis angle equivalent of our quaternion in two pieces, the angle in a and the axis in n.
	float a;
	FVector n;
	quat.ToAxisAndAngle(n, a);
	
	//Ensure missile stays on track if the difference betweens our quaternions comes in the wrong direction.
	if (a > PI) a -= 2 * PI;

	//convert a new AxisAngle, with the angle multiplied by our power, back to a quaternion
	return FQuat(n, a * pow);
}



