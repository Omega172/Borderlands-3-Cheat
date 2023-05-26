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
	 * 		Name   -> PredefinedFunction ABP_Graffiti_Graffiti_Small_V4_RandomizeColor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Graffiti_Graffiti_Small_V4_RandomizeColor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Graffiti_Graffiti_Small_V4_RandomizeColor.BP_Graffiti_Graffiti_Small_V4_RandomizeColor_C");
		return ptr;
	}

}


