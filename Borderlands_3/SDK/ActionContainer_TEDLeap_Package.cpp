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
	 * 		Name   -> PredefinedFunction UActionContainer_TEDLeap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionContainer_TEDLeap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionContainer_TEDLeap.ActionContainer_TEDLeap_C");
		return ptr;
	}

}


