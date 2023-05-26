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
	 * 		Name   -> PredefinedFunction APC_Flag_Banner_Variant_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APC_Flag_Banner_Variant_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PC_Flag_Banner_Variant_02.PC_Flag_Banner_Variant_02_C");
		return ptr;
	}

}


