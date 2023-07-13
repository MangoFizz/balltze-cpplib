// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__SHADER_TRANSPARENT_GENERIC_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__SHADER_TRANSPARENT_GENERIC_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"
#include "shader.hpp"

namespace Balltze::HEK::TagDefinitions { 
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
		Memory::BigEndian<ShaderTransparentGenericMapFlag> flags;
		PADDING(2);
		Memory::BigEndian<float> map_u_scale;
		Memory::BigEndian<float> map_v_scale;
		Memory::BigEndian<float> map_u_offset;
		Memory::BigEndian<float> map_v_offset;
		Memory::BigEndian<float> map_rotation;
		Fraction mapmap_bias;
		TagDependency map;
		Memory::BigEndian<FunctionOut> u_animation_source;
		Memory::BigEndian<WaveFunction> u_animation_function;
		Memory::BigEndian<float> u_animation_period;
		Memory::BigEndian<float> u_animation_phase;
		Memory::BigEndian<float> u_animation_scale;
		Memory::BigEndian<FunctionOut> v_animation_source;
		Memory::BigEndian<WaveFunction> v_animation_function;
		Memory::BigEndian<float> v_animation_period;
		Memory::BigEndian<float> v_animation_phase;
		Memory::BigEndian<float> v_animation_scale;
		Memory::BigEndian<FunctionOut> rotation_animation_source;
		Memory::BigEndian<WaveFunction> rotation_animation_function;
		Memory::BigEndian<float> rotation_animation_period;
		Memory::BigEndian<float> rotation_animation_phase;
		Memory::BigEndian<float> rotation_animation_scale;
		Point2D rotation_animation_center;
	};
	static_assert(sizeof(ShaderTransparentGenericMap) == 100);

	struct ShaderTransparentGenericStage {
		Memory::BigEndian<ShaderTransparentGenericStageFlags> flags;
		PADDING(2);
		Memory::BigEndian<FunctionNameNullable> color0_source;
		Memory::BigEndian<WaveFunction> color0_animation_function;
		Memory::BigEndian<float> color0_animation_period;
		ColorARGB color0_animation_lower_bound;
		ColorARGB color0_animation_upper_bound;
		ColorARGB color1;
		Memory::BigEndian<ShaderTransparentGenericStageInputColor> input_a;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_a_mapping;
		Memory::BigEndian<ShaderTransparentGenericStageInputColor> input_b;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_b_mapping;
		Memory::BigEndian<ShaderTransparentGenericStageInputColor> input_c;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_c_mapping;
		Memory::BigEndian<ShaderTransparentGenericStageInputColor> input_d;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_d_mapping;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_ab;
		Memory::BigEndian<ShaderTransparentGenericStageOutputFunction> output_ab_function;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_bc;
		Memory::BigEndian<ShaderTransparentGenericStageOutputFunction> output_cd_function;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_ab_cd_mux_sum;
		Memory::BigEndian<ShaderTransparentGenericStageOutputMapping> output_mapping_color;
		Memory::BigEndian<ShaderTransparentGenericStageInputAlpha> input_a_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_a_mapping_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputAlpha> input_b_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_b_mapping_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputAlpha> input_c_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_c_mapping_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputAlpha> input_d_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageInputMappingColor> input_d_mapping_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_ab_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_cd_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageOutput> output_ab_cd_mux_sum_alpha;
		Memory::BigEndian<ShaderTransparentGenericStageOutputMapping> output_mapping_alpha;
	};
	static_assert(sizeof(ShaderTransparentGenericStage) == 112);

	struct ShaderTransparentGeneric : public Shader {
		Memory::BigEndian<std::uint8_t> numeric_counter_limit;
		Memory::BigEndian<ShaderTransparentGenericFlags> shader_transparent_generic_flags;
		Memory::BigEndian<ShaderFirstMapType> first_map_type;
		Memory::BigEndian<FramebufferBlendFunction> framebuffer_blend_function;
		Memory::BigEndian<FramebufferFadeMode> framebuffer_fade_mode;
		Memory::BigEndian<FunctionOut> framebuffer_fade_source;
		PADDING(2);
		Memory::BigEndian<float> lens_flare_spacing;
		TagDependency lens_flare;
		TagReflexive<ShaderTransparentExtraLayer> extra_layers;
		TagReflexive<ShaderTransparentGenericMap> maps;
		TagReflexive<ShaderTransparentGenericStage> stages;
	};
	static_assert(sizeof(ShaderTransparentGeneric) == 108);

}

#endif

