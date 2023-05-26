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
	 * 		Name   -> PredefinedFunction UBPMenu_GFxTitleScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPMenu_GFxTitleScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxTitleScreen.BPMenu_GFxTitleScreen_C");
		return ptr;
	}

}


