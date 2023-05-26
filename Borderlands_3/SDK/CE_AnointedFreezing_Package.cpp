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
	 * 		Name   -> PredefinedFunction UCE_AnointedFreezing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_AnointedFreezing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_AnointedFreezing.CE_AnointedFreezing_C");
		return ptr;
	}

}


