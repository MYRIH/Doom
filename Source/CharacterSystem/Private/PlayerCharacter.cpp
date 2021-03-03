// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Doom/DefaultPlayerCamera.h"

APlayerCharacter::APlayerCharacter()
{
	PlayerCamera = CreateDefaultSubobject<UDefaultPlayerCamera>(TEXT("PlayerCamera"));
	//RootComponent->SetupAttachment(PlayerCamera);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}