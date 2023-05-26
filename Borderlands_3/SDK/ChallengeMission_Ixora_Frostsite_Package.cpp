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
	 * 		Name   -> PredefinedFunction UChallengeMission_Ixora_Frostsite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeMission_Ixora_Frostsite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeMission_Ixora_Frostsite.ChallengeMission_Ixora_Frostsite_C");
		return ptr;
	}

}


