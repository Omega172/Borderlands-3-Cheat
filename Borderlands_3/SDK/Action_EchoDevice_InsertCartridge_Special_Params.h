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
	 * Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnBegin
	 */
	struct UAction_EchoDevice_InsertCartridge_Special_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnEnd
	 */
	struct UAction_EchoDevice_InsertCartridge_Special_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XKBY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.PlayEchoDeviceScreen
	 */
	struct UAction_EchoDevice_InsertCartridge_Special_C_PlayEchoDeviceScreen_Params
	{	};

	/**
	 * Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special
	 */
	struct UAction_EchoDevice_InsertCartridge_Special_C_ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76SO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
