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
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.OnEnd
	 */
	struct UAction_Melee_Beastmaster_Success_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9DT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.OnBeginBringUpWeapon
	 */
	struct UAction_Melee_Beastmaster_Success_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.CameraPop
	 */
	struct UAction_Melee_Beastmaster_Success_C_CameraPop_Params
	{	};

	/**
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.CameraPush
	 */
	struct UAction_Melee_Beastmaster_Success_C_CameraPush_Params
	{	};

	/**
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.PlayScreenParticle
	 */
	struct UAction_Melee_Beastmaster_Success_C_PlayScreenParticle_Params
	{	};

	/**
	 * Function Action_Melee_Beastmaster_Success.Action_Melee_Beastmaster_Success_C.ExecuteUbergraph_Action_Melee_Beastmaster_Success
	 */
	struct UAction_Melee_Beastmaster_Success_C_ExecuteUbergraph_Action_Melee_Beastmaster_Success_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
