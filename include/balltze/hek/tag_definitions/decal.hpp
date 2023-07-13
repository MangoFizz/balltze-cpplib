// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__DECAL_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__DECAL_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum DecalType : std::uint16_t {
		DECAL_TYPE_SCRATCH = 0,
		DECAL_TYPE_SPLATTER,
		DECAL_TYPE_BURN,
		DECAL_TYPE_PAINTED_SIGN,
	};

	enum DecalLayer : std::uint16_t {
		DECAL_LAYER_PRIMARY = 0,
		DECAL_LAYER_SECONDARY,
		DECAL_LAYER_LIGHT,
		DECAL_LAYER_ALPHA_TESTED,
		DECAL_LAYER_WATER,
	};

	struct DecalFlags {
		std::uint16_t geometry_inherited_by_next_decal_in_chain : 1;
		std::uint16_t interpolate_color_in_hsv : 1;
		std::uint16_t more_colors : 1;
		std::uint16_t no_random_rotation : 1;
		std::uint16_t water_effect : 1;
		std::uint16_t sapien_snap_to_axis : 1;
		std::uint16_t sapien_incremental_counter : 1;
		std::uint16_t animation_loop : 1;
		std::uint16_t preserve_aspect : 1;
		std::uint16_t disabled_in_anniversary_by_blood_setting : 1;
	};
	static_assert(sizeof(DecalFlags) == sizeof(std::uint16_t));

	struct Decal {
		Memory::BigEndian<DecalFlags> flags;
		Memory::BigEndian<DecalType> type;
		Memory::BigEndian<DecalLayer> layer;
		PADDING(2);
		TagDependency next_decal_in_chain;
		Memory::BigEndian<float> radius[2];
		PADDING(12);
		Fraction intensity[2];
		ColorRGB color_lower_bounds;
		ColorRGB color_upper_bounds;
		PADDING(12);
		Memory::BigEndian<std::int16_t> animation_loop_frame;
		Memory::BigEndian<std::int16_t> animation_speed;
		PADDING(28);
		Memory::BigEndian<float> lifetime[2];
		Memory::BigEndian<float> decay_time[2];
		PADDING(12);
		PADDING(40);
		PADDING(2);
		PADDING(2);
		Memory::BigEndian<FramebufferBlendFunction> framebuffer_blend_function;
		PADDING(2);
		PADDING(20);
		TagDependency map;
		PADDING(20);
		Memory::BigEndian<float> maximum_sprite_extent;
		PADDING(4);
		PADDING(8);
	};
	static_assert(sizeof(Decal) == 268);

}

#endif

