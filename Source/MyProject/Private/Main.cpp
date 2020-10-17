// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"

AMain::AMain() {

	// Initialize params 
	MaxHealth = 100.f;
	BaseHealth = 65.f;
	MaxStamina = 150.f;
	BaseStamina = 120.f;
	Coins = 0;
}

void AMain::DecreaseStamina()
{
	if (BaseStamina > 10) {
		BaseStamina -= 10;
	}
}
