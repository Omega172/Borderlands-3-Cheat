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
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	 */
	struct AReplicationGraphDebugActor_ServerStopDebugging_Params
	{	};

	/**
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	 */
	struct AReplicationGraphDebugActor_ServerStartDebugging_Params
	{	};

	/**
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	 */
	struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CullDistance;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	 */
	struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
	{
	public:
		class FString                                              str;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	 */
	struct AReplicationGraphDebugActor_ServerCellInfo_Params
	{	};

	/**
	 * Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	 */
	struct AReplicationGraphDebugActor_ClientCellInfo_Params
	{
	public:
		struct FVector                                             CellLocation;                                            // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CellExtent;                                              // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
