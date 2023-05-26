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
	 * 		Name   -> PredefinedFunction ARadiateDamageActor_PetSkag_Barf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadiateDamageActor_PetSkag_Barf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_PetSkag_Barf.RadiateDamageActor_PetSkag_Barf_C");
		return ptr;
	}

}


