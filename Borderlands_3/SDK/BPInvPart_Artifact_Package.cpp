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
	 * 		Name   -> PredefinedFunction UBPInvPart_Artifact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvPart_Artifact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_Artifact.BPInvPart_Artifact_C");
		return ptr;
	}

}


