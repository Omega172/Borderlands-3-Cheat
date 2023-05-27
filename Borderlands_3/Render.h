#pragma once
#include "pch.h"

namespace Colors
{
	CG::FLinearColor Cyan = { 0.f, 1.f, 1.f, 1.f };

	CG::FLinearColor Black = { 0.f, 0.f, 0.f, 1.f };
	CG::FLinearColor White = { 1.f, 1.f, 1.f, 1.f };

	CG::FLinearColor Red = { 1.f, 0.f, 0.f, 1.f };
	CG::FLinearColor Green = { 0.f, 1.f, 0.f, 1.f };
	CG::FLinearColor Blue = { 0.f, 0.f, 1.f, 1.f };
}

void DrawBox(CG::UCanvas* canvas, CG::FVector2D TopLeft, CG::FVector2D DownRight, float Thickness, bool bIsVisible, CG::FLinearColor colVis, CG::FLinearColor colHidden)
{
	auto h = DownRight.Y - TopLeft.Y;
	auto w = DownRight.X - TopLeft.X;

	auto DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);
	auto TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);

	canvas->K2_DrawLine(TopLeft, { TopLeft.X, TopLeft.Y + h * 1 }, 1.f, ((bIsVisible) ? colVis : colHidden));
	canvas->K2_DrawLine(TopLeft, { TopLeft.X + w * 1, TopLeft.Y }, 1.f, ((bIsVisible) ? colVis : colHidden));

	canvas->K2_DrawLine(DownRight, { DownRight.X, DownRight.Y - h * 1 }, 1.f, ((bIsVisible) ? colVis : colHidden));
	canvas->K2_DrawLine(DownRight, { DownRight.X - w * 1, DownRight.Y }, 1.f, ((bIsVisible) ? colVis : colHidden));

	canvas->K2_DrawLine(DownLeft, { DownLeft.X, DownLeft.Y - h * 1 }, 1.f, ((bIsVisible) ? colVis : colHidden));
	canvas->K2_DrawLine(DownLeft, { DownLeft.X + w * 1, DownLeft.Y }, 1.f, ((bIsVisible) ? colVis : colHidden));

	canvas->K2_DrawLine(TopRight, { TopRight.X, TopRight.Y + h * 1 }, 1.f, ((bIsVisible) ? colVis : colHidden));
	canvas->K2_DrawLine(TopRight, { TopRight.X - w * 1, TopRight.Y }, 1.f, ((bIsVisible) ? colVis : colHidden));
}