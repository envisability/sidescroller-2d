// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Main.generated.h"



/**
 * 
 */
UCLASS()
class MYPROJECT_API AMain : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	/** Constructor */
	AMain();

	/** Stats */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float BaseHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float BaseStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Coins;

	/** Pickup */
	TArray<FVector> PickupLocations;

	/** Change player's vitals*/
	UFUNCTION(BlueprintCallable)
	void DecreaseStamina();

};
