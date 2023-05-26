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
	 * 		Name   -> PredefinedFunction UBPMenu_ControllerDisconnect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPMenu_ControllerDisconnect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_ControllerDisconnect.BPMenu_ControllerDisconnect_C");
		return ptr;
	}

}


