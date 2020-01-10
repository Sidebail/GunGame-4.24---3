// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponModuleParent_C.generated.h"

UCLASS()
class GUNGAME_API AWeaponModuleParent_C : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponModuleParent_C();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponStats")
		int mag_capacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float caliber_damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float vert_recoil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float hor_recoil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float fs_vert_recoil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float fs_hor_recoil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float distance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float reload_time;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		float noise_rate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponStats")
		FString type;

};
