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
	 * Function BP_GM_Payload_Summit.BP_GM_Payload_Summit_C.K2_GrenadeExplode
	 */
	struct UBP_GM_Payload_Summit_C_K2_GrenadeExplode_Params
	{
	public:
		class AGrenade*                                            Grenade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGrenadeMod*                                         GrenadeMod;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPayloadInstanceData                                InstanceData;                                            // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_GM_Payload_Summit.BP_GM_Payload_Summit_C.K2_NativeDelayCallback
	 */
	struct UBP_GM_Payload_Summit_C_K2_NativeDelayCallback_Params
	{
	public:
		class AGrenade*                                            Grenade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGrenadeMod*                                         GrenadeMod;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPayloadInstanceData                                InstanceData;                                            // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
		class FName                                                DelayName;                                               // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_Payload_Summit.BP_GM_Payload_Summit_C.K2_GrenadeBeginPlay
	 */
	struct UBP_GM_Payload_Summit_C_K2_GrenadeBeginPlay_Params
	{
	public:
		class AGrenade*                                            Grenade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGrenadeMod*                                         GrenadeMod;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPayloadInstanceData                                InstanceData;                                            // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
