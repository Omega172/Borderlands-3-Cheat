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
	 * BlueprintGeneratedClass ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C
	 * Size -> 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
	 */
	class UShieldAugAtt_Beskar_C : public UShieldAugment_Attribute
	{
	public:
		void K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
