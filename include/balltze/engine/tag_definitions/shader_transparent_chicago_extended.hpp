// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_CHICAGO_EXTENDED_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_CHICAGO_EXTENDED_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "shader_transparent_generic.hpp"
#include "shader_transparent_chicago.hpp"
#include "shader.hpp"

namespace Balltze::Engine::TagDefinitions { 
	struct ShaderTransparentChicagoExtended : public Shader {
		std::uint8_t numeric_counter_limit;
		ShaderTransparentGenericFlags shader_transparent_chicago_extended_flags;
		ShaderFirstMapType first_map_type;
		FramebufferBlendFunction framebuffer_blend_function;
		FramebufferFadeMode framebuffer_fade_mode;
		FunctionOut framebuffer_fade_source;
		PADDING(2);
		float lens_flare_spacing;
		TagDependency lens_flare;
		TagBlock<ShaderTransparentExtraLayer> extra_layers;
		TagBlock<ShaderTransparentChicagoMap> maps_4_stage;
		TagBlock<ShaderTransparentChicagoMap> maps_2_stage;
		ShaderTransparentChicagoExtraFlags extra_flags;
		PADDING(8);
	};
	static_assert(sizeof(ShaderTransparentChicagoExtended) == 120);

}

#pragma pack(pop)

#endif

