// Fill out your copyright notice in the Description page of Project Settings.


#include "Playing/PlayingMyCharacter.h"

// Sets default values
APlayingMyCharacter::APlayingMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayingMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayingMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayingMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayingMyCharacter:: MoveForward(float val)
{
    AddMovementInput(GetActorForwardVector(),val)
}

void APlayingMyCharacter:: MoveBack(float val){}

void APlayingMyCharacter:: MoveRight(float val){

}
void APlayingMyCharacter:: MoveLeft(float val){

}
