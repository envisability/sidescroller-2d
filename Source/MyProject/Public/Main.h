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

	virtual void Tick(float DeltaSeconds) override;

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

	/** Animations */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* DieAnimation;

	/** Pickup */
	TArray<FVector> PickupLocations;

	/** Change player's vitals*/
	UFUNCTION(BlueprintCallable)
	void DecreaseStamina();

	UFUNCTION(BlueprintCallable)
	void IncrementCoins(int32 Amount);

	UFUNCTION(BlueprintCallable)
	void IncrementHealth(float Amount);

	UFUNCTION(BlueprintCallable)
	void DecrementHealth(float Amount);

	void Die();

};
