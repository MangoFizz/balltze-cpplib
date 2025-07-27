// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_GENERIC_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SHADER_TRANSPARENT_GENERIC_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "shader.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum ShaderTransparentGenericStageInputColor : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_ZERO = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_ONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_ONE_HALF,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_NEGATIVE_ONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_NEGATIVE_ONE_HALF,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_COLOR_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_COLOR_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_COLOR_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_COLOR_3,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_VERTEX_COLOR_0_DIFFUSE_LIGHT,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_VERTEX_COLOR_1_FADE_PERPENDICULAR,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_SCRATCH_COLOR_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_SCRATCH_COLOR_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_CONSTANT_COLOR_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_CONSTANT_COLOR_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_ALPHA_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_MAP_ALPHA_3,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_VERTEX_ALPHA_0_FADE_NONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_VERTEX_ALPHA_1_FADE_PERPENDICULAR,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_SCRATCH_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_SCRATCH_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_CONSTANT_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_COLOR_CONSTANT_ALPHA_1,
	};

	enum ShaderTransparentGenericStageInputAlpha : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_ZERO = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_ONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_ONE_HALF,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_NEGATIVE_ONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_NEGATIVE_ONE_HALF,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_ALPHA_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_ALPHA_3,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_VERTEX_ALPHA_0_FADE_NONE,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_VERTEX_ALPHA_1_FADE_PERPENDICULAR,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_SCRATCH_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_SCRATCH_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_CONSTANT_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_CONSTANT_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_BLUE_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_BLUE_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_BLUE_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_MAP_BLUE_3,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_VERTEX_BLUE_0_BLUE_LIGHT,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_VERTEX_BLUE_1_FADE_PARALLEL,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_SCRATCH_BLUE_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_SCRATCH_BLUE_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_CONSTANT_BLUE_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_ALPHA_CONSTANT_BLUE_1,
	};

	enum ShaderTransparentGenericStageInputMappingColor : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_CLAMP_X = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_1_CLAMP_X,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_1_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_CLAMP_X_1_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_1_2_CLAMP_X,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_X,
		SHADER_TRANSPARENT_GENERIC_STAGE_INPUT_MAPPING_COLOR_X_1,
	};

	enum ShaderTransparentGenericStageOutputFunction : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_FUNCTION_MULTIPLY = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_FUNCTION_DOT_PRODUCT,
	};

	enum ShaderTransparentGenericStageOutputMapping : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_IDENTITY = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_SCALE_BY_1_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_SCALE_BY_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_SCALE_BY_4,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_BIAS_BY_1_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_MAPPING_COLOR_EXPAND_NORMAL,
	};

	enum ShaderTransparentGenericStageOutput : std::uint16_t {
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_DISCARD = 0,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_SCRATCH_ALPHA_0_FINAL_ALPHA,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_SCRATCH_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_VERTEX_ALPHA_0_FOG,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_VERTEX_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_MAP_ALPHA_0,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_MAP_ALPHA_1,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_MAP_ALPHA_2,
		SHADER_TRANSPARENT_GENERIC_STAGE_OUTPUT_ALPHA_MAP_ALPHA_3,
	};

	struct ShaderTransparentGenericMapFlag {
		std::uint16_t unfiltered : 1;
		std::uint16_t u_clamped : 1;
		std::uint16_t v_clamped : 1;
	};
	static_assert(sizeof(ShaderTransparentGenericMapFlag) == sizeof(std::uint16_t));

	struct ShaderTransparentGenericStageFlags {
		std::uint16_t color_mux : 1;
		std::uint16_t alpha_mux : 1;
		std::uint16_t a_out_controls_color0_animation : 1;
	};
	static_assert(sizeof(ShaderTransparentGenericStageFlags) == sizeof(std::uint16_t));

	struct ShaderTransparentGenericFlags {
		std::uint8_t alpha_tested : 1;
		std::uint8_t decal : 1;
		std::uint8_t two_sided : 1;
		std::uint8_t first_map_is_in_screenspace : 1;
		std::uint8_t draw_before_water : 1;
		std::uint8_t ignore_effect : 1;
		std::uint8_t scale_first_map_with_distance : 1;
		std::uint8_t numeric : 1;
	};
	static_assert(sizeof(ShaderTransparentGenericFlags) == sizeof(std::uint8_t));

	struct ShaderTransparentGenericMap {
		ShaderTransparentGenericMapFlag flags;
		PADDING(2);
		float map_u_scale;
		float map_v_scale;
		float map_u_offset;
		float map_v_offset;
		float map_rotation;
		Fraction mapmap_bias;
		TagDependency map;
		FunctionOut u_animation_source;
		WaveFunction u_animation_function;
		float u_animation_period;
		float u_animation_phase;
		float u_animation_scale;
		FunctionOut v_animation_source;
		WaveFunction v_animation_function;
		float v_animation_period;
		float v_animation_phase;
		float v_animation_scale;
		FunctionOut rotation_animation_source;
		WaveFunction rotation_animation_function;
		float rotation_animation_period;
		float rotation_animation_phase;
		float rotation_animation_scale;
		Point2D rotation_animation_center;
	};
	static_assert(sizeof(ShaderTransparentGenericMap) == 100);

	struct ShaderTransparentGenericStage {
		ShaderTransparentGenericStageFlags flags;
		PADDING(2);
		FunctionNameNullable color0_source;
		WaveFunction color0_animation_function;
		float color0_animation_period;
		ColorARGB color0_animation_lower_bound;
		ColorARGB color0_animation_upper_bound;
		ColorARGB color1;
		ShaderTransparentGenericStageInputColor input_a;
		ShaderTransparentGenericStageInputMappingColor input_a_mapping;
		ShaderTransparentGenericStageInputColor input_b;
		ShaderTransparentGenericStageInputMappingColor input_b_mapping;
		ShaderTransparentGenericStageInputColor input_c;
		ShaderTransparentGenericStageInputMappingColor input_c_mapping;
		ShaderTransparentGenericStageInputColor input_d;
		ShaderTransparentGenericStageInputMappingColor input_d_mapping;
		ShaderTransparentGenericStageOutput output_ab;
		ShaderTransparentGenericStageOutputFunction output_ab_function;
		ShaderTransparentGenericStageOutput output_bc;
		ShaderTransparentGenericStageOutputFunction output_cd_function;
		ShaderTransparentGenericStageOutput output_ab_cd_mux_sum;
		ShaderTransparentGenericStageOutputMapping output_mapping_color;
		ShaderTransparentGenericStageInputAlpha input_a_alpha;
		ShaderTransparentGenericStageInputMappingColor input_a_mapping_alpha;
		ShaderTransparentGenericStageInputAlpha input_b_alpha;
		ShaderTransparentGenericStageInputMappingColor input_b_mapping_alpha;
		ShaderTransparentGenericStageInputAlpha input_c_alpha;
		ShaderTransparentGenericStageInputMappingColor input_c_mapping_alpha;
		ShaderTransparentGenericStageInputAlpha input_d_alpha;
		ShaderTransparentGenericStageInputMappingColor input_d_mapping_alpha;
		ShaderTransparentGenericStageOutput output_ab_alpha;
		ShaderTransparentGenericStageOutput output_cd_alpha;
		ShaderTransparentGenericStageOutput output_ab_cd_mux_sum_alpha;
		ShaderTransparentGenericStageOutputMapping output_mapping_alpha;
	};
	static_assert(sizeof(ShaderTransparentGenericStage) == 112);

	struct ShaderTransparentGeneric : public Shader {
		std::uint8_t numeric_counter_limit;
		ShaderTransparentGenericFlags shader_transparent_generic_flags;
		ShaderFirstMapType first_map_type;
		FramebufferBlendFunction framebuffer_blend_function;
		FramebufferFadeMode framebuffer_fade_mode;
		FunctionOut framebuffer_fade_source;
		PADDING(2);
		float lens_flare_spacing;
		TagDependency lens_flare;
		TagBlock<ShaderTransparentExtraLayer> extra_layers;
		TagBlock<ShaderTransparentGenericMap> maps;
		TagBlock<ShaderTransparentGenericStage> stages;
	};
	static_assert(sizeof(ShaderTransparentGeneric) == 108);

}

#pragma pack(pop)

#endif

