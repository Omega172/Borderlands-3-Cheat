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
	 * 		Name   -> PredefinedFunction UPostProcessSettingsMaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostProcessSettingsMaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PostProcessSettingsMaster.PostProcessSettingsMaster_C");
		return ptr;
	}

}


