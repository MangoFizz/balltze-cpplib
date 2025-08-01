// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__PREFERENCES_NETWORK_GAME_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__PREFERENCES_NETWORK_GAME_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct PreferencesNetworkGame {
		TagString name;
		ColorRGB primary_color;
		ColorRGB secondary_color;
		TagDependency pattern;
		Index pattern_bitmap_index;
		PADDING(2);
		TagDependency decal;
		Index decal_bitmap_index;
		PADDING(2);
		PADDING(800);
	};
	static_assert(sizeof(PreferencesNetworkGame) == 896);

}

#pragma pack(pop)

#endif

