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
	 * BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOakCommonFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Bitmask_EnumArrayToInt(TArray<unsigned char>* Enum, class UObject* __WorldContext, int32_t* Bitmask);
		void STATIC_Bitmask_EnumToInt(unsigned char Enum, class UObject* __WorldContext, int32_t* Bitmask);
		void STATIC_Bitmask_RandomEnum(int32_t BitmaskInt, class UObject* __WorldContext, unsigned char* RandomEnum);
		void STATIC_CheckChallengeArrayStatus(TArray<class UClass*>* ChallengeArray, class APlayerController* ChracterController, class UObject* __WorldContext, TArray<class UClass*>* CompletedChallengesArray);
		void STATIC_CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete);
		void STATIC_ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_Cosh(float A, class UObject* __WorldContext, float* result);
		void STATIC_SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
		void STATIC_SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
		void STATIC_SetDebugConsoleCommands(class APlayerController* PlayerController, bool StatUnit, bool StatFPS, bool ShowDebugMissions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext);
		void STATIC_MissionTempHudText(class UObject* WorldContextObject, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext);
		void STATIC_DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext);
		void STATIC_CompareDamageSource(class UDamageSource* DamageSource1, class UClass* DamageSource2, class UObject* __WorldContext, bool* Equal, bool* NotEqual);
		void STATIC_MakeTransformsAroundCone(const struct FVector& ConeAxis, const struct FVector& ConeLocation, float ConeAngleMin, float ConeAngleMax, float RotationAngleDivergence, float SweepAngle, float DistanceFromConeCenter, int32_t NumberOfTransforms, class UObject* __WorldContext, TArray<struct FTransform>* OutTransforms);
		void STATIC_GetPlayerViewTrace(class AOakCharacter_Player* PlayerCharacter, float TraceLength, class UObject* __WorldContext, struct FVector* TraceStart, struct FVector* TraceEnd);
		void STATIC_GetRegenerationRate(class UObject* Context, float MaxRegenRate, class UObject* __WorldContext, float* RegenRate);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
