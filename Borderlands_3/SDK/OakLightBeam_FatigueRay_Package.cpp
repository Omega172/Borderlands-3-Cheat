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
	 * 		Name   -> PredefinedFunction UOakLightBeam_FatigueRay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakLightBeam_FatigueRay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakLightBeam_FatigueRay.OakLightBeam_FatigueRay_C");
		return ptr;
	}

}


