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
	 * 		Name   -> PredefinedFunction UCM_BearFist_Pull_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_BearFist_Pull_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CM_BearFist_Pull_L.CM_BearFist_Pull_L_C");
		return ptr;
	}

}


