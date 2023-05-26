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
	 * 		Name   -> PredefinedFunction UActionNotify_EquipWepInterruptable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionNotify_EquipWepInterruptable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionNotify_EquipWepInterruptable.ActionNotify_EquipWepInterruptable_C");
		return ptr;
	}

}


