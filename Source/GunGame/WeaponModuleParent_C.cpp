
// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponModuleParent_C.h"

// Sets default values
AWeaponModuleParent_C::AWeaponModuleParent_C()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeaponModuleParent_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponModuleParent_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

