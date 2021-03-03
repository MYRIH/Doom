// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	this->Health = Health;
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

int ABaseCharacter::GetHealth()
{
	return Health;
}

int ABaseCharacter::GetDamage()
{
	return Damage;
}

float ABaseCharacter::GetMoveSpeed()
{
	return MoveSpeed;
}

void ABaseCharacter::SetHealth(int NewHealth)
{
	this->Health = NewHealth;
}

void ABaseCharacter::SetDamage(int NewDamage)
{
	this->Damage = NewDamage;
}

void ABaseCharacter::SetMoveSpeed(float NewMoveSpeed)
{
	this->MoveSpeed = NewMoveSpeed;
}