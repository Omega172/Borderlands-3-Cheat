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
	 * 		Name   -> PredefinedFunction UMacroLibrary_Dialog_Mission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMacroLibrary_Dialog_Mission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MacroLibrary_Dialog_Mission.MacroLibrary_Dialog_Mission_C");
		return ptr;
	}

}


