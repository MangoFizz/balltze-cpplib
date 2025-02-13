// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__BITMAP_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__BITMAP_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::Engine::TagDefinitions { 
	enum BitmapDataType : std::uint16_t {
		BITMAP_DATA_TYPE_2D_TEXTURE = 0,
		BITMAP_DATA_TYPE_3D_TEXTURE,
		BITMAP_DATA_TYPE_CUBE_MAP,
		BITMAP_DATA_TYPE_WHITE,
	};

	enum BitmapDataFormat : std::uint16_t {
		BITMAP_DATA_FORMAT_A8 = 0,
		BITMAP_DATA_FORMAT_Y8,
		BITMAP_DATA_FORMAT_AY8,
		BITMAP_DATA_FORMAT_A8Y8,
		BITMAP_DATA_FORMAT_UNUSED1,
		BITMAP_DATA_FORMAT_UNUSED2,
		BITMAP_DATA_FORMAT_R5G6B5,
		BITMAP_DATA_FORMAT_UNUSED3,
		BITMAP_DATA_FORMAT_A1R5G5B5,
		BITMAP_DATA_FORMAT_A4R4G4B4,
		BITMAP_DATA_FORMAT_X8R8G8B8,
		BITMAP_DATA_FORMAT_A8R8G8B8,
		BITMAP_DATA_FORMAT_UNUSED4,
		BITMAP_DATA_FORMAT_UNUSED5,
		BITMAP_DATA_FORMAT_DXT1,
		BITMAP_DATA_FORMAT_DXT3,
		BITMAP_DATA_FORMAT_DXT5,
		BITMAP_DATA_FORMAT_P8_BUMP,
	};

	enum BitmapType : std::uint16_t {
		BITMAP_TYPE_2D_TEXTURES = 0,
		BITMAP_TYPE_3D_TEXTURES,
		BITMAP_TYPE_CUBE_MAPS,
		BITMAP_TYPE_SPRITES,
		BITMAP_TYPE_INTERFACE_BITMAPS,
	};

	enum BitmapFormat : std::uint16_t {
		BITMAP_FORMAT_DXT1 = 0,
		BITMAP_FORMAT_DXT3,
		BITMAP_FORMAT_DXT5,
		BITMAP_FORMAT_16_BIT,
		BITMAP_FORMAT_32_BIT,
		BITMAP_FORMAT_MONOCHROME,
	};

	enum BitmapUsage : std::uint16_t {
		BITMAP_USAGE_ALPHA_BLEND = 0,
		BITMAP_USAGE_DEFAULT,
		BITMAP_USAGE_HEIGHT_MAP,
		BITMAP_USAGE_DETAIL_MAP,
		BITMAP_USAGE_LIGHT_MAP,
		BITMAP_USAGE_VECTOR_MAP,
	};

	enum BitmapSpriteBudgetSize : std::uint16_t {
		BITMAP_SPRITE_BUDGET_SIZE_32X32 = 0,
		BITMAP_SPRITE_BUDGET_SIZE_64X64,
		BITMAP_SPRITE_BUDGET_SIZE_128X128,
		BITMAP_SPRITE_BUDGET_SIZE_256X256,
		BITMAP_SPRITE_BUDGET_SIZE_512X512,
		BITMAP_SPRITE_BUDGET_SIZE_1024X1024,
	};

	enum BitmapSpriteUsage : std::uint16_t {
		BITMAP_SPRITE_USAGE_BLEND_ADD_SUBTRACT_MAX = 0,
		BITMAP_SPRITE_USAGE_MULTIPLY_MIN,
		BITMAP_SPRITE_USAGE_DOUBLE_MULTIPLY,
	};

	struct BitmapDataFlags {
		std::uint16_t power_of_two_dimensions : 1;
		std::uint16_t compressed : 1;
		std::uint16_t palettized : 1;
		std::uint16_t swizzled : 1;
		std::uint16_t linear : 1;
		std::uint16_t v16u16 : 1;
		std::uint16_t unused : 1;
		std::uint16_t make_it_actually_work : 1;
		std::uint16_t external : 1;
		std::uint16_t environment : 1;
	};
	static_assert(sizeof(BitmapDataFlags) == sizeof(std::uint16_t));

	struct BitmapFlags {
		std::uint16_t enable_diffusion_dithering : 1;
		std::uint16_t disable_height_map_compression : 1;
		std::uint16_t uniform_sprite_sequences : 1;
		std::uint16_t filthy_sprite_bug_fix : 1;
		std::uint16_t half_hud_scale : 1;
	};
	static_assert(sizeof(BitmapFlags) == sizeof(std::uint16_t));

	struct BitmapGroupSprite {
		Index bitmap_index;
		PADDING(2);
		PADDING(4);
		float left;
		float right;
		float top;
		float bottom;
		Point2D registration_point;
	};
	static_assert(sizeof(BitmapGroupSprite) == 32);

	struct BitmapGroupSequence {
		TagString name;
		Index first_bitmap_index;
		std::uint16_t bitmap_count;
		PADDING(16);
		TagBlock<BitmapGroupSprite> sprites;
	};
	static_assert(sizeof(BitmapGroupSequence) == 64);

	struct BitmapData {
		TagClassInt bitmap_class;
		std::uint16_t width;
		std::uint16_t height;
		std::uint16_t depth;
		BitmapDataType type;
		BitmapDataFormat format;
		BitmapDataFlags flags;
		Point2DInt registration_point;
		std::uint16_t mipmap_count;
		PADDING(2);
		std::uint32_t pixel_data_offset;
		std::uint32_t pixel_data_size;
		TagHandle bitmap_tag_handle;
		std::uint32_t texture_cache_id;
		std::byte *texture;
		std::byte *pixels_buffer;
	};
	static_assert(sizeof(BitmapData) == 48);

	struct Bitmap {
		BitmapType type;
		BitmapFormat encoding_format;
		BitmapUsage usage;
		BitmapFlags flags;
		Fraction detail_fade_factor;
		Fraction sharpen_amount;
		Fraction bump_height;
		BitmapSpriteBudgetSize sprite_budget_size;
		std::uint16_t sprite_budget_count;
		std::uint16_t color_plate_width;
		std::uint16_t color_plate_height;
		TagDataOffset compressed_color_plate_data;
		TagDataOffset processed_pixel_data;
		float blur_filter_size;
		float alpha_bias;
		std::uint16_t mipmap_count;
		BitmapSpriteUsage sprite_usage;
		std::uint16_t sprite_spacing;
		PADDING(2);
		TagBlock<BitmapGroupSequence> bitmap_group_sequence;
		TagBlock<BitmapData> bitmap_data;
	};
	static_assert(sizeof(Bitmap) == 108);

}

#pragma pack(pop)

#endif

