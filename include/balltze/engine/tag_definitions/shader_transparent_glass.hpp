// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_GLASS_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_GLASS_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "shader.hpp"

namespace Balltze::Engine::TagDefinitions { 
	enum ShaderTransparentGlassReflectionType : std::uint16_t {
		SHADER_TRANSPARENT_GLASS_REFLECTION_TYPE_BUMPED_CUBE_MAP = 0,
		SHADER_TRANSPARENT_GLASS_REFLECTION_TYPE_FLAT_CUBE_MAP,
		SHADER_TRANSPARENT_GLASS_REFLECTION_TYPE_DYNAMIC_MIRROR,
	};

	struct ShaderTransparentGlassFlags {
		std::uint16_t alpha_tested : 1;
		std::uint16_t decal : 1;
		std::uint16_t two_sided : 1;
		std::uint16_t bump_map_is_specular_mask : 1;
	};
	static_assert(sizeof(ShaderTransparentGlassFlags) == sizeof(std::uint16_t));

	struct ShaderTransparentGlass : public Shader {
		ShaderTransparentGlassFlags shader_transparent_glass_flags;
		PADDING(2);
		PADDING(40);
		ColorRGB background_tint_color;
		float background_tint_map_scale;
		TagDependency background_tint_map;
		PADDING(20);
		PADDING(2);
		ShaderTransparentGlassReflectionType reflection_type;
		Fraction perpendicular_brightness;
		ColorRGB perpendicular_tint_color;
		Fraction parallel_brightness;
		ColorRGB parallel_tint_color;
		TagDependency reflection_map;
		float bump_map_scale;
		TagDependency bump_map;
		PADDING(128);
		PADDING(4);
		float diffuse_map_scale;
		TagDependency diffuse_map;
		float diffuse_detail_map_scale;
		TagDependency diffuse_detail_map;
		PADDING(28);
		PADDING(4);
		float specular_map_scale;
		TagDependency specular_map;
		float specular_detail_map_scale;
		TagDependency specular_detail_map;
		PADDING(28);
	};
	static_assert(sizeof(ShaderTransparentGlass) == 480);

}

#pragma pack(pop)

#endif

