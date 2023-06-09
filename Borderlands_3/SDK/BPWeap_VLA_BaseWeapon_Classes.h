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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C
	 * Size -> 0x000C (FullSize[0x09D8] - InheritedSize[0x09CC])
	 */
	class ABPWeap_VLA_BaseWeapon_C : public ABPWeap_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_76DK[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPWeap_VLA_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
