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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MoviePlayer.EMoviePlaybackType
	 */
	enum class EMoviePlaybackType : uint8_t
	{
		MT_Normal      = 0,
		MT_Looped      = 1,
		MT_LoadingLoop = 2,
		MT_MAX         = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
