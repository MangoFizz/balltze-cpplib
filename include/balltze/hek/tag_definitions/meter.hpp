// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__METER_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__METER_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::HEK::TagDefinitions { 
	enum MeterInterpolateColors : std::uint16_t {
		METER_INTERPOLATE_COLORS_LINEARLY = 0,
		METER_INTERPOLATE_COLORS_FASTER_NEAR_EMPTY,
		METER_INTERPOLATE_COLORS_FASTER_NEAR_FULL,
		METER_INTERPOLATE_COLORS_THROUGH_RANDOM_NOISE,
	};

	enum MeterAnchorColors : std::uint16_t {
		METER_ANCHOR_COLORS_AT_BOTH_ENDS = 0,
		METER_ANCHOR_COLORS_AT_EMPTY,
		METER_ANCHOR_COLORS_AT_FULL,
	};

	struct Meter {
		Memory::BigEndian<IsUnusedFlag> flags;
		TagDependency stencil_bitmaps;
		TagDependency source_bitmap;
		Memory::BigEndian<std::uint16_t> stencil_sequence_index;
		Memory::BigEndian<std::uint16_t> source_sequence_index;
		PADDING(16);
		PADDING(4);
		Memory::BigEndian<MeterInterpolateColors> interpolate_colors;
		Memory::BigEndian<MeterAnchorColors> anchor_colors;
		PADDING(8);
		ColorARGB empty_color;
		ColorARGB full_color;
		PADDING(20);
		Memory::BigEndian<float> unmask_distance;
		Memory::BigEndian<float> mask_distance;
		PADDING(20);
		TagDataOffset encoded_stencil;
	};
	static_assert(sizeof(Meter) == 172);

}

#pragma pack(pop)

#endif

