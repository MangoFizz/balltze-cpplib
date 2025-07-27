// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__HUD_NUMBER_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__HUD_NUMBER_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct HudNumber {
		TagDependency digits_bitmap;
		std::int8_t bitmap_digit_width;
		std::int8_t screen_digit_width;
		std::int8_t x_offset;
		std::int8_t y_offset;
		std::int8_t decimal_point_width;
		std::int8_t colon_width;
		PADDING(2);
		PADDING(76);
	};
	static_assert(sizeof(HudNumber) == 100);

}

#pragma pack(pop)

#endif

