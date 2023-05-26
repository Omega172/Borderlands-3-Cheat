#pragma once

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
	 * BlueprintGeneratedClass BPWeap_PS_TOR.BPWeap_PS_TOR_C
	 * Size -> 0x000F (FullSize[0x0A00] - InheritedSize[0x09F1])
	 */
	class ABPWeap_PS_TOR_C : public ABPWeap_Torgue_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_A9WZ[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F8(0x0008) Transient, DuplicateTransient

	public:
		void HideMoonClip();
		void ShowMoonClip();
		void UserConstructionScript();
		void Notify_ReloadEnded(bool bCompleted);
		void ShowAmmo();
		void ReceiveBeginPlay();
		void HideSpeedLoader();
		void ResetCylinder();
		void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
		void ExecuteUbergraph_BPWeap_PS_TOR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
