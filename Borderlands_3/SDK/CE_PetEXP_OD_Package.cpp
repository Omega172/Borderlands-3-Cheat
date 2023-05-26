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
	 * 		Name   -> PredefinedFunction UCE_PetEXP_OD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_PetEXP_OD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_PetEXP_OD.CE_PetEXP_OD_C");
		return ptr;
	}

}


