// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__ACTOR_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__ACTOR_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum ActorType : std::uint16_t {
		ACTOR_TYPE_ELITE = 0,
		ACTOR_TYPE_JACKAL,
		ACTOR_TYPE_GRUNT,
		ACTOR_TYPE_HUNTER,
		ACTOR_TYPE_ENGINEER,
		ACTOR_TYPE_ASSASSIN,
		ACTOR_TYPE_PLAYER,
		ACTOR_TYPE_MARINE,
		ACTOR_TYPE_CREW,
		ACTOR_TYPE_COMBAT_FORM,
		ACTOR_TYPE_INFECTION_FORM,
		ACTOR_TYPE_CARRIER_FORM,
		ACTOR_TYPE_MONITOR,
		ACTOR_TYPE_SENTINEL,
		ACTOR_TYPE_NONE,
		ACTOR_TYPE_MOUNTED_WEAPON,
	};

	enum ActorUnreachableDangerTrigger : std::uint16_t {
		ACTOR_UNREACHABLE_DANGER_TRIGGER_NEVER = 0,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_VISIBLE,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_SHOOTING,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_SHOOTING_NEAR_US,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_DAMAGING_US,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_UNUSED,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_UNUSED1,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_UNUSED2,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_UNUSED3,
		ACTOR_UNREACHABLE_DANGER_TRIGGER_UNUSED4,
	};

	enum ActorDefensiveCrouchType : std::uint16_t {
		ACTOR_DEFENSIVE_CROUCH_TYPE_NEVER = 0,
		ACTOR_DEFENSIVE_CROUCH_TYPE_DANGER,
		ACTOR_DEFENSIVE_CROUCH_TYPE_LOW_SHIELDS,
		ACTOR_DEFENSIVE_CROUCH_TYPE_HIDE_BEHIND_SHIELD,
		ACTOR_DEFENSIVE_CROUCH_TYPE_ANY_TARGET,
		ACTOR_DEFENSIVE_CROUCH_TYPE_FLOOD_SHAMBLE,
	};

	struct ActorFlags {
		std::uint32_t can_see_in_darkness : 1;
		std::uint32_t sneak_uncovering_target : 1;
		std::uint32_t sneak_uncovering_pursuit_position : 1;
		std::uint32_t unused : 1;
		std::uint32_t shoot_at_target_s_last_location : 1;
		std::uint32_t try_to_stay_still_when_crouched : 1;
		std::uint32_t crouch_when_not_in_combat : 1;
		std::uint32_t crouch_when_guarding : 1;
		std::uint32_t unused_1 : 1;
		std::uint32_t must_crouch_to_shoot : 1;
		std::uint32_t panic_when_surprised : 1;
		std::uint32_t always_charge_at_enemies : 1;
		std::uint32_t gets_in_vehicles_with_player : 1;
		std::uint32_t start_firing_before_aligned : 1;
		std::uint32_t standing_must_move_forward : 1;
		std::uint32_t crouching_must_move_forward : 1;
		std::uint32_t defensive_crouch_while_charging : 1;
		std::uint32_t use_stalking_behavior : 1;
		std::uint32_t stalking_freeze_if_exposed : 1;
		std::uint32_t always_berserk_in_attacking_mode : 1;
		std::uint32_t berserking_uses_panicked_movement : 1;
		std::uint32_t flying : 1;
		std::uint32_t panicked_by_unopposable_enemy : 1;
		std::uint32_t crouch_when_hiding_from_unopposable : 1;
		std::uint32_t always_charge_in_attacking_mode : 1;
		std::uint32_t dive_off_ledges : 1;
		std::uint32_t swarm : 1;
		std::uint32_t suicidal_melee_attack : 1;
		std::uint32_t cannot_move_while_crouching : 1;
		std::uint32_t fixed_crouch_facing : 1;
		std::uint32_t crouch_when_in_line_of_fire : 1;
		std::uint32_t avoid_friends_line_of_fire : 1;
	};
	static_assert(sizeof(ActorFlags) == sizeof(std::uint32_t));

	struct ActorMoreFlags {
		std::uint32_t avoid_all_enemy_attack_vectors : 1;
		std::uint32_t must_stand_to_fire : 1;
		std::uint32_t must_stop_to_fire : 1;
		std::uint32_t disallow_vehicle_combat : 1;
		std::uint32_t pathfinding_ignores_danger : 1;
		std::uint32_t panic_in_groups : 1;
		std::uint32_t no_corpse_shooting : 1;
	};
	static_assert(sizeof(ActorMoreFlags) == sizeof(std::uint32_t));

	struct Actor {
		Memory::BigEndian<ActorFlags> flags;
		Memory::BigEndian<ActorMoreFlags> more_flags;
		PADDING(12);
		Memory::BigEndian<ActorType> type;
		PADDING(2);
		Memory::BigEndian<float> max_vision_distance;
		Angle central_vision_angle;
		Angle max_vision_angle;
		PADDING(4);
		Angle peripheral_vision_angle;
		Memory::BigEndian<float> peripheral_distance;
		PADDING(4);
		Vector3D standing_gun_offset;
		Vector3D crouching_gun_offset;
		Memory::BigEndian<float> hearing_distance;
		Memory::BigEndian<float> notice_projectile_chance;
		Memory::BigEndian<float> notice_vehicle_chance;
		PADDING(8);
		Memory::BigEndian<float> combat_perception_time;
		Memory::BigEndian<float> guard_perception_time;
		Memory::BigEndian<float> non_combat_perception_time;
		Memory::BigEndian<float> inverse_combat_perception_time;
		Memory::BigEndian<float> inverse_guard_perception_time;
		Memory::BigEndian<float> inverse_non_combat_perception_time;
		PADDING(8);
		Memory::BigEndian<float> dive_into_cover_chance;
		Memory::BigEndian<float> emerge_from_cover_chance;
		Memory::BigEndian<float> dive_from_grenade_chance;
		Memory::BigEndian<float> pathfinding_radius;
		Memory::BigEndian<float> glass_ignorance_chance;
		Memory::BigEndian<float> stationary_movement_dist;
		Memory::BigEndian<float> free_flying_sidestep;
		Angle begin_moving_angle;
		Memory::BigEndian<float> cosine_begin_moving_angle;
		Euler2D maximum_aiming_deviation;
		Euler2D maximum_looking_deviation;
		Angle noncombat_look_delta_l;
		Angle noncombat_look_delta_r;
		Angle combat_look_delta_l;
		Angle combat_look_delta_r;
		Euler2D idle_aiming_range;
		Euler2D idle_looking_range;
		Memory::BigEndian<float> event_look_time_modifier[2];
		Memory::BigEndian<float> noncombat_idle_facing[2];
		Memory::BigEndian<float> noncombat_idle_aiming[2];
		Memory::BigEndian<float> noncombat_idle_looking[2];
		Memory::BigEndian<float> guard_idle_facing[2];
		Memory::BigEndian<float> guard_idle_aiming[2];
		Memory::BigEndian<float> guard_idle_looking[2];
		Memory::BigEndian<float> combat_idle_facing[2];
		Memory::BigEndian<float> combat_idle_aiming[2];
		Memory::BigEndian<float> combat_idle_looking[2];
		PADDING(8);
		Euler2D cosine_maximum_aiming_deviation;
		Euler2D cosine_maximum_looking_deviation;
		TagDependency do_not_use;
		PADDING(268);
		TagDependency do_not_use_1;
		Memory::BigEndian<ActorUnreachableDangerTrigger> unreachable_danger_trigger;
		Memory::BigEndian<ActorUnreachableDangerTrigger> vehicle_danger_trigger;
		Memory::BigEndian<ActorUnreachableDangerTrigger> player_danger_trigger;
		PADDING(2);
		Memory::BigEndian<float> danger_trigger_time[2];
		Memory::BigEndian<std::int16_t> friends_killed_trigger;
		Memory::BigEndian<std::int16_t> friends_retreating_trigger;
		PADDING(12);
		Memory::BigEndian<float> retreat_time[2];
		PADDING(8);
		Memory::BigEndian<float> cowering_time[2];
		Memory::BigEndian<float> friend_killed_panic_chance;
		Memory::BigEndian<ActorType> leader_type;
		PADDING(2);
		Memory::BigEndian<float> leader_killed_panic_chance;
		Memory::BigEndian<float> panic_damage_threshold;
		Memory::BigEndian<float> surprise_distance;
		PADDING(28);
		Memory::BigEndian<float> hide_behind_cover_time[2];
		Memory::BigEndian<float> hide_target_not_visible_time;
		Memory::BigEndian<float> hide_shield_fraction;
		Memory::BigEndian<float> attack_shield_fraction;
		Memory::BigEndian<float> pursue_shield_fraction;
		PADDING(16);
		Memory::BigEndian<ActorDefensiveCrouchType> defensive_crouch_type;
		PADDING(2);
		Memory::BigEndian<float> attacking_crouch_threshold;
		Memory::BigEndian<float> defending_crouch_threshold;
		Memory::BigEndian<float> min_stand_time;
		Memory::BigEndian<float> min_crouch_time;
		Memory::BigEndian<float> defending_hide_time_modifier;
		Memory::BigEndian<float> attacking_evasion_threshold;
		Memory::BigEndian<float> defending_evasion_threshold;
		Memory::BigEndian<float> evasion_seek_cover_chance;
		Memory::BigEndian<float> evasion_delay_time;
		Memory::BigEndian<float> max_seek_cover_distance;
		Memory::BigEndian<float> cover_damage_threshold;
		Memory::BigEndian<float> stalking_discovery_time;
		Memory::BigEndian<float> stalking_max_distance;
		Angle stationary_facing_angle;
		Memory::BigEndian<float> change_facing_stand_time;
		PADDING(4);
		Memory::BigEndian<float> uncover_delay_time[2];
		Memory::BigEndian<float> target_search_time[2];
		Memory::BigEndian<float> pursuit_position_time[2];
		Memory::BigEndian<std::uint16_t> num_positions_coord;
		Memory::BigEndian<std::uint16_t> num_positions_normal;
		PADDING(32);
		Memory::BigEndian<float> melee_attack_delay;
		Memory::BigEndian<float> melee_fudge_factor;
		Memory::BigEndian<float> melee_charge_time;
		Memory::BigEndian<float> melee_leap_range[2];
		Memory::BigEndian<float> melee_leap_velocity;
		Memory::BigEndian<float> melee_leap_chance;
		Memory::BigEndian<float> melee_leap_ballistic;
		Memory::BigEndian<float> berserk_damage_amount;
		Memory::BigEndian<float> berserk_damage_threshold;
		Memory::BigEndian<float> berserk_proximity;
		Memory::BigEndian<float> suicide_sensing_dist;
		Memory::BigEndian<float> berserk_grenade_chance;
		PADDING(12);
		Memory::BigEndian<float> guard_position_time[2];
		Memory::BigEndian<float> combat_position_time[2];
		Memory::BigEndian<float> old_position_avoid_dist;
		Memory::BigEndian<float> friend_avoid_dist;
		PADDING(40);
		Memory::BigEndian<float> noncombat_idle_speech_time[2];
		Memory::BigEndian<float> combat_idle_speech_time[2];
		PADDING(48);
		PADDING(128);
		TagDependency do_not_use_2;
		PADDING(48);
	};
	static_assert(sizeof(Actor) == 1272);

}

#endif

