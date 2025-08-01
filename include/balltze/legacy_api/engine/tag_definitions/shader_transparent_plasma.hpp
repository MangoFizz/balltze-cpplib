// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_PLASMA_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_PLASMA_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "shader.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct ShaderTransparentPlasma : public Shader {
		PADDING(2);
		PADDING(2);
		FunctionOut intensity_source;
		PADDING(2);
		float intensity_exponent;
		FunctionOut offset_source;
		PADDING(2);
		float offset_amount;
		float offset_exponent;
		PADDING(32);
		Fraction perpendicular_brightness;
		ColorRGB perpendicular_tint_color;
		Fraction parallel_brightness;
		ColorRGB parallel_tint_color;
		FunctionNameNullable tint_color_source;
		PADDING(2);
		PADDING(32);
		PADDING(2);
		PADDING(2);
		PADDING(16);
		PADDING(4);
		PADDING(4);
		float primary_animation_period;
		Vector3D primary_animation_direction;
		float primary_noise_map_scale;
		TagDependency primary_noise_map;
		PADDING(32);
		PADDING(4);
		float secondary_animation_period;
		Vector3D secondary_animation_direction;
		float secondary_noise_map_scale;
		TagDependency secondary_noise_map;
		PADDING(32);
	};
	static_assert(sizeof(ShaderTransparentPlasma) == 332);

}

#pragma pack(pop)

#endif

