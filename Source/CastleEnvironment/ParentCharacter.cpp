// Fill out your copyright notice in the Description page of Project Settings.

#include "ParentCharacter.h"
#include "MyGameStateBase.h"

// Sets default values
AParentCharacter::AParentCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AParentCharacter::BeginPlay()
{
	Super::BeginPlay();

	MyGameStateBase = Cast<AMyGameStateBase>(GetWorld()->GetGameState());

}

// Called every frame
void AParentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AParentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

