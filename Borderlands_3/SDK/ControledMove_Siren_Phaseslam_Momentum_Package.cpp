﻿/**
 * Name: Borderlands_3
 * Version: OAK-PATCHWIN640-328
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControledMove_Siren_Phaseslam_Momentum_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControledMove_Siren_Phaseslam_Momentum_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControledMove_Siren_Phaseslam_Momentum.ControledMove_Siren_Phaseslam_Momentum_C");
		return ptr;
	}

}


