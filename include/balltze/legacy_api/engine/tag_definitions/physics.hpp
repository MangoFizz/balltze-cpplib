// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__PHYSICS_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__PHYSICS_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum PhysicsFrictionType : std::uint16_t {
		PHYSICS_FRICTION_TYPE_POINT = 0,
		PHYSICS_FRICTION_TYPE_FORWARD,
		PHYSICS_FRICTION_TYPE_LEFT,
		PHYSICS_FRICTION_TYPE_UP,
	};

	struct PhysicsPoweredMassPointFlags {
		std::uint32_t ground_friction : 1;
		std::uint32_t water_friction : 1;
		std::uint32_t air_friction : 1;
		std::uint32_t water_lift : 1;
		std::uint32_t air_lift : 1;
		std::uint32_t thrust : 1;
		std::uint32_t antigrav : 1;
	};
	static_assert(sizeof(PhysicsPoweredMassPointFlags) == sizeof(std::uint32_t));

	struct PhysicsMassPointFlags {
		std::uint32_t metallic : 1;
	};
	static_assert(sizeof(PhysicsMassPointFlags) == sizeof(std::uint32_t));

	struct PhysicsInertialMatrix {
		Matrix matrix;
	};
	static_assert(sizeof(PhysicsInertialMatrix) == 36);

	struct PhysicsPoweredMassPoint {
		TagString name;
		PhysicsPoweredMassPointFlags flags;
		float antigrav_strength;
		float antigrav_offset;
		float antigrav_height;
		float antigrav_damp_fraction;
		float antigrav_normal_k1;
		float antigrav_normal_k0;
		PADDING(68);
	};
	static_assert(sizeof(PhysicsPoweredMassPoint) == 128);

	struct PhysicsMassPoint {
		TagString name;
		std::int16_t powered_mass_point;
		std::int16_t model_node;
		PhysicsMassPointFlags flags;
		float relative_mass;
		float mass;
		float relative_density;
		float density;
		Point3D position;
		Vector3D forward;
		Vector3D up;
		PhysicsFrictionType friction_type;
		PADDING(2);
		float friction_parallel_scale;
		float friction_perpendicular_scale;
		float radius;
		PADDING(20);
	};
	static_assert(sizeof(PhysicsMassPoint) == 128);

	struct Physics {
		float radius;
		Fraction moment_scale;
		float mass;
		Point3D center_of_mass;
		float density;
		float gravity_scale;
		float ground_friction;
		float ground_depth;
		Fraction ground_damp_fraction;
		float ground_normal_k1;
		float ground_normal_k0;
		PADDING(4);
		float water_friction;
		float water_depth;
		float water_density;
		PADDING(4);
		Fraction air_friction;
		PADDING(4);
		float xx_moment;
		float yy_moment;
		float zz_moment;
		TagBlock<PhysicsInertialMatrix> inertial_matrix_and_inverse;
		TagBlock<PhysicsPoweredMassPoint> powered_mass_points;
		TagBlock<PhysicsMassPoint> mass_points;
	};
	static_assert(sizeof(Physics) == 128);

}

#pragma pack(pop)

#endif

