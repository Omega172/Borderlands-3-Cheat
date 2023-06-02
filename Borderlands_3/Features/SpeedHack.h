#pragma once
#include "Feature.h"

class SpeedHack : Feature
{
private:
	bool Initalized = false;
	bool bSpeedSwitch = false;

public:
	bool bEnabled = true;
	float fSpeed = 5.f;

private:
	float fOldSpeed = 0.f;

public:
	SpeedHack() {};

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
		ImGui::Checkbox("SpeedHack", &bEnabled);

		if (bEnabled)
		{
			ImGui::Text("Speed Multiplier");
			ImGui::SliderFloat("##Speed Multiplier", &fSpeed, 1.0f, 20.f);
		}
	}

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render(void** args, size_t numArgs) override {}

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run(void** args, size_t numArgs) override;
};