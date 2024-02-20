// Fill out your copyright notice in the Description page of Project Settings.


#include "AruaCharacterBase.h"

// Sets default values
AAruaCharacterBase::AAruaCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAruaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAruaCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAruaCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

