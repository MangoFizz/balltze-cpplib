// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__DETAIL_OBJECT_COLLECTION_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__DETAIL_OBJECT_COLLECTION_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum DetailObjectCollectionType : std::uint16_t {
		DETAIL_OBJECT_COLLECTION_TYPE_SCREEN_FACING = 0,
		DETAIL_OBJECT_COLLECTION_TYPE_VIEWER_FACING,
	};

	struct DetailObjectCollectionTypeFlags {
		std::uint8_t unused_a : 1;
		std::uint8_t unused_b : 1;
		std::uint8_t interpolate_color_in_hsv : 1;
		std::uint8_t more_colors : 1;
	};
	static_assert(sizeof(DetailObjectCollectionTypeFlags) == sizeof(std::uint8_t));

	struct DetailObjectCollectionObjectType {
		TagString name;
		std::uint8_t sequence_index;
		DetailObjectCollectionTypeFlags flags;
		std::uint8_t first_sprite_index;
		std::uint8_t sprite_count;
		Fraction color_override_factor;
		PADDING(8);
		float near_fade_distance;
		float far_fade_distance;
		float size;
		PADDING(4);
		ColorRGB minimum_color;
		ColorRGB maximum_color;
		ColorARGBInt ambient_color;
		PADDING(4);
	};
	static_assert(sizeof(DetailObjectCollectionObjectType) == 96);

	struct DetailObjectCollection {
		DetailObjectCollectionType collection_type;
		PADDING(2);
		float global_z_offset;
		PADDING(44);
		TagDependency sprite_plate;
		TagBlock<DetailObjectCollectionObjectType> types;
		PADDING(48);
	};
	static_assert(sizeof(DetailObjectCollection) == 128);

}

#pragma pack(pop)

#endif

