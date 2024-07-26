// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__GLOW_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__GLOW_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::Engine::TagDefinitions { 
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
		std::int16_t number_of_particles;
		GlowBoundaryEffect boundary_effect;
		GlowNormalParticleDistribution normal_particle_distribution;
		GlowTrailingParticleDistribution trailing_particle_distribution;
		GlowFlags glow_flags;
		PADDING(28);
		PADDING(2);
		PADDING(2);
		PADDING(4);
		FunctionOut attachment_0;
		PADDING(2);
		float particle_rotational_velocity;
		float particle_rot_vel_mul_low;
		float particle_rot_vel_mul_high;
		FunctionOut attachment_1;
		PADDING(2);
		float effect_rotational_velocity;
		float effect_rot_vel_mul_low;
		float effect_rot_vel_mul_high;
		FunctionOut attachment_2;
		PADDING(2);
		float effect_translational_velocity;
		float effect_trans_vel_mul_low;
		float effect_trans_vel_mul_high;
		FunctionOut attachment_3;
		PADDING(2);
		float min_distance_particle_to_object;
		float max_distance_particle_to_object;
		float distance_to_object_mul_low;
		float distance_to_object_mul_high;
		PADDING(8);
		FunctionOut attachment_4;
		PADDING(2);
		float particle_size_bounds[2];
		float size_attachment_multiplier[2];
		FunctionOut attachment_5;
		PADDING(2);
		ColorARGB color_bound_0;
		ColorARGB color_bound_1;
		ColorARGB scale_color_0;
		ColorARGB scale_color_1;
		float color_rate_of_change;
		float fading_percentage_of_glow;
		float particle_generation_freq;
		float lifetime_of_trailing_particles;
		float velocity_of_trailing_particles;
		float trailing_particle_minimum_t;
		float trailing_particle_maximum_t;
		PADDING(52);
		TagDependency texture;
	};
	static_assert(sizeof(Glow) == 340);

}

#pragma pack(pop)

#endif

