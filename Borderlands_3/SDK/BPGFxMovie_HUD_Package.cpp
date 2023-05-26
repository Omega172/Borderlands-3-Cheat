/**
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
	 * 		Name   -> PredefinedFunction UBPGFxMovie_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPGFxMovie_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPGFxMovie_HUD.BPGFxMovie_HUD_C");
		return ptr;
	}

}


