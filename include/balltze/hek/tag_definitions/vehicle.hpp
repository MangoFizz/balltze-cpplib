// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__VEHICLE_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__VEHICLE_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"
#include "unit.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum VehicleType : std::uint16_t {
		VEHICLE_TYPE_HUMAN_TANK = 0,
		VEHICLE_TYPE_HUMAN_JEEP,
		VEHICLE_TYPE_HUMAN_BOAT,
		VEHICLE_TYPE_HUMAN_PLANE,
		VEHICLE_TYPE_ALIEN_SCOUT,
		VEHICLE_TYPE_ALIEN_FIGHTER,
		VEHICLE_TYPE_TURRET,
	};

	enum VehicleFunctionIn : std::uint16_t {
		VEHICLE_FUNCTION_IN_NONE = 0,
		VEHICLE_FUNCTION_IN_SPEED_ABSOLUTE,
		VEHICLE_FUNCTION_IN_SPEED_FORWARD,
		VEHICLE_FUNCTION_IN_SPEED_BACKWARD,
		VEHICLE_FUNCTION_IN_SLIDE_ABSOLUTE,
		VEHICLE_FUNCTION_IN_SLIDE_LEFT,
		VEHICLE_FUNCTION_IN_SLIDE_RIGHT,
		VEHICLE_FUNCTION_IN_SPEED_SLIDE_MAXIMUM,
		VEHICLE_FUNCTION_IN_TURN_ABSOLUTE,
		VEHICLE_FUNCTION_IN_TURN_LEFT,
		VEHICLE_FUNCTION_IN_TURN_RIGHT,
		VEHICLE_FUNCTION_IN_CROUCH,
		VEHICLE_FUNCTION_IN_JUMP,
		VEHICLE_FUNCTION_IN_WALK,
		VEHICLE_FUNCTION_IN_VELOCITY_AIR,
		VEHICLE_FUNCTION_IN_VELOCITY_WATER,
		VEHICLE_FUNCTION_IN_VELOCITY_GROUND,
		VEHICLE_FUNCTION_IN_VELOCITY_FORWARD,
		VEHICLE_FUNCTION_IN_VELOCITY_LEFT,
		VEHICLE_FUNCTION_IN_VELOCITY_UP,
		VEHICLE_FUNCTION_IN_LEFT_TREAD_POSITION,
		VEHICLE_FUNCTION_IN_RIGHT_TREAD_POSITION,
		VEHICLE_FUNCTION_IN_LEFT_TREAD_VELOCITY,
		VEHICLE_FUNCTION_IN_RIGHT_TREAD_VELOCITY,
		VEHICLE_FUNCTION_IN_FRONT_LEFT_TIRE_POSITION,
		VEHICLE_FUNCTION_IN_FRONT_RIGHT_TIRE_POSITION,
		VEHICLE_FUNCTION_IN_BACK_LEFT_TIRE_POSITION,
		VEHICLE_FUNCTION_IN_BACK_RIGHT_TIRE_POSITION,
		VEHICLE_FUNCTION_IN_FRONT_LEFT_TIRE_VELOCITY,
		VEHICLE_FUNCTION_IN_FRONT_RIGHT_TIRE_VELOCITY,
		VEHICLE_FUNCTION_IN_BACK_LEFT_TIRE_VELOCITY,
		VEHICLE_FUNCTION_IN_BACK_RIGHT_TIRE_VELOCITY,
		VEHICLE_FUNCTION_IN_WINGTIP_CONTRAIL,
		VEHICLE_FUNCTION_IN_HOVER,
		VEHICLE_FUNCTION_IN_THRUST,
		VEHICLE_FUNCTION_IN_ENGINE_HACK,
		VEHICLE_FUNCTION_IN_WINGTIP_CONTRAIL_NEW,
	};

	struct VehicleFlags {
		std::uint32_t speed_wakes_physics : 1;
		std::uint32_t turn_wakes_physics : 1;
		std::uint32_t driver_power_wakes_physics : 1;
		std::uint32_t gunner_power_wakes_physics : 1;
		std::uint32_t control_opposite_speed_sets_brake : 1;
		std::uint32_t slide_wakes_physics : 1;
		std::uint32_t kills_riders_at_terminal_velocity : 1;
		std::uint32_t causes_collision_damage : 1;
		std::uint32_t ai_weapon_cannot_rotate : 1;
		std::uint32_t ai_does_not_require_driver : 1;
		std::uint32_t ai_unused : 1;
		std::uint32_t ai_driver_enable : 1;
		std::uint32_t ai_driver_flying : 1;
		std::uint32_t ai_driver_can_sidestep : 1;
		std::uint32_t ai_driver_hovering : 1;
		std::uint32_t vehicle_steers_directly : 1;
		std::uint32_t unused : 1;
		std::uint32_t has_ebrake : 1;
		std::uint32_t noncombat_vehicle : 1;
		std::uint32_t no_friction_with_driver : 1;
		std::uint32_t can_trigger_automatic_opening_doors : 1;
		std::uint32_t autoaim_when_teamless : 1;
	};
	static_assert(sizeof(VehicleFlags) == sizeof(std::uint32_t));

	struct Vehicle : public Unit {
		Memory::BigEndian<VehicleFlags> vehicle_flags;
		Memory::BigEndian<VehicleType> vehicle_type;
		PADDING(2);
		Memory::BigEndian<float> maximum_forward_speed;
		Memory::BigEndian<float> maximum_reverse_speed;
		Memory::BigEndian<float> speed_acceleration;
		Memory::BigEndian<float> speed_deceleration;
		Memory::BigEndian<float> maximum_left_turn;
		Memory::BigEndian<float> maximum_right_turn;
		Memory::BigEndian<float> wheel_circumference;
		Memory::BigEndian<float> turn_rate;
		Memory::BigEndian<float> blur_speed;
		Memory::BigEndian<VehicleFunctionIn> vehicle_a_in;
		Memory::BigEndian<VehicleFunctionIn> vehicle_b_in;
		Memory::BigEndian<VehicleFunctionIn> vehicle_c_in;
		Memory::BigEndian<VehicleFunctionIn> vehicle_d_in;
		PADDING(12);
		Memory::BigEndian<float> maximum_left_slide;
		Memory::BigEndian<float> maximum_right_slide;
		Memory::BigEndian<float> slide_acceleration;
		Memory::BigEndian<float> slide_deceleration;
		Memory::BigEndian<float> minimum_flipping_angular_velocity;
		Memory::BigEndian<float> maximum_flipping_angular_velocity;
		PADDING(24);
		Memory::BigEndian<float> fixed_gun_yaw;
		Memory::BigEndian<float> fixed_gun_pitch;
		PADDING(24);
		Memory::BigEndian<float> ai_sideslip_distance;
		Memory::BigEndian<float> ai_destination_radius;
		Memory::BigEndian<float> ai_avoidance_distance;
		Memory::BigEndian<float> ai_pathfinding_radius;
		Memory::BigEndian<float> ai_charge_repeat_timeout;
		Memory::BigEndian<float> ai_strafing_abort_range;
		Memory::BigEndian<float> ai_oversteering_bounds[2];
		Angle ai_steering_maximum;
		Memory::BigEndian<float> ai_throttle_maximum;
		Memory::BigEndian<float> ai_move_position_time;
		PADDING(4);
		TagDependency suspension_sound;
		TagDependency crash_sound;
		TagDependency material_effects;
		TagDependency effect;
	};
	static_assert(sizeof(Vehicle) == 1008);

}

#endif

