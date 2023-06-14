#pragma once
#include "Feature.h"

class FlyHack : Feature
{
private:
	bool Initalized = false;
	bool bFlySwitch = false;
	bool bSettingKey = false;

public:
	bool bEnabled = false;
	bool bNoClip = true;
	float fSpeed = 5.f;
	KeyBindToggle kbToggle = KeyBindToggle(KeyBind::KeyCode::H);

private:
	float fOldFlySpeed = 0.0f;

public:
	FlyHack() {};

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
	void HandleKeys() override 
	{
		if (GetAsyncKeyState(kbToggle.toInt()) & 0x1)
			bEnabled = !bEnabled;
	}

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems() override
	{
		ImGui::Checkbox("FlyHack", &bEnabled);
		ImGui::SameLine();
		ImGui::Hotkey("##FlyHack Key", kbToggle, &bSettingKey);
		ImGui::Checkbox("NoClip", &bNoClip);

		if (bEnabled)
		{
			ImGui::Text("Flight Speed Multiplier");
			ImGui::SliderFloat("##Flight Speed Multiplier", &fSpeed, 1.0f, 20.f);
		}
	}

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render(void** args, size_t numArgs) override {}

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run(void** args, size_t numArgs) override;
};