﻿#pragma once

/**
 * Name: Borderlands_3
 * Version: OAK-PATCHWIN640-328
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnEnd
	 */
	struct UANav_PetLoader_DropDown_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FI57[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnBegin
	 */
	struct UANav_PetLoader_DropDown_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpEnd
	 */
	struct UANav_PetLoader_DropDown_C_Loader_JumpEnd_Params
	{	};

	/**
	 * Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpStart
	 */
	struct UANav_PetLoader_DropDown_C_Loader_JumpStart_Params
	{	};

	/**
	 * Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.ExecuteUbergraph_ANav_PetLoader_DropDown
	 */
	struct UANav_PetLoader_DropDown_C_ExecuteUbergraph_ANav_PetLoader_DropDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
