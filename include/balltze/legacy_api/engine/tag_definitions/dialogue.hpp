// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__DIALOGUE_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__DIALOGUE_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct Dialogue {
		PADDING(2);
		PADDING(2);
		PADDING(12);
		TagDependency idle_noncombat;
		TagDependency idle_combat;
		TagDependency idle_flee;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency pain_body_minor;
		TagDependency pain_body_major;
		TagDependency pain_shield;
		TagDependency pain_falling;
		TagDependency scream_fear;
		TagDependency scream_pain;
		TagDependency maimed_limb;
		TagDependency maimed_head;
		TagDependency death_quiet;
		TagDependency death_violent;
		TagDependency death_falling;
		TagDependency death_agonizing;
		TagDependency death_instant;
		TagDependency death_flying;
		PADDING(16);
		TagDependency damaged_friend;
		TagDependency damaged_friend_player;
		TagDependency damaged_enemy;
		TagDependency damaged_enemy_cm;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency hurt_friend;
		TagDependency hurt_friend_re;
		TagDependency hurt_friend_player;
		TagDependency hurt_enemy;
		TagDependency hurt_enemy_re;
		TagDependency hurt_enemy_cm;
		TagDependency hurt_enemy_bullet;
		TagDependency hurt_enemy_needler;
		TagDependency hurt_enemy_plasma;
		TagDependency hurt_enemy_sniper;
		TagDependency hurt_enemy_grenade;
		TagDependency hurt_enemy_explosion;
		TagDependency hurt_enemy_melee;
		TagDependency hurt_enemy_flame;
		TagDependency hurt_enemy_shotgun;
		TagDependency hurt_enemy_vehicle;
		TagDependency hurt_enemy_mountedweapon;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency killed_friend;
		TagDependency killed_friend_cm;
		TagDependency killed_friend_player;
		TagDependency killed_friend_player_cm;
		TagDependency killed_enemy;
		TagDependency killed_enemy_cm;
		TagDependency killed_enemy_player;
		TagDependency killed_enemy_player_cm;
		TagDependency killed_enemy_covenant;
		TagDependency killed_enemy_covenant_cm;
		TagDependency killed_enemy_floodcombat;
		TagDependency killed_enemy_floodcombat_cm;
		TagDependency killed_enemy_floodcarrier;
		TagDependency killed_enemy_floodcarrier_cm;
		TagDependency killed_enemy_sentinel;
		TagDependency killed_enemy_sentinel_cm;
		TagDependency killed_enemy_bullet;
		TagDependency killed_enemy_needler;
		TagDependency killed_enemy_plasma;
		TagDependency killed_enemy_sniper;
		TagDependency killed_enemy_grenade;
		TagDependency killed_enemy_explosion;
		TagDependency killed_enemy_melee;
		TagDependency killed_enemy_flame;
		TagDependency killed_enemy_shotgun;
		TagDependency killed_enemy_vehicle;
		TagDependency killed_enemy_mountedweapon;
		TagDependency killing_spree;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency player_kill_cm;
		TagDependency player_kill_bullet_cm;
		TagDependency player_kill_needler_cm;
		TagDependency player_kill_plasma_cm;
		TagDependency player_kill_sniper_cm;
		TagDependency anyone_kill_grenade_cm;
		TagDependency player_kill_explosion_cm;
		TagDependency player_kill_melee_cm;
		TagDependency player_kill_flame_cm;
		TagDependency player_kill_shotgun_cm;
		TagDependency player_kill_vehicle_cm;
		TagDependency player_kill_mountedweapon_cm;
		TagDependency player_killling_spree_cm;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency friend_died;
		TagDependency friend_player_died;
		TagDependency friend_killed_by_friend;
		TagDependency friend_killed_by_friendly_player;
		TagDependency friend_killed_by_enemy;
		TagDependency friend_killed_by_enemy_player;
		TagDependency friend_killed_by_covenant;
		TagDependency friend_killed_by_flood;
		TagDependency friend_killed_by_sentinel;
		TagDependency friend_betrayed;
		PADDING(16);
		PADDING(16);
		TagDependency new_combat_alone;
		TagDependency new_enemy_recent_combat;
		TagDependency old_enemy_sighted;
		TagDependency unexpected_enemy;
		TagDependency dead_friend_found;
		TagDependency alliance_broken;
		TagDependency alliance_reformed;
		TagDependency grenade_throwing;
		TagDependency grenade_sighted;
		TagDependency grenade_startle;
		TagDependency grenade_danger_enemy;
		TagDependency grenade_danger_self;
		TagDependency grenade_danger_friend;
		PADDING(16);
		PADDING(16);
		TagDependency new_combat_group_re;
		TagDependency new_combat_nearby_re;
		TagDependency alert_friend;
		TagDependency alert_friend_re;
		TagDependency alert_lost_contact;
		TagDependency alert_lost_contact_re;
		TagDependency blocked;
		TagDependency blocked_re;
		TagDependency search_start;
		TagDependency search_query;
		TagDependency search_query_re;
		TagDependency search_report;
		TagDependency search_abandon;
		TagDependency search_group_abandon;
		TagDependency group_uncover;
		TagDependency group_uncover_re;
		TagDependency advance;
		TagDependency advance_re;
		TagDependency retreat;
		TagDependency retreat_re;
		TagDependency cover;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency sighted_friend_player;
		TagDependency shooting;
		TagDependency shooting_vehicle;
		TagDependency shooting_berserk;
		TagDependency shooting_group;
		TagDependency shooting_traitor;
		TagDependency taunt;
		TagDependency taunt_re;
		TagDependency flee;
		TagDependency flee_re;
		TagDependency flee_leader_died;
		TagDependency attempted_flee;
		TagDependency attempted_flee_re;
		TagDependency lost_contact;
		TagDependency hiding_finished;
		TagDependency vehicle_entry;
		TagDependency vehicle_exit;
		TagDependency vehicle_woohoo;
		TagDependency vehicle_scared;
		TagDependency vehicle_collision;
		TagDependency partially_sighted;
		TagDependency nothing_there;
		TagDependency pleading;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency surprise;
		TagDependency berserk;
		TagDependency melee_attack;
		TagDependency dive;
		TagDependency uncover_exclamation;
		TagDependency leap_attack;
		TagDependency resurrection;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency celebration;
		TagDependency check_body_enemy;
		TagDependency check_body_friend;
		TagDependency shooting_dead_enemy;
		TagDependency shooting_dead_enemy_player;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		TagDependency alone;
		TagDependency unscathed;
		TagDependency seriously_wounded;
		TagDependency seriously_wounded_re;
		TagDependency massacre;
		TagDependency massacre_re;
		TagDependency rout;
		TagDependency rout_re;
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(16);
		PADDING(752);
	};
	static_assert(sizeof(Dialogue) == 4112);

}

#pragma pack(pop)

#endif

