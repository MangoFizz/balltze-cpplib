// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__COLOR_TABLE_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__COLOR_TABLE_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct ColorTableColor {
		TagString name;
		ColorARGB color;
	};
	static_assert(sizeof(ColorTableColor) == 48);

	struct ColorTable {
		TagBlock<ColorTableColor> colors;
	};
	static_assert(sizeof(ColorTable) == 12);

}

#pragma pack(pop)

#endif

