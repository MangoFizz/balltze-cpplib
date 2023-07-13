// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_HPP

#include "../../memory.hpp"
#include "../data_types.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::Engine::TagDefinitions { 
	enum ShaderDetailLevel : std::uint16_t {
		SHADER_DETAIL_LEVEL_HIGH = 0,
		SHADER_DETAIL_LEVEL_MEDIUM,
		SHADER_DETAIL_LEVEL_LOW,
		SHADER_DETAIL_LEVEL_TURD,
	};

	enum ShaderColorFunctionType : std::uint16_t {
		SHADER_COLOR_FUNCTION_TYPE_CURRENT = 0,
		SHADER_COLOR_FUNCTION_TYPE_NEXT_MAP,
		SHADER_COLOR_FUNCTION_TYPE_MULTIPLY,
		SHADER_COLOR_FUNCTION_TYPE_DOUBLE_MULTIPLY,
		SHADER_COLOR_FUNCTION_TYPE_ADD,
		SHADER_COLOR_FUNCTION_TYPE_ADD_SIGNED_CURRENT,
		SHADER_COLOR_FUNCTION_TYPE_ADD_SIGNED_NEXT_MAP,
		SHADER_COLOR_FUNCTION_TYPE_SUBTRACT_CURRENT,
		SHADER_COLOR_FUNCTION_TYPE_SUBTRACT_NEXT_MAP,
		SHADER_COLOR_FUNCTION_TYPE_BLEND_CURRENT_ALPHA,
		SHADER_COLOR_FUNCTION_TYPE_BLEND_CURRENT_ALPHA_INVERSE,
		SHADER_COLOR_FUNCTION_TYPE_BLEND_NEXT_MAP_ALPHA,
		SHADER_COLOR_FUNCTION_TYPE_BLEND_NEXT_MAP_ALPHA_INVERSE,
	};

	enum ShaderFirstMapType : std::uint16_t {
		SHADER_FIRST_MAP_TYPE_2D_MAP = 0,
		SHADER_FIRST_MAP_TYPE_FIRST_MAP_IS_REFLECTION_CUBE_MAP,
		SHADER_FIRST_MAP_TYPE_FIRST_MAP_IS_OBJECT_CENTERED_CUBE_MAP,
		SHADER_FIRST_MAP_TYPE_FIRST_MAP_IS_VIEWER_CENTERED_CUBE_MAP,
	};

	enum ShaderType : std::uint16_t {
		SHADER_TYPE_UNUSED = 0,
		SHADER_TYPE_UNUSED1,
		SHADER_TYPE_UNUSED2,
		SHADER_TYPE_SHADER_ENVIRONMENT,
		SHADER_TYPE_SHADER_MODEL,
		SHADER_TYPE_SHADER_TRANSPARENT_GENERIC,
		SHADER_TYPE_SHADER_TRANSPARENT_CHICAGO,
		SHADER_TYPE_SHADER_TRANSPARENT_CHICAGO_EXTENDED,
		SHADER_TYPE_SHADER_TRANSPARENT_WATER,
		SHADER_TYPE_SHADER_TRANSPARENT_GLASS,
		SHADER_TYPE_SHADER_TRANSPARENT_METER,
		SHADER_TYPE_SHADER_TRANSPARENT_PLASMA,
	};

	enum ShaderDetailFunction : std::uint16_t {
		SHADER_DETAIL_FUNCTION_DOUBLE_BIASED_MULTIPLY = 0,
		SHADER_DETAIL_FUNCTION_MULTIPLY,
		SHADER_DETAIL_FUNCTION_DOUBLE_BIASED_ADD,
	};

	struct ShaderFlags {
		std::uint16_t simple_parameterization : 1;
		std::uint16_t ignore_normals : 1;
		std::uint16_t transparent_lit : 1;
	};
	static_assert(sizeof(ShaderFlags) == sizeof(std::uint16_t));

	struct ShaderPhysicsFlags {
		std::uint16_t unused : 1;
	};
	static_assert(sizeof(ShaderPhysicsFlags) == sizeof(std::uint16_t));

	struct ShaderTransparentExtraLayer {
		TagDependency shader;
	};
	static_assert(sizeof(ShaderTransparentExtraLayer) == 16);

	struct Shader {
		ShaderFlags shader_flags;
		ShaderDetailLevel detail_level;
		float power;
		ColorRGB color_of_emitted_light;
		ColorRGB tint_color;
		ShaderPhysicsFlags physics_flags;
		MaterialType material_type;
		std::uint16_t shader_type;
		PADDING(2);
	};
	static_assert(sizeof(Shader) == 40);

}

#endif

