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
	 * 		Name   -> PredefinedFunction APC_Tarp_Draping_Wide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APC_Tarp_Draping_Wide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PC_Tarp_Draping_Wide.PC_Tarp_Draping_Wide_C");
		return ptr;
	}

}


