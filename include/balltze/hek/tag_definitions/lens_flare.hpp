// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__LENS_FLARE_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__LENS_FLARE_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum LensFlareRadiusScaledBy : std::uint16_t {
		LENS_FLARE_RADIUS_SCALED_BY_NONE = 0,
		LENS_FLARE_RADIUS_SCALED_BY_ROTATION,
		LENS_FLARE_RADIUS_SCALED_BY_ROTATION_AND_STRAFING,
		LENS_FLARE_RADIUS_SCALED_BY_DISTANCE_FROM_CENTER,
	};

	enum LensFlareOcclusionOffsetDirection : std::uint16_t {
		LENS_FLARE_OCCLUSION_OFFSET_DIRECTION_TOWARD_VIEWER = 0,
		LENS_FLARE_OCCLUSION_OFFSET_DIRECTION_MARKER_FORWARD,
		LENS_FLARE_OCCLUSION_OFFSET_DIRECTION_NONE,
	};

	enum LensFlareRotationFunction : std::uint16_t {
		LENS_FLARE_ROTATION_FUNCTION_NONE = 0,
		LENS_FLARE_ROTATION_FUNCTION_ROTATION_A,
		LENS_FLARE_ROTATION_FUNCTION_ROTATION_B,
		LENS_FLARE_ROTATION_FUNCTION_ROTATION_TRANSLATION,
		LENS_FLARE_ROTATION_FUNCTION_TRANSLATION,
	};

	struct LensFlareReflectionFlags {
		std::uint16_t align_rotation_with_screen_center : 1;
		std::uint16_t radius_not_scaled_by_distance : 1;
		std::uint16_t radius_scaled_by_occlusion_factor : 1;
		std::uint16_t occluded_by_solid_objects : 1;
	};
	static_assert(sizeof(LensFlareReflectionFlags) == sizeof(std::uint16_t));

	struct LensFlareReflectionMoreFlags {
		std::uint16_t interpolate_colors_in_hsv : 1;
		std::uint16_t more_colors : 1;
	};
	static_assert(sizeof(LensFlareReflectionMoreFlags) == sizeof(std::uint16_t));

	struct LensFlareFlags {
		std::uint16_t sun : 1;
		std::uint16_t no_occlusion_test : 1;
		std::uint16_t only_render_in_first_person : 1;
		std::uint16_t only_render_in_third_person : 1;
		std::uint16_t fade_in_more_quickly : 1;
		std::uint16_t fade_out_more_quickly : 1;
		std::uint16_t scale_by_marker : 1;
	};
	static_assert(sizeof(LensFlareFlags) == sizeof(std::uint16_t));

	struct LensFlareReflection {
		Memory::BigEndian<LensFlareReflectionFlags> flags;
		PADDING(2);
		Index bitmap_index;
		PADDING(2);
		PADDING(20);
		Memory::BigEndian<float> position;
		Memory::BigEndian<float> rotation_offset;
		PADDING(4);
		Memory::BigEndian<float> radius[2];
		Memory::BigEndian<LensFlareRadiusScaledBy> radius_scaled_by;
		PADDING(2);
		Fraction brightness[2];
		Memory::BigEndian<LensFlareRadiusScaledBy> brightness_scaled_by;
		PADDING(2);
		ColorARGB tint_color;
		ColorARGB color_lower_bound;
		ColorARGB color_upper_bound;
		Memory::BigEndian<LensFlareReflectionMoreFlags> more_flags;
		Memory::BigEndian<WaveFunction> animation_function;
		Memory::BigEndian<float> animation_period;
		Memory::BigEndian<float> animation_phase;
		PADDING(4);
	};
	static_assert(sizeof(LensFlareReflection) == 128);

	struct LensFlare {
		Angle falloff_angle;
		Angle cutoff_angle;
		Memory::BigEndian<float> cos_falloff_angle;
		Memory::BigEndian<float> cos_cutoff_angle;
		Memory::BigEndian<float> occlusion_radius;
		Memory::BigEndian<LensFlareOcclusionOffsetDirection> occlusion_offset_direction;
		PADDING(2);
		Memory::BigEndian<float> near_fade_distance;
		Memory::BigEndian<float> far_fade_distance;
		TagDependency bitmap;
		Memory::BigEndian<LensFlareFlags> flags;
		PADDING(2);
		PADDING(76);
		Memory::BigEndian<LensFlareRotationFunction> rotation_function;
		PADDING(2);
		Angle rotation_function_scale;
		PADDING(24);
		Memory::BigEndian<float> horizontal_scale;
		Memory::BigEndian<float> vertical_scale;
		PADDING(28);
		TagReflexive<LensFlareReflection> reflections;
		PADDING(32);
	};
	static_assert(sizeof(LensFlare) == 240);

}

#endif

