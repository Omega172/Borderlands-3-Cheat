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
	 * 		Name   -> PredefinedFunction UBPLightBeam_Salamander_Mod1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPLightBeam_Salamander_Mod1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPLightBeam_Salamander_Mod1.BPLightBeam_Salamander_Mod1_C");
		return ptr;
	}

}


