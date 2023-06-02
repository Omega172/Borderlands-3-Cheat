#pragma once
#include "Feature.h"

class WeaponStuff : Feature
{
private:
	bool Initalized = false;
	bool bNoSpreadSwitch = false;
	bool bInfiniteAmmoSwitch = false;
	bool bFireRateSwitch = false;

	float fFireRate = 1;

public:
	bool bNoRecoil = true;
	bool bNoSpread = true;
	bool bInfiniteAmmo = true;
	bool bFireRate = false;

private:
	CG::AWeapon* pOldWeapon = nullptr;

	float fOldSpreadValue = 0.f;
	float fOldSpreadBaseValue = 0.f;
	float fOldAccuracyImpulseValue = 0.f;
	float fOldAccuracyImpulseBaseValue = 0.f;
	float fOldBurstAccuracyImpulseScaleValue = 0.f;
	float fOldBurstAccuracyImpulseScaleBaseValue = 0.f;

	int iOldShotAmmoCost = 0;
	int iOldMinShotAmmoCost = 0;

	float fOldFireRate = 0;

public:
	WeaponStuff() {};

	// Handle setup, like hook creation and variable initalization
	bool Setup() override
	{
		Initalized = true;

		return Initalized;
	};

	// Handle clean up, like restoring hooked functions 
	void Destroy() override
	{
		Initalized = false;
	}

	// Handle checking for any key/hotkey presses or holds needed for features
	void HandleKeys() override {}

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems() override
	{
		ImGui::Checkbox("No Recoil", &bNoRecoil);
		ImGui::SameLine();
		ImGui::Checkbox("No Spread", &bNoSpread);

		ImGui::Checkbox("Infinite Ammo", &bInfiniteAmmo);

		ImGui::Checkbox("Mod Firerate", &bFireRate);
		if (bFireRate)
			ImGui::SliderFloat("Firerate Modifier", &fFireRate, 1.f, 10.f);
	}

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render(void** args, size_t numArgs) override {}

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run(void** args, size_t numArgs) override;
};