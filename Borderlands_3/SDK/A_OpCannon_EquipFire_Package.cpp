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
	 * 		Name   -> PredefinedFunction UA_OpCannon_EquipFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_OpCannon_EquipFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_OpCannon_EquipFire.A_OpCannon_EquipFire_C");
		return ptr;
	}

}


