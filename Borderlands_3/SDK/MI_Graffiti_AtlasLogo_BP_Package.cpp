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
	 * 		Name   -> PredefinedFunction AMI_Graffiti_AtlasLogo_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMI_Graffiti_AtlasLogo_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MI_Graffiti_AtlasLogo_BP.MI_Graffiti_AtlasLogo_BP_C");
		return ptr;
	}

}


