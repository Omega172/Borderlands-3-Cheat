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
	 * 		Name   -> PredefinedFunction UCM_ShoulderCannon_Mod3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_ShoulderCannon_Mod3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CM_ShoulderCannon_Mod3.CM_ShoulderCannon_Mod3_C");
		return ptr;
	}

}


