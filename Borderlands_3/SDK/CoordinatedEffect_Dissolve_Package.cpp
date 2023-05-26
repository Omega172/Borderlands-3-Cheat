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
	 * 		Name   -> PredefinedFunction UCoordinatedEffect_Dissolve_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoordinatedEffect_Dissolve_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CoordinatedEffect_Dissolve.CoordinatedEffect_Dissolve_C");
		return ptr;
	}

}


