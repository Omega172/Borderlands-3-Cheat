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
	 * 		Name   -> PredefinedFunction UCE_CryoFreezing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_CryoFreezing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_CryoFreezing.CE_CryoFreezing_C");
		return ptr;
	}

}


