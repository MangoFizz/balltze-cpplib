// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__UNIT_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__UNIT_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "object.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum UnitFunctionIn : std::uint16_t {
		UNIT_FUNCTION_IN_NONE = 0,
		UNIT_FUNCTION_IN_DRIVER_SEAT_POWER,
		UNIT_FUNCTION_IN_GUNNER_SEAT_POWER,
		UNIT_FUNCTION_IN_AIMING_CHANGE,
		UNIT_FUNCTION_IN_MOUTH_APERTURE,
		UNIT_FUNCTION_IN_INTEGRATED_LIGHT_POWER,
		UNIT_FUNCTION_IN_CAN_BLINK,
		UNIT_FUNCTION_IN_SHIELD_SAPPING,
	};

	enum UnitDefaultTeam : std::uint16_t {
		UNIT_DEFAULT_TEAM_NONE = 0,
		UNIT_DEFAULT_TEAM_PLAYER,
		UNIT_DEFAULT_TEAM_HUMAN,
		UNIT_DEFAULT_TEAM_COVENANT,
		UNIT_DEFAULT_TEAM_FLOOD,
		UNIT_DEFAULT_TEAM_SENTINEL,
		UNIT_DEFAULT_TEAM_UNUSED6,
		UNIT_DEFAULT_TEAM_UNUSED7,
		UNIT_DEFAULT_TEAM_UNUSED8,
		UNIT_DEFAULT_TEAM_UNUSED9,
	};

	enum UnitMotionSensorBlipSize : std::uint16_t {
		UNIT_MOTION_SENSOR_BLIP_SIZE_MEDIUM = 0,
		UNIT_MOTION_SENSOR_BLIP_SIZE_SMALL,
		UNIT_MOTION_SENSOR_BLIP_SIZE_LARGE,
	};

	enum MetagameType : std::uint16_t {
		METAGAME_TYPE_BRUTE = 0,
		METAGAME_TYPE_GRUNT,
		METAGAME_TYPE_JACKAL,
		METAGAME_TYPE_SKIRMISHER,
		METAGAME_TYPE_MARINE,
		METAGAME_TYPE_SPARTAN,
		METAGAME_TYPE_BUGGER,
		METAGAME_TYPE_HUNTER,
		METAGAME_TYPE_FLOOD_INFECTION,
		METAGAME_TYPE_FLOOD_CARRIER,
		METAGAME_TYPE_FLOOD_COMBAT,
		METAGAME_TYPE_FLOOD_PURE,
		METAGAME_TYPE_SENTINEL,
		METAGAME_TYPE_ELITE,
		METAGAME_TYPE_ENGINEER,
		METAGAME_TYPE_MULE,
		METAGAME_TYPE_TURRET,
		METAGAME_TYPE_MONGOOSE,
		METAGAME_TYPE_WARTHOG,
		METAGAME_TYPE_SCORPION,
		METAGAME_TYPE_HORNET,
		METAGAME_TYPE_PELICAN,
		METAGAME_TYPE_REVENANT,
		METAGAME_TYPE_SERAPH,
		METAGAME_TYPE_SHADE,
		METAGAME_TYPE_WATCHTOWER,
		METAGAME_TYPE_GHOST,
		METAGAME_TYPE_CHOPPER,
		METAGAME_TYPE_MAULER,
		METAGAME_TYPE_WRAITH,
		METAGAME_TYPE_BANSHEE,
		METAGAME_TYPE_PHANTOM,
		METAGAME_TYPE_SCARAB,
		METAGAME_TYPE_GUNTOWER,
		METAGAME_TYPE_TUNING_FORK,
		METAGAME_TYPE_BROADSWORD,
		METAGAME_TYPE_MAMMOTH,
		METAGAME_TYPE_LICH,
		METAGAME_TYPE_MANTIS,
		METAGAME_TYPE_WASP,
		METAGAME_TYPE_PHAETON,
		METAGAME_TYPE_BISHOP,
		METAGAME_TYPE_KNIGHT,
		METAGAME_TYPE_PAWN,
	};

	enum MetagameClass : std::uint16_t {
		METAGAME_CLASS_INFANTRY = 0,
		METAGAME_CLASS_LEADER,
		METAGAME_CLASS_HERO,
		METAGAME_CLASS_SPECIALIST,
		METAGAME_CLASS_LIGHT_VEHICLE,
		METAGAME_CLASS_HEAVY_VEHICLE,
		METAGAME_CLASS_GIANT_VEHICLE,
		METAGAME_CLASS_STANDARD_VEHICLE,
	};

	struct UnitFlags {
		std::uint32_t circular_aiming : 1;
		std::uint32_t destroyed_after_dying : 1;
		std::uint32_t half_speed_interpolation : 1;
		std::uint32_t fires_from_camera : 1;
		std::uint32_t entrance_inside_bounding_sphere : 1;
		std::uint32_t unused : 1;
		std::uint32_t causes_passenger_dialogue : 1;
		std::uint32_t resists_pings : 1;
		std::uint32_t melee_attack_is_fatal : 1;
		std::uint32_t dont_reface_during_pings : 1;
		std::uint32_t has_no_aiming : 1;
		std::uint32_t simple_creature : 1;
		std::uint32_t impact_melee_attaches_to_unit : 1;
		std::uint32_t impact_melee_dies_on_shields : 1;
		std::uint32_t cannot_open_doors_automatically : 1;
		std::uint32_t melee_attackers_cannot_attach : 1;
		std::uint32_t not_instantly_killed_by_melee : 1;
		std::uint32_t shield_sapping : 1;
		std::uint32_t runs_around_flaming : 1;
		std::uint32_t inconsequential : 1;
		std::uint32_t special_cinematic_unit : 1;
		std::uint32_t ignored_by_autoaiming : 1;
		std::uint32_t shields_fry_infection_forms : 1;
		std::uint32_t integrated_light_cntrls_weapon : 1;
		std::uint32_t integrated_light_lasts_forever : 1;
	};
	static_assert(sizeof(UnitFlags) == sizeof(std::uint32_t));

	struct UnitSeatFlags {
		std::uint32_t invisible : 1;
		std::uint32_t locked : 1;
		std::uint32_t driver : 1;
		std::uint32_t gunner : 1;
		std::uint32_t third_person_camera : 1;
		std::uint32_t allows_weapons : 1;
		std::uint32_t third_person_on_enter : 1;
		std::uint32_t first_person_camera_slaved_to_gun : 1;
		std::uint32_t allow_vehicle_communication_animations : 1;
		std::uint32_t not_valid_without_driver : 1;
		std::uint32_t allow_ai_noncombatants : 1;
	};
	static_assert(sizeof(UnitSeatFlags) == sizeof(std::uint32_t));

	struct UnitPoweredSeat {
		PADDING(4);
		float driver_powerup_time;
		float driver_powerdown_time;
		PADDING(56);
	};
	static_assert(sizeof(UnitPoweredSeat) == 68);

	struct UnitCameraTrack {
		TagDependency track;
		PADDING(12);
	};
	static_assert(sizeof(UnitCameraTrack) == 28);

	struct UnitUnitHudInterface {
		TagDependency hud;
		PADDING(32);
	};
	static_assert(sizeof(UnitUnitHudInterface) == 48);

	struct UnitSeat {
		UnitSeatFlags flags;
		TagString label;
		TagString marker_name;
		PADDING(32);
		Vector3D acceleration_scale;
		PADDING(12);
		float yaw_rate;
		float pitch_rate;
		TagString camera_marker_name;
		TagString camera_submerged_marker_name;
		Angle pitch_auto_level;
		Angle pitch_range[2];
		TagBlock<UnitCameraTrack> camera_tracks;
		TagBlock<UnitUnitHudInterface> unit_hud_interface;
		PADDING(4);
		Index hud_text_message_index;
		PADDING(2);
		Angle yaw_minimum;
		Angle yaw_maximum;
		TagDependency built_in_gunner;
		PADDING(20);
	};
	static_assert(sizeof(UnitSeat) == 284);

	struct UnitWeapon {
		TagDependency weapon;
		PADDING(20);
	};
	static_assert(sizeof(UnitWeapon) == 36);

	struct UnitDialogueVariant {
		std::int16_t variant_number;
		PADDING(2);
		PADDING(4);
		TagDependency dialogue;
	};
	static_assert(sizeof(UnitDialogueVariant) == 24);

	struct Unit : public Object {
		UnitFlags unit_flags;
		UnitDefaultTeam default_team;
		ObjectNoise constant_sound_volume;
		float rider_damage_fraction;
		TagDependency integrated_light_toggle;
		UnitFunctionIn unit_a_in;
		UnitFunctionIn unit_b_in;
		UnitFunctionIn unit_c_in;
		UnitFunctionIn unit_d_in;
		Angle camera_field_of_view;
		float camera_stiffness;
		TagString camera_marker_name;
		TagString camera_submerged_marker_name;
		Angle pitch_auto_level;
		Angle pitch_range[2];
		TagBlock<UnitCameraTrack> camera_tracks;
		Point3D seat_acceleration_scale;
		PADDING(12);
		float soft_ping_threshold;
		float soft_ping_interrupt_time;
		float hard_ping_threshold;
		float hard_ping_interrupt_time;
		float hard_death_threshold;
		float feign_death_threshold;
		float feign_death_time;
		float distance_of_evade_anim;
		float distance_of_dive_anim;
		PADDING(4);
		float stunned_movement_threshold;
		float feign_death_chance;
		float feign_repeat_chance;
		TagDependency spawned_actor;
		std::int16_t spawned_actor_count[2];
		float spawned_velocity;
		Angle aiming_velocity_maximum;
		Angle aiming_acceleration_maximum;
		Fraction casual_aiming_modifier;
		Angle looking_velocity_maximum;
		Angle looking_acceleration_maximum;
		PADDING(8);
		float ai_vehicle_radius;
		float ai_danger_radius;
		TagDependency melee_damage;
		UnitMotionSensorBlipSize motion_sensor_blip_size;
		PADDING(2);
		MetagameType metagame_type;
		MetagameClass metagame_class;
		PADDING(8);
		TagBlock<UnitUnitHudInterface> new_hud_interfaces;
		TagBlock<UnitDialogueVariant> dialogue_variants;
		float grenade_velocity;
		GrenadeType grenade_type;
		std::int16_t grenade_count;
		std::int16_t soft_ping_interrupt_ticks;
		std::int16_t hard_ping_interrupt_ticks;
		TagBlock<UnitPoweredSeat> powered_seats;
		TagBlock<UnitWeapon> weapons;
		TagBlock<UnitSeat> seats;
	};
	static_assert(sizeof(Unit) == 752);

}

#pragma pack(pop)

#endif

