// Fill out your copyright notice in the Description page of Project Settings.

#include "DefaultPlayerCamera.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UDefaultPlayerCamera::UDefaultPlayerCamera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bConstrainAspectRatio = true;
	Camera->SetAspectRatio(4 / 3);
	// ...
}

// Called when the game starts
void UDefaultPlayerCamera::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UDefaultPlayerCamera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}