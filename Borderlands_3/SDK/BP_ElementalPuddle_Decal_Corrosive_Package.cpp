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
	 * 		Name   -> PredefinedFunction ABP_ElementalPuddle_Decal_Corrosive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ElementalPuddle_Decal_Corrosive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalPuddle_Decal_Corrosive.BP_ElementalPuddle_Decal_Corrosive_C");
		return ptr;
	}

}


