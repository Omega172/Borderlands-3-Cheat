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
	 * BlueprintGeneratedClass Dodge_PetLoader_Bullet_Moving_FL.Dodge_PetLoader_Bullet_Moving_FL_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class UDodge_PetLoader_Bullet_Moving_FL_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class AActor*                                              MySelf;                                                  // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBegin(class AActor* Actor);
		void Loader_JumpEnd();
		void Loader_JumpStart();
		void ExecuteUbergraph_Dodge_PetLoader_Bullet_Moving_FL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
