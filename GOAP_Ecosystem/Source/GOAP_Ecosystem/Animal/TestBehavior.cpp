// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBehavior.h"

// Called every frame
void UTestBehavior::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor *act = GetOwner();
	FVector temp = act->GetActorLocation();
	temp.Z -= 2.f;
	act->SetActorLocation(temp);

	// ...
}