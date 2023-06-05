#pragma once
#include "pch.h"

namespace GUI
{
	inline bool bMenuOpen = false;
	inline float WIDTH = 700;
	inline float HEIGHT = 400;

	inline void BeginRender()
	{
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		ImGuiIO& io = ImGui::GetIO();
	}

	void Render();

	inline void EndRender()
	{
		ImGui::EndFrame();
		ImGui::Render();
	}
}