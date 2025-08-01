// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__PROJECTILE_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__PROJECTILE_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "object.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum ProjectileResponse : std::uint16_t {
		PROJECTILE_RESPONSE_DISAPPEAR = 0,
		PROJECTILE_RESPONSE_DETONATE,
		PROJECTILE_RESPONSE_REFLECT,
		PROJECTILE_RESPONSE_OVERPENETRATE,
		PROJECTILE_RESPONSE_ATTACH,
	};

	enum ProjectileScaleEffectsBy : std::uint16_t {
		PROJECTILE_SCALE_EFFECTS_BY_DAMAGE = 0,
		PROJECTILE_SCALE_EFFECTS_BY_ANGLE,
	};

	enum ProjectileDetonationTimerStarts : std::uint16_t {
		PROJECTILE_DETONATION_TIMER_STARTS_IMMEDIATELY = 0,
		PROJECTILE_DETONATION_TIMER_STARTS_AFTER_FIRST_BOUNCE,
		PROJECTILE_DETONATION_TIMER_STARTS_WHEN_AT_REST,
	};

	enum ProjectileFunctionIn : std::uint16_t {
		PROJECTILE_FUNCTION_IN_NONE = 0,
		PROJECTILE_FUNCTION_IN_RANGE_REMAINING,
		PROJECTILE_FUNCTION_IN_TIME_REMAINING,
		PROJECTILE_FUNCTION_IN_TRACER,
	};

	struct ProjectileFlags {
		std::uint32_t oriented_along_velocity : 1;
		std::uint32_t ai_must_use_ballistic_aiming : 1;
		std::uint32_t detonation_max_time_if_attached : 1;
		std::uint32_t has_super_combining_explosion : 1;
		std::uint32_t combine_initial_velocity_with_parent_velocity : 1;
		std::uint32_t random_attached_detonation_time : 1;
		std::uint32_t minimum_unattached_detonation_time : 1;
	};
	static_assert(sizeof(ProjectileFlags) == sizeof(std::uint32_t));

	struct ProjectileMaterialResponseFlags {
		std::uint16_t cannot_be_overpenetrated : 1;
	};
	static_assert(sizeof(ProjectileMaterialResponseFlags) == sizeof(std::uint16_t));

	struct ProjectileMaterialResponsePotentialFlags {
		std::uint16_t only_against_units : 1;
		std::uint16_t never_against_units : 1;
	};
	static_assert(sizeof(ProjectileMaterialResponsePotentialFlags) == sizeof(std::uint16_t));

	struct ProjectileMaterialResponse {
		ProjectileMaterialResponseFlags flags;
		ProjectileResponse default_response;
		TagDependency default_effect;
		PADDING(16);
		ProjectileResponse potential_response;
		ProjectileMaterialResponsePotentialFlags potential_flags;
		Fraction potential_skip_fraction;
		Angle potential_between[2];
		float potential_and[2];
		TagDependency potential_effect;
		PADDING(16);
		ProjectileScaleEffectsBy scale_effects_by;
		PADDING(2);
		Angle angular_noise;
		float velocity_noise;
		TagDependency detonation_effect;
		PADDING(24);
		float initial_friction;
		float maximum_distance;
		float parallel_friction;
		float perpendicular_friction;
	};
	static_assert(sizeof(ProjectileMaterialResponse) == 160);

	struct Projectile : public Object {
		ProjectileFlags projectile_flags;
		ProjectileDetonationTimerStarts detonation_timer_starts;
		ObjectNoise impact_noise;
		ProjectileFunctionIn projectile_a_in;
		ProjectileFunctionIn projectile_b_in;
		ProjectileFunctionIn projectile_c_in;
		ProjectileFunctionIn projectile_d_in;
		TagDependency super_detonation;
		float ai_perception_radius;
		float collision_radius;
		float arming_time;
		float danger_radius;
		TagDependency effect;
		float timer[2];
		float minimum_velocity;
		float maximum_range;
		float air_gravity_scale;
		float air_damage_range[2];
		float water_gravity_scale;
		float water_damage_range[2];
		float initial_velocity;
		float final_velocity;
		Angle guided_angular_velocity;
		ObjectNoise detonation_noise;
		PADDING(2);
		TagDependency detonation_started;
		TagDependency flyby_sound;
		TagDependency attached_detonation_damage;
		TagDependency impact_damage;
		PADDING(12);
		TagBlock<ProjectileMaterialResponse> projectile_material_response;
	};
	static_assert(sizeof(Projectile) == 588);

}

#pragma pack(pop)

#endif

