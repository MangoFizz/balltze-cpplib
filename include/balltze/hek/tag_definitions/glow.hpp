// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__GLOW_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__GLOW_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum GlowBoundaryEffect : std::uint16_t {
		GLOW_BOUNDARY_EFFECT_BOUNCE = 0,
		GLOW_BOUNDARY_EFFECT_WRAP,
	};

	enum GlowNormalParticleDistribution : std::uint16_t {
		GLOW_NORMAL_PARTICLE_DISTRIBUTION_DISTRIBUTED_RANDOMLY = 0,
		GLOW_NORMAL_PARTICLE_DISTRIBUTION_DISTRIBUTED_UNIFORMLY,
	};

	enum GlowTrailingParticleDistribution : std::uint16_t {
		GLOW_TRAILING_PARTICLE_DISTRIBUTION_EMIT_VERTICALLY = 0,
		GLOW_TRAILING_PARTICLE_DISTRIBUTION_EMIT_NORMAL_UP,
		GLOW_TRAILING_PARTICLE_DISTRIBUTION_EMIT_RANDOMLY,
	};

	struct GlowFlags {
		std::uint32_t modify_particle_color_in_range : 1;
		std::uint32_t particles_move_backwards : 1;
		std::uint32_t partices_move_in_both_directions : 1;
		std::uint32_t trailing_particles_fade_over_time : 1;
		std::uint32_t trailing_particles_shrink_over_time : 1;
		std::uint32_t trailing_particles_slow_over_time : 1;
	};
	static_assert(sizeof(GlowFlags) == sizeof(std::uint32_t));

	struct Glow {
		TagString attachment_marker;
		Memory::BigEndian<std::int16_t> number_of_particles;
		Memory::BigEndian<GlowBoundaryEffect> boundary_effect;
		Memory::BigEndian<GlowNormalParticleDistribution> normal_particle_distribution;
		Memory::BigEndian<GlowTrailingParticleDistribution> trailing_particle_distribution;
		Memory::BigEndian<GlowFlags> glow_flags;
		PADDING(28);
		PADDING(2);
		PADDING(2);
		PADDING(4);
		Memory::BigEndian<FunctionOut> attachment_0;
		PADDING(2);
		Memory::BigEndian<float> particle_rotational_velocity;
		Memory::BigEndian<float> particle_rot_vel_mul_low;
		Memory::BigEndian<float> particle_rot_vel_mul_high;
		Memory::BigEndian<FunctionOut> attachment_1;
		PADDING(2);
		Memory::BigEndian<float> effect_rotational_velocity;
		Memory::BigEndian<float> effect_rot_vel_mul_low;
		Memory::BigEndian<float> effect_rot_vel_mul_high;
		Memory::BigEndian<FunctionOut> attachment_2;
		PADDING(2);
		Memory::BigEndian<float> effect_translational_velocity;
		Memory::BigEndian<float> effect_trans_vel_mul_low;
		Memory::BigEndian<float> effect_trans_vel_mul_high;
		Memory::BigEndian<FunctionOut> attachment_3;
		PADDING(2);
		Memory::BigEndian<float> min_distance_particle_to_object;
		Memory::BigEndian<float> max_distance_particle_to_object;
		Memory::BigEndian<float> distance_to_object_mul_low;
		Memory::BigEndian<float> distance_to_object_mul_high;
		PADDING(8);
		Memory::BigEndian<FunctionOut> attachment_4;
		PADDING(2);
		Memory::BigEndian<float> particle_size_bounds[2];
		Memory::BigEndian<float> size_attachment_multiplier[2];
		Memory::BigEndian<FunctionOut> attachment_5;
		PADDING(2);
		ColorARGB color_bound_0;
		ColorARGB color_bound_1;
		ColorARGB scale_color_0;
		ColorARGB scale_color_1;
		Memory::BigEndian<float> color_rate_of_change;
		Memory::BigEndian<float> fading_percentage_of_glow;
		Memory::BigEndian<float> particle_generation_freq;
		Memory::BigEndian<float> lifetime_of_trailing_particles;
		Memory::BigEndian<float> velocity_of_trailing_particles;
		Memory::BigEndian<float> trailing_particle_minimum_t;
		Memory::BigEndian<float> trailing_particle_maximum_t;
		PADDING(52);
		TagDependency texture;
	};
	static_assert(sizeof(Glow) == 340);

}

#endif

