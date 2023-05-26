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
	 * 		Name   -> PredefinedFunction APickup_SM_VendingMachineRepair_HumanSpine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickup_SM_VendingMachineRepair_HumanSpine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pickup_SM_VendingMachineRepair_HumanSpine.Pickup_SM_VendingMachineRepair_HumanSpine_C");
		return ptr;
	}

}


