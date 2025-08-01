// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SCENARIO_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SCENARIO_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "actor.hpp"
#include "object.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum ScenarioType : std::uint16_t {
		SCENARIO_TYPE_SINGLEPLAYER = 0,
		SCENARIO_TYPE_MULTIPLAYER,
		SCENARIO_TYPE_USER_INTERFACE,
	};

	enum ScenarioSpawnType : std::uint16_t {
		SCENARIO_SPAWN_TYPE_NONE = 0,
		SCENARIO_SPAWN_TYPE_CTF,
		SCENARIO_SPAWN_TYPE_SLAYER,
		SCENARIO_SPAWN_TYPE_ODDBALL,
		SCENARIO_SPAWN_TYPE_KING_OF_THE_HILL,
		SCENARIO_SPAWN_TYPE_RACE,
		SCENARIO_SPAWN_TYPE_TERMINATOR,
		SCENARIO_SPAWN_TYPE_STUB,
		SCENARIO_SPAWN_TYPE_IGNORED1,
		SCENARIO_SPAWN_TYPE_IGNORED2,
		SCENARIO_SPAWN_TYPE_IGNORED3,
		SCENARIO_SPAWN_TYPE_IGNORED4,
		SCENARIO_SPAWN_TYPE_ALL_GAMES,
		SCENARIO_SPAWN_TYPE_ALL_EXCEPT_CTF,
		SCENARIO_SPAWN_TYPE_ALL_EXCEPT_RACE_AND_CTF,
	};

	enum ScenarioNetgameFlagType : std::uint16_t {
		SCENARIO_NETGAME_FLAG_TYPE_CTF_FLAG = 0,
		SCENARIO_NETGAME_FLAG_TYPE_CTF_VEHICLE,
		SCENARIO_NETGAME_FLAG_TYPE_ODDBALL_BALL_SPAWN,
		SCENARIO_NETGAME_FLAG_TYPE_RACE_TRACK,
		SCENARIO_NETGAME_FLAG_TYPE_RACE_VEHICLE,
		SCENARIO_NETGAME_FLAG_TYPE_VEGAS_BANK,
		SCENARIO_NETGAME_FLAG_TYPE_TELEPORT_FROM,
		SCENARIO_NETGAME_FLAG_TYPE_TELEPORT_TO,
		SCENARIO_NETGAME_FLAG_TYPE_HILL_FLAG,
	};

	enum ScenarioReturnState : std::uint16_t {
		SCENARIO_RETURN_STATE_NONE = 0,
		SCENARIO_RETURN_STATE_SLEEPING,
		SCENARIO_RETURN_STATE_ALERT,
		SCENARIO_RETURN_STATE_MOVING_REPEAT_SAME_POSITION,
		SCENARIO_RETURN_STATE_MOVING_LOOP,
		SCENARIO_RETURN_STATE_MOVING_LOOP_BACK_AND_FORTH,
		SCENARIO_RETURN_STATE_MOVING_LOOP_RANDOMLY,
		SCENARIO_RETURN_STATE_MOVING_RANDOMLY,
		SCENARIO_RETURN_STATE_GUARDING,
		SCENARIO_RETURN_STATE_GUARDING_AT_GUARD_POSITION,
		SCENARIO_RETURN_STATE_SEARCHING,
		SCENARIO_RETURN_STATE_FLEEING,
	};

	enum ScenarioUniqueLeaderType : std::uint16_t {
		SCENARIO_UNIQUE_LEADER_TYPE_NORMAL = 0,
		SCENARIO_UNIQUE_LEADER_TYPE_NONE,
		SCENARIO_UNIQUE_LEADER_TYPE_RANDOM,
		SCENARIO_UNIQUE_LEADER_TYPE_SGT_JOHNSON,
		SCENARIO_UNIQUE_LEADER_TYPE_SGT_LEHTO,
	};

	enum ScenarioMajorUpgrade : std::uint16_t {
		SCENARIO_MAJOR_UPGRADE_NORMAL = 0,
		SCENARIO_MAJOR_UPGRADE_FEW,
		SCENARIO_MAJOR_UPGRADE_MANY,
		SCENARIO_MAJOR_UPGRADE_NONE,
		SCENARIO_MAJOR_UPGRADE_ALL,
	};

	enum ScenarioChangeAttackingDefendingStateWhen : std::uint16_t {
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_NEVER = 0,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_75_STRENGTH,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_50_STRENGTH,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_25_STRENGTH,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_ANYBODY_DEAD,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_25_DEAD,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_50_DEAD,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_75_DEAD,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_ALL_BUT_ONE_DEAD,
		SCENARIO_CHANGE_ATTACKING_DEFENDING_STATE_WHEN_ALL_DEAD,
	};

	enum ScenarioGroupIndex : std::uint16_t {
		SCENARIO_GROUP_INDEX_A = 0,
		SCENARIO_GROUP_INDEX_B,
		SCENARIO_GROUP_INDEX_C,
		SCENARIO_GROUP_INDEX_D,
		SCENARIO_GROUP_INDEX_E,
		SCENARIO_GROUP_INDEX_F,
		SCENARIO_GROUP_INDEX_G,
		SCENARIO_GROUP_INDEX_H,
		SCENARIO_GROUP_INDEX_I,
		SCENARIO_GROUP_INDEX_J,
		SCENARIO_GROUP_INDEX_K,
		SCENARIO_GROUP_INDEX_L,
		SCENARIO_GROUP_INDEX_M,
		SCENARIO_GROUP_INDEX_N,
		SCENARIO_GROUP_INDEX_O,
		SCENARIO_GROUP_INDEX_P,
		SCENARIO_GROUP_INDEX_Q,
		SCENARIO_GROUP_INDEX_R,
		SCENARIO_GROUP_INDEX_S,
		SCENARIO_GROUP_INDEX_T,
		SCENARIO_GROUP_INDEX_U,
		SCENARIO_GROUP_INDEX_V,
		SCENARIO_GROUP_INDEX_W,
		SCENARIO_GROUP_INDEX_X,
		SCENARIO_GROUP_INDEX_Y,
		SCENARIO_GROUP_INDEX_Z,
	};

	enum ScenarioTeamIndex : std::uint16_t {
		SCENARIO_TEAM_INDEX_DEFAULT_BY_UNIT = 0,
		SCENARIO_TEAM_INDEX_PLAYER,
		SCENARIO_TEAM_INDEX_HUMAN,
		SCENARIO_TEAM_INDEX_COVENANT,
		SCENARIO_TEAM_INDEX_FLOOD,
		SCENARIO_TEAM_INDEX_SENTINEL,
		SCENARIO_TEAM_INDEX_UNUSED6,
		SCENARIO_TEAM_INDEX_UNUSED7,
		SCENARIO_TEAM_INDEX_UNUSED8,
		SCENARIO_TEAM_INDEX_UNUSED9,
	};

	enum ScenarioSearchBehavior : std::uint16_t {
		SCENARIO_SEARCH_BEHAVIOR_NORMAL = 0,
		SCENARIO_SEARCH_BEHAVIOR_NEVER,
		SCENARIO_SEARCH_BEHAVIOR_TENACIOUS,
	};

	enum ScenarioAtomType : std::uint16_t {
		SCENARIO_ATOM_TYPE_PAUSE = 0,
		SCENARIO_ATOM_TYPE_GO_TO,
		SCENARIO_ATOM_TYPE_GO_TO_AND_FACE,
		SCENARIO_ATOM_TYPE_MOVE_IN_DIRECTION,
		SCENARIO_ATOM_TYPE_LOOK,
		SCENARIO_ATOM_TYPE_ANIMATION_MODE,
		SCENARIO_ATOM_TYPE_CROUCH,
		SCENARIO_ATOM_TYPE_SHOOT,
		SCENARIO_ATOM_TYPE_GRENADE,
		SCENARIO_ATOM_TYPE_VEHICLE,
		SCENARIO_ATOM_TYPE_RUNNING_JUMP,
		SCENARIO_ATOM_TYPE_TARGETED_JUMP,
		SCENARIO_ATOM_TYPE_SCRIPT,
		SCENARIO_ATOM_TYPE_ANIMATE,
		SCENARIO_ATOM_TYPE_RECORDING,
		SCENARIO_ATOM_TYPE_ACTION,
		SCENARIO_ATOM_TYPE_VOCALIZE,
		SCENARIO_ATOM_TYPE_TARGETING,
		SCENARIO_ATOM_TYPE_INITIATIVE,
		SCENARIO_ATOM_TYPE_WAIT,
		SCENARIO_ATOM_TYPE_LOOP,
		SCENARIO_ATOM_TYPE_DIE,
		SCENARIO_ATOM_TYPE_MOVE_IMMEDIATE,
		SCENARIO_ATOM_TYPE_LOOK_RANDOM,
		SCENARIO_ATOM_TYPE_LOOK_PLAYER,
		SCENARIO_ATOM_TYPE_LOOK_OBJECT,
		SCENARIO_ATOM_TYPE_SET_RADIUS,
		SCENARIO_ATOM_TYPE_TELEPORT,
	};

	enum ScenarioSelectionType : std::uint16_t {
		SCENARIO_SELECTION_TYPE_FRIENDLY_ACTOR = 0,
		SCENARIO_SELECTION_TYPE_DISEMBODIED,
		SCENARIO_SELECTION_TYPE_IN_PLAYER_S_VEHICLE,
		SCENARIO_SELECTION_TYPE_NOT_IN_A_VEHICLE,
		SCENARIO_SELECTION_TYPE_PREFER_SERGEANT,
		SCENARIO_SELECTION_TYPE_ANY_ACTOR,
		SCENARIO_SELECTION_TYPE_RADIO_UNIT,
		SCENARIO_SELECTION_TYPE_RADIO_SERGEANT,
	};

	enum ScenarioAddressee : std::uint16_t {
		SCENARIO_ADDRESSEE_NONE = 0,
		SCENARIO_ADDRESSEE_PLAYER,
		SCENARIO_ADDRESSEE_PARTICIPANT,
	};

	enum ScenarioScriptType : std::uint16_t {
		SCENARIO_SCRIPT_TYPE_STARTUP = 0,
		SCENARIO_SCRIPT_TYPE_DORMANT,
		SCENARIO_SCRIPT_TYPE_CONTINUOUS,
		SCENARIO_SCRIPT_TYPE_STATIC,
		SCENARIO_SCRIPT_TYPE_STUB,
	};

	enum ScenarioScriptValueType : std::uint16_t {
		SCENARIO_SCRIPT_VALUE_TYPE_UNPARSED = 0,
		SCENARIO_SCRIPT_VALUE_TYPE_SPECIAL_FORM,
		SCENARIO_SCRIPT_VALUE_TYPE_FUNCTION_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_PASSTHROUGH,
		SCENARIO_SCRIPT_VALUE_TYPE_VOID,
		SCENARIO_SCRIPT_VALUE_TYPE_BOOLEAN,
		SCENARIO_SCRIPT_VALUE_TYPE_REAL,
		SCENARIO_SCRIPT_VALUE_TYPE_SHORT,
		SCENARIO_SCRIPT_VALUE_TYPE_LONG,
		SCENARIO_SCRIPT_VALUE_TYPE_STRING,
		SCENARIO_SCRIPT_VALUE_TYPE_SCRIPT,
		SCENARIO_SCRIPT_VALUE_TYPE_TRIGGER_VOLUME,
		SCENARIO_SCRIPT_VALUE_TYPE_CUTSCENE_FLAG,
		SCENARIO_SCRIPT_VALUE_TYPE_CUTSCENE_CAMERA_POINT,
		SCENARIO_SCRIPT_VALUE_TYPE_CUTSCENE_TITLE,
		SCENARIO_SCRIPT_VALUE_TYPE_CUTSCENE_RECORDING,
		SCENARIO_SCRIPT_VALUE_TYPE_DEVICE_GROUP,
		SCENARIO_SCRIPT_VALUE_TYPE_AI,
		SCENARIO_SCRIPT_VALUE_TYPE_AI_COMMAND_LIST,
		SCENARIO_SCRIPT_VALUE_TYPE_STARTING_PROFILE,
		SCENARIO_SCRIPT_VALUE_TYPE_CONVERSATION,
		SCENARIO_SCRIPT_VALUE_TYPE_NAVPOINT,
		SCENARIO_SCRIPT_VALUE_TYPE_HUD_MESSAGE,
		SCENARIO_SCRIPT_VALUE_TYPE_OBJECT_LIST,
		SCENARIO_SCRIPT_VALUE_TYPE_SOUND,
		SCENARIO_SCRIPT_VALUE_TYPE_EFFECT,
		SCENARIO_SCRIPT_VALUE_TYPE_DAMAGE,
		SCENARIO_SCRIPT_VALUE_TYPE_LOOPING_SOUND,
		SCENARIO_SCRIPT_VALUE_TYPE_ANIMATION_GRAPH,
		SCENARIO_SCRIPT_VALUE_TYPE_ACTOR_VARIANT,
		SCENARIO_SCRIPT_VALUE_TYPE_DAMAGE_EFFECT,
		SCENARIO_SCRIPT_VALUE_TYPE_OBJECT_DEFINITION,
		SCENARIO_SCRIPT_VALUE_TYPE_GAME_DIFFICULTY,
		SCENARIO_SCRIPT_VALUE_TYPE_TEAM,
		SCENARIO_SCRIPT_VALUE_TYPE_AI_DEFAULT_STATE,
		SCENARIO_SCRIPT_VALUE_TYPE_ACTOR_TYPE,
		SCENARIO_SCRIPT_VALUE_TYPE_HUD_CORNER,
		SCENARIO_SCRIPT_VALUE_TYPE_OBJECT,
		SCENARIO_SCRIPT_VALUE_TYPE_UNIT,
		SCENARIO_SCRIPT_VALUE_TYPE_VEHICLE,
		SCENARIO_SCRIPT_VALUE_TYPE_WEAPON,
		SCENARIO_SCRIPT_VALUE_TYPE_DEVICE,
		SCENARIO_SCRIPT_VALUE_TYPE_SCENERY,
		SCENARIO_SCRIPT_VALUE_TYPE_OBJECT_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_UNIT_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_VEHICLE_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_WEAPON_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_DEVICE_NAME,
		SCENARIO_SCRIPT_VALUE_TYPE_SCENERY_NAME,
	};

	enum ScenarioTextStyle : std::uint16_t {
		SCENARIO_TEXT_STYLE_PLAIN = 0,
		SCENARIO_TEXT_STYLE_BOLD,
		SCENARIO_TEXT_STYLE_ITALIC,
		SCENARIO_TEXT_STYLE_CONDENSE,
		SCENARIO_TEXT_STYLE_UNDERLINE,
	};

	enum ScenarioJustification : std::uint16_t {
		SCENARIO_JUSTIFICATION_LEFT = 0,
		SCENARIO_JUSTIFICATION_RIGHT,
		SCENARIO_JUSTIFICATION_CENTER,
	};

	struct ScenarioTextFlags {
		std::uint32_t wrap_horizontally : 1;
		std::uint32_t wrap_vertically : 1;
		std::uint32_t center_vertically : 1;
		std::uint32_t bottom_justify : 1;
	};
	static_assert(sizeof(ScenarioTextFlags) == sizeof(std::uint32_t));

	struct ScenarioFunctionFlags {
		std::uint32_t scripted : 1;
		std::uint32_t invert : 1;
		std::uint32_t additive : 1;
		std::uint32_t always_active : 1;
	};
	static_assert(sizeof(ScenarioFunctionFlags) == sizeof(std::uint32_t));

	struct ScenarioSpawnNotPlaced {
		std::uint16_t automatically : 1;
		std::uint16_t on_easy : 1;
		std::uint16_t on_normal : 1;
		std::uint16_t on_hard : 1;
		std::uint16_t use_player_appearance : 1;
	};
	static_assert(sizeof(ScenarioSpawnNotPlaced) == sizeof(std::uint16_t));

	struct ScenarioUnitFlags {
		std::uint32_t dead : 1;
	};
	static_assert(sizeof(ScenarioUnitFlags) == sizeof(std::uint32_t));

	struct ScenarioVehicleMultiplayerSpawnFlags {
		std::uint16_t slayer_default : 1;
		std::uint16_t ctf_default : 1;
		std::uint16_t king_default : 1;
		std::uint16_t oddball_default : 1;
		std::uint16_t unused : 1;
		std::uint16_t unused1 : 1;
		std::uint16_t unused2 : 1;
		std::uint16_t unused3 : 1;
		std::uint16_t slayer_allowed : 1;
		std::uint16_t ctf_allowed : 1;
		std::uint16_t king_allowed : 1;
		std::uint16_t oddball_allowed : 1;
		std::uint16_t unused4 : 1;
		std::uint16_t unused5 : 1;
		std::uint16_t unused6 : 1;
		std::uint16_t unused7 : 1;
	};
	static_assert(sizeof(ScenarioVehicleMultiplayerSpawnFlags) == sizeof(std::uint16_t));

	struct ScenarioItemFlags {
		std::uint16_t initially_at_rest : 1;
		std::uint16_t obsolete : 1;
		std::uint16_t does_accelerate : 1;
	};
	static_assert(sizeof(ScenarioItemFlags) == sizeof(std::uint16_t));

	struct ScenarioDeviceGroupFlags {
		std::uint32_t can_change_only_once : 1;
	};
	static_assert(sizeof(ScenarioDeviceGroupFlags) == sizeof(std::uint32_t));

	struct ScenarioDeviceFlags {
		std::uint32_t initially_open : 1;
		std::uint32_t initially_off : 1;
		std::uint32_t can_change_only_once : 1;
		std::uint32_t position_reversed : 1;
		std::uint32_t not_usable_from_any_side : 1;
	};
	static_assert(sizeof(ScenarioDeviceFlags) == sizeof(std::uint32_t));

	struct ScenarioMachineFlags {
		std::uint32_t does_not_operate_automatically : 1;
		std::uint32_t one_sided : 1;
		std::uint32_t never_appears_locked : 1;
		std::uint32_t opened_by_melee_attack : 1;
	};
	static_assert(sizeof(ScenarioMachineFlags) == sizeof(std::uint32_t));

	struct ScenarioControlFlags {
		std::uint32_t usable_from_both_sides : 1;
	};
	static_assert(sizeof(ScenarioControlFlags) == sizeof(std::uint32_t));

	struct ScenarioNetgameEquipmentFlags {
		std::uint32_t levitate : 1;
	};
	static_assert(sizeof(ScenarioNetgameEquipmentFlags) == sizeof(std::uint32_t));

	struct ScenarioStartingEquipmentFlags {
		std::uint32_t no_grenades : 1;
		std::uint32_t plasma_grenades_only : 1;
		std::uint32_t type2_grenades_only : 1;
		std::uint32_t type3_grenades_only : 1;
	};
	static_assert(sizeof(ScenarioStartingEquipmentFlags) == sizeof(std::uint32_t));

	struct ScenarioActorStartingLocationFlags {
		std::uint8_t required : 1;
	};
	static_assert(sizeof(ScenarioActorStartingLocationFlags) == sizeof(std::uint8_t));

	struct ScenarioSquadFlags {
		std::uint32_t unused : 1;
		std::uint32_t never_search : 1;
		std::uint32_t start_timer_immediately : 1;
		std::uint32_t no_timer_delay_forever : 1;
		std::uint32_t magic_sight_after_timer : 1;
		std::uint32_t automatic_migration : 1;
	};
	static_assert(sizeof(ScenarioSquadFlags) == sizeof(std::uint32_t));

	struct ScenarioSquadAttacking {
		std::uint32_t a : 1;
		std::uint32_t b : 1;
		std::uint32_t c : 1;
		std::uint32_t d : 1;
		std::uint32_t e : 1;
		std::uint32_t f : 1;
		std::uint32_t g : 1;
		std::uint32_t h : 1;
		std::uint32_t i : 1;
		std::uint32_t j : 1;
		std::uint32_t k : 1;
		std::uint32_t l : 1;
		std::uint32_t m : 1;
		std::uint32_t n : 1;
		std::uint32_t o : 1;
		std::uint32_t p : 1;
		std::uint32_t q : 1;
		std::uint32_t r : 1;
		std::uint32_t s : 1;
		std::uint32_t t : 1;
		std::uint32_t u : 1;
		std::uint32_t v : 1;
		std::uint32_t w : 1;
		std::uint32_t x : 1;
		std::uint32_t y : 1;
		std::uint32_t z : 1;
	};
	static_assert(sizeof(ScenarioSquadAttacking) == sizeof(std::uint32_t));

	struct ScenarioPlatoonFlags {
		std::uint32_t flee_when_maneuvering : 1;
		std::uint32_t say_advancing_when_maneuver : 1;
		std::uint32_t start_in_defending_state : 1;
	};
	static_assert(sizeof(ScenarioPlatoonFlags) == sizeof(std::uint32_t));

	struct ScenarioEncounterFlags {
		std::uint32_t not_initially_created : 1;
		std::uint32_t respawn_enabled : 1;
		std::uint32_t initially_blind : 1;
		std::uint32_t initially_deaf : 1;
		std::uint32_t initially_braindead : 1;
		std::uint32_t _3d_firing_positions : 1;
		std::uint32_t manual_bsp_index_specified : 1;
	};
	static_assert(sizeof(ScenarioEncounterFlags) == sizeof(std::uint32_t));

	struct ScenarioCommandListFlags {
		std::uint32_t allow_initiative : 1;
		std::uint32_t allow_targeting : 1;
		std::uint32_t disable_looking : 1;
		std::uint32_t disable_communication : 1;
		std::uint32_t disable_falling_damage : 1;
		std::uint32_t manual_bsp_index : 1;
	};
	static_assert(sizeof(ScenarioCommandListFlags) == sizeof(std::uint32_t));

	struct ScenarioAIConversationParticipantFlags {
		std::uint16_t optional : 1;
		std::uint16_t has_alternate : 1;
		std::uint16_t is_alternate : 1;
	};
	static_assert(sizeof(ScenarioAIConversationParticipantFlags) == sizeof(std::uint16_t));

	struct ScenarioAIConversationLineFlags {
		std::uint16_t addressee_look_at_speaker : 1;
		std::uint16_t everyone_look_at_speaker : 1;
		std::uint16_t everyone_look_at_addressee : 1;
		std::uint16_t wait_after_until_told_to_advance : 1;
		std::uint16_t wait_until_speaker_nearby : 1;
		std::uint16_t wait_until_everyone_nearby : 1;
	};
	static_assert(sizeof(ScenarioAIConversationLineFlags) == sizeof(std::uint16_t));

	struct ScenarioAIConversationFlags {
		std::uint16_t stop_if_death : 1;
		std::uint16_t stop_if_damaged : 1;
		std::uint16_t stop_if_visible_enemy : 1;
		std::uint16_t stop_if_alerted_to_enemy : 1;
		std::uint16_t player_must_be_visible : 1;
		std::uint16_t stop_other_actions : 1;
		std::uint16_t keep_trying_to_play : 1;
		std::uint16_t player_must_be_looking : 1;
	};
	static_assert(sizeof(ScenarioAIConversationFlags) == sizeof(std::uint16_t));

	struct ScenarioFlags {
		std::uint16_t cortana_hack : 1;
		std::uint16_t use_demo_ui : 1;
		std::uint16_t color_correction_ntsc_to_srgb : 1;
		std::uint16_t do_not_apply_bungie_campaign_tag_patches : 1;
	};
	static_assert(sizeof(ScenarioFlags) == sizeof(std::uint16_t));

	struct ScenarioScriptNodeFlags {
		std::uint16_t is_primitive : 1;
		std::uint16_t is_script_call : 1;
		std::uint16_t is_global : 1;
		std::uint16_t is_garbage_collectable : 1;
		std::uint16_t is_local_variable : 1;
	};
	static_assert(sizeof(ScenarioScriptNodeFlags) == sizeof(std::uint16_t));

	struct ScenarioSky {
		TagDependency sky;
	};
	static_assert(sizeof(ScenarioSky) == 16);

	struct ScenarioChildScenario {
		TagDependency child_scenario;
		PADDING(16);
	};
	static_assert(sizeof(ScenarioChildScenario) == 32);

	struct ScenarioFunction {
		ScenarioFunctionFlags flags;
		TagString name;
		float period;
		Index scale_period_by;
		WaveFunction function;
		Index scale_function_by;
		WaveFunction wobble_function;
		float wobble_period;
		float wobble_magnitude;
		Fraction square_wave_threshold;
		std::int16_t step_count;
		FunctionType map_to;
		std::int16_t sawtooth_count;
		PADDING(2);
		Index scale_result_by;
		FunctionBoundsMode bounds_mode;
		float bounds[2];
		PADDING(4);
		PADDING(2);
		Index turn_off_with;
		PADDING(16);
		PADDING(16);
	};
	static_assert(sizeof(ScenarioFunction) == 120);

	struct ScenarioEditorComment {
		Point3D position;
		PADDING(16);
		TagDataOffset comment;
	};
	static_assert(sizeof(ScenarioEditorComment) == 48);

	struct ScenarioScavengerHuntObjects {
		TagString name;
		Index object_name_index;
		PADDING(2);
	};
	static_assert(sizeof(ScenarioScavengerHuntObjects) == 36);

	struct ScenarioObjectName {
		TagString name;
		ObjectType object_type;
		Index object_index;
	};
	static_assert(sizeof(ScenarioObjectName) == 36);

	struct ScenarioScenery {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		std::uint16_t bsp_indices;
		PADDING(2);
		std::int8_t appearance_player_index;
		PADDING(3);
		PADDING(16);
		PADDING(8);
		PADDING(8);
	};
	static_assert(sizeof(ScenarioScenery) == 72);

	struct ScenarioSceneryPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioSceneryPalette) == 48);

	struct ScenarioBiped {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
		PADDING(16);
		PADDING(8);
		PADDING(8);
		float body_vitality_modifier;
		ScenarioUnitFlags flags;
		PADDING(8);
		PADDING(32);
	};
	static_assert(sizeof(ScenarioBiped) == 120);

	struct ScenarioBipedPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioBipedPalette) == 48);

	struct ScenarioVehicle {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
		PADDING(16);
		PADDING(8);
		PADDING(8);
		float body_vitality;
		ScenarioUnitFlags flags;
		PADDING(8);
		std::int8_t multiplayer_team_index;
		PADDING(1);
		ScenarioVehicleMultiplayerSpawnFlags multiplayer_spawn_flags;
		PADDING(28);
	};
	static_assert(sizeof(ScenarioVehicle) == 120);

	struct ScenarioVehiclePalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioVehiclePalette) == 48);

	struct ScenarioEquipment {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(2);
		ScenarioItemFlags misc_flags;
		std::int8_t appearance_player_index;
		PADDING(3);
	};
	static_assert(sizeof(ScenarioEquipment) == 40);

	struct ScenarioEquipmentPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioEquipmentPalette) == 48);

	struct ScenarioWeapon {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
		PADDING(16);
		PADDING(8);
		PADDING(8);
		std::int16_t rounds_reserved;
		std::int16_t rounds_loaded;
		ScenarioItemFlags flags;
		PADDING(2);
		PADDING(12);
	};
	static_assert(sizeof(ScenarioWeapon) == 92);

	struct ScenarioWeaponPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioWeaponPalette) == 48);

	struct ScenarioDeviceGroup {
		TagString name;
		float initial_value;
		ScenarioDeviceGroupFlags flags;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioDeviceGroup) == 52);

	struct ScenarioMachine {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
		Index power_group;
		Index position_group;
		ScenarioDeviceFlags device_flags;
		ScenarioMachineFlags machine_flags;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioMachine) == 64);

	struct ScenarioMachinePalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioMachinePalette) == 48);

	struct ScenarioControl {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
		Index power_group;
		Index position_group;
		ScenarioDeviceFlags device_flags;
		ScenarioControlFlags control_flags;
		std::int16_t custom_control_name;
		PADDING(2);
		PADDING(8);
	};
	static_assert(sizeof(ScenarioControl) == 64);

	struct ScenarioControlPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioControlPalette) == 48);

	struct ScenarioLightFixture {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		std::uint16_t bsp_indices;
		PADDING(2);
		std::int8_t appearance_player_index;
		PADDING(3);
		Index power_group;
		Index position_group;
		ScenarioDeviceFlags device_flags;
		ColorRGB color;
		float intensity;
		Angle falloff_angle;
		Angle cutoff_angle;
		PADDING(16);
	};
	static_assert(sizeof(ScenarioLightFixture) == 88);

	struct ScenarioLightFixturePalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioLightFixturePalette) == 48);

	struct ScenarioSoundScenery {
		Index type;
		Index name;
		ScenarioSpawnNotPlaced not_placed;
		std::int16_t desired_permutation;
		Point3D position;
		Euler3D rotation;
		PADDING(4);
		std::int8_t appearance_player_index;
		PADDING(3);
	};
	static_assert(sizeof(ScenarioSoundScenery) == 40);

	struct ScenarioSoundSceneryPalette {
		TagDependency name;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioSoundSceneryPalette) == 48);

	struct ScenarioPlayerStartingProfile {
		TagString name;
		Fraction starting_health_modifier;
		Fraction starting_shield_modifier;
		TagDependency primary_weapon;
		std::int16_t primary_rounds_loaded;
		std::int16_t primary_rounds_reserved;
		TagDependency secondary_weapon;
		std::int16_t secondary_rounds_loaded;
		std::int16_t secondary_rounds_reserved;
		std::int8_t starting_fragmentation_grenade_count;
		std::int8_t starting_plasma_grenade_count;
		std::int8_t starting_grenade_type2_count;
		std::int8_t starting_grenade_type3_count;
		PADDING(20);
	};
	static_assert(sizeof(ScenarioPlayerStartingProfile) == 104);

	struct ScenarioPlayerStartingLocation {
		Point3D position;
		Angle facing;
		Index team_index;
		Index bsp_index;
		ScenarioSpawnType type_0;
		ScenarioSpawnType type_1;
		ScenarioSpawnType type_2;
		ScenarioSpawnType type_3;
		PADDING(24);
	};
	static_assert(sizeof(ScenarioPlayerStartingLocation) == 52);

	struct ScenarioTriggerVolume {
		std::uint16_t unknown;
		PADDING(2);
		TagString name;
		float parameters[3];
		Vector3D rotation_vector_a;
		Vector3D rotation_vector_b;
		Point3D starting_corner;
		Point3D ending_corner_offset;
	};
	static_assert(sizeof(ScenarioTriggerVolume) == 96);

	struct ScenarioRecordedAnimation {
		TagString name;
		std::int8_t version;
		std::int8_t raw_animation_data;
		std::int8_t unit_control_data_version;
		PADDING(1);
		std::int16_t length_of_animation;
		PADDING(2);
		PADDING(4);
		TagDataOffset recorded_animation_event_stream;
	};
	static_assert(sizeof(ScenarioRecordedAnimation) == 64);

	struct ScenarioNetgameFlags {
		Point3D position;
		Angle facing;
		ScenarioNetgameFlagType type;
		Index usage_id;
		TagDependency weapon_group;
		PADDING(112);
	};
	static_assert(sizeof(ScenarioNetgameFlags) == 148);

	struct ScenarioNetgameEquipment {
		ScenarioNetgameEquipmentFlags flags;
		ScenarioSpawnType type_0;
		ScenarioSpawnType type_1;
		ScenarioSpawnType type_2;
		ScenarioSpawnType type_3;
		Index team_index;
		std::int16_t spawn_time;
		std::uint32_t unknown_ffffffff;
		PADDING(44);
		Point3D position;
		Angle facing;
		TagDependency item_collection;
		PADDING(48);
	};
	static_assert(sizeof(ScenarioNetgameEquipment) == 144);

	struct ScenarioStartingEquipment {
		ScenarioStartingEquipmentFlags flags;
		ScenarioSpawnType type_0;
		ScenarioSpawnType type_1;
		ScenarioSpawnType type_2;
		ScenarioSpawnType type_3;
		PADDING(48);
		TagDependency item_collection_1;
		TagDependency item_collection_2;
		TagDependency item_collection_3;
		TagDependency item_collection_4;
		TagDependency item_collection_5;
		TagDependency item_collection_6;
		PADDING(48);
	};
	static_assert(sizeof(ScenarioStartingEquipment) == 204);

	struct ScenarioBSPSwitchTriggerVolume {
		Index trigger_volume;
		Index source;
		Index destination;
		std::uint16_t unknown;
	};
	static_assert(sizeof(ScenarioBSPSwitchTriggerVolume) == 8);

	struct ScenarioDecal {
		Index decal_type;
		std::int8_t yaw;
		std::int8_t pitch;
		Point3D position;
	};
	static_assert(sizeof(ScenarioDecal) == 16);

	struct ScenarioDecalPalette {
		TagDependency reference;
	};
	static_assert(sizeof(ScenarioDecalPalette) == 16);

	struct ScenarioDetailObjectCollectionPalette {
		TagDependency reference;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioDetailObjectCollectionPalette) == 48);

	struct ScenarioActorPalette {
		TagDependency reference;
	};
	static_assert(sizeof(ScenarioActorPalette) == 16);

	struct ScenarioMovePosition {
		Point3D position;
		Angle facing;
		float weight;
		float time[2];
		Index animation;
		std::int8_t sequence_id;
		PADDING(1);
		PADDING(8);
		Index cluster_index;
		PADDING(34);
		std::uint32_t surface_index;
	};
	static_assert(sizeof(ScenarioMovePosition) == 80);

	struct ScenarioActorStartingLocation {
		Point3D position;
		Angle facing;
		Index cluster_index;
		std::int8_t sequence_id;
		ScenarioActorStartingLocationFlags flags;
		ScenarioReturnState return_state;
		ScenarioReturnState initial_state;
		Index actor_type;
		Index command_list;
	};
	static_assert(sizeof(ScenarioActorStartingLocation) == 28);

	struct ScenarioSquad {
		TagString name;
		Index actor_type;
		Index platoon;
		ScenarioReturnState initial_state;
		ScenarioReturnState return_state;
		ScenarioSquadFlags flags;
		ScenarioUniqueLeaderType unique_leader_type;
		PADDING(2);
		PADDING(28);
		PADDING(2);
		Index maneuver_to_squad;
		float squad_delay_time;
		ScenarioSquadAttacking attacking;
		ScenarioSquadAttacking attacking_search;
		ScenarioSquadAttacking attacking_guard;
		ScenarioSquadAttacking defending;
		ScenarioSquadAttacking defending_search;
		ScenarioSquadAttacking defending_guard;
		ScenarioSquadAttacking pursuing;
		PADDING(4);
		PADDING(8);
		std::int16_t normal_diff_count;
		std::int16_t insane_diff_count;
		ScenarioMajorUpgrade major_upgrade;
		PADDING(2);
		std::int16_t respawn_min_actors;
		std::int16_t respawn_max_actors;
		std::int16_t respawn_total;
		PADDING(2);
		float respawn_delay[2];
		PADDING(48);
		TagBlock<ScenarioMovePosition> move_positions;
		TagBlock<ScenarioActorStartingLocation> starting_locations;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioSquad) == 232);

	struct ScenarioPlatoon {
		TagString name;
		ScenarioPlatoonFlags flags;
		PADDING(12);
		ScenarioChangeAttackingDefendingStateWhen change_attacking_defending_state_when;
		Index happens_to;
		PADDING(4);
		PADDING(4);
		ScenarioChangeAttackingDefendingStateWhen maneuver_when;
		Index happens_to_1;
		PADDING(4);
		PADDING(4);
		PADDING(64);
		PADDING(36);
	};
	static_assert(sizeof(ScenarioPlatoon) == 172);

	struct ScenarioFiringPosition {
		Point3D position;
		ScenarioGroupIndex group_index;
		Index cluster_index;
		PADDING(4);
		std::uint32_t surface_index;
	};
	static_assert(sizeof(ScenarioFiringPosition) == 24);

	struct ScenarioEncounter {
		TagString name;
		ScenarioEncounterFlags flags;
		ScenarioTeamIndex team_index;
		std::int16_t one;
		ScenarioSearchBehavior search_behavior;
		Index manual_bsp_index;
		float respawn_delay[2];
		PADDING(74);
		Index precomputed_bsp_index;
		TagBlock<ScenarioSquad> squads;
		TagBlock<ScenarioPlatoon> platoons;
		TagBlock<ScenarioFiringPosition> firing_positions;
		TagBlock<ScenarioPlayerStartingLocation> player_starting_locations;
	};
	static_assert(sizeof(ScenarioEncounter) == 176);

	struct ScenarioCommand {
		ScenarioAtomType atom_type;
		std::int16_t atom_modifier;
		float parameter1;
		float parameter2;
		Index point_1;
		Index point_2;
		Index animation;
		Index script;
		Index recording;
		Index command;
		Index object_name;
		PADDING(6);
	};
	static_assert(sizeof(ScenarioCommand) == 32);

	struct ScenarioCommandPoint {
		Point3D position;
		std::uint32_t surface_index;
		PADDING(4);
	};
	static_assert(sizeof(ScenarioCommandPoint) == 20);

	struct ScenarioCommandList {
		TagString name;
		ScenarioCommandListFlags flags;
		PADDING(8);
		Index manual_bsp_index;
		Index precomputed_bsp_index;
		TagBlock<ScenarioCommand> commands;
		TagBlock<ScenarioCommandPoint> points;
		PADDING(24);
	};
	static_assert(sizeof(ScenarioCommandList) == 96);

	struct ScenarioAIAnimationReference {
		TagString animation_name;
		TagDependency animation_graph;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioAIAnimationReference) == 60);

	struct ScenarioAIScriptReference {
		TagString script_name;
		PADDING(8);
	};
	static_assert(sizeof(ScenarioAIScriptReference) == 40);

	struct ScenarioAIRecordingReference {
		TagString recording_name;
		PADDING(8);
	};
	static_assert(sizeof(ScenarioAIRecordingReference) == 40);

	struct ScenarioAIConversationParticipant {
		PADDING(2);
		ScenarioAIConversationParticipantFlags flags;
		ScenarioSelectionType selection_type;
		ActorType actor_type;
		Index use_this_object;
		Index set_new_name;
		PADDING(12);
		std::uint16_t variant_numbers[6];
		TagString encounter_name;
		std::uint32_t encounter_index;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioAIConversationParticipant) == 84);

	struct ScenarioAIConversationLine {
		ScenarioAIConversationLineFlags flags;
		Index participant;
		ScenarioAddressee addressee;
		Index addressee_participant;
		PADDING(4);
		float line_delay_time;
		PADDING(12);
		TagDependency variant_1;
		TagDependency variant_2;
		TagDependency variant_3;
		TagDependency variant_4;
		TagDependency variant_5;
		TagDependency variant_6;
	};
	static_assert(sizeof(ScenarioAIConversationLine) == 124);

	struct ScenarioAIConversation {
		TagString name;
		ScenarioAIConversationFlags flags;
		PADDING(2);
		float trigger_distance;
		float run_to_player_dist;
		PADDING(36);
		TagBlock<ScenarioAIConversationParticipant> participants;
		TagBlock<ScenarioAIConversationLine> lines;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioAIConversation) == 116);

	struct ScenarioScriptParameter {
		TagString name;
		ScenarioScriptValueType return_type;
		PADDING(2);
	};
	static_assert(sizeof(ScenarioScriptParameter) == 36);

	struct ScenarioScript {
		TagString name;
		ScenarioScriptType script_type;
		ScenarioScriptValueType return_type;
		std::uint32_t root_expression_index;
		PADDING(40);
		TagBlock<ScenarioScriptParameter> parameters;
	};
	static_assert(sizeof(ScenarioScript) == 92);

	struct ScenarioGlobal {
		TagString name;
		ScenarioScriptValueType type;
		PADDING(2);
		PADDING(4);
		std::int32_t initialization_expression_index;
		PADDING(48);
	};
	static_assert(sizeof(ScenarioGlobal) == 92);

	struct ScenarioReference {
		PADDING(24);
		TagDependency reference;
	};
	static_assert(sizeof(ScenarioReference) == 40);

	struct ScenarioSourceFile {
		TagString name;
		TagDataOffset source;
	};
	static_assert(sizeof(ScenarioSourceFile) == 52);

	struct ScenarioCutsceneFlag {
		std::uint32_t unknown;
		TagString name;
		Point3D position;
		Euler2D facing;
		PADDING(36);
	};
	static_assert(sizeof(ScenarioCutsceneFlag) == 92);

	struct ScenarioCutsceneCameraPoint {
		std::uint32_t unknown;
		TagString name;
		PADDING(4);
		Point3D position;
		Euler3D orientation;
		Angle field_of_view;
		PADDING(36);
	};
	static_assert(sizeof(ScenarioCutsceneCameraPoint) == 104);

	struct ScenarioCutsceneTitle {
		std::uint32_t unknown;
		TagString name;
		PADDING(4);
		Rectangle2D text_bounds;
		Index string_index;
		ScenarioTextStyle text_style;
		ScenarioJustification justification;
		PADDING(2);
		ScenarioTextFlags text_flags;
		ColorARGBInt text_color;
		ColorARGBInt shadow_color;
		float fade_in_time;
		float up_time;
		float fade_out_time;
		PADDING(16);
	};
	static_assert(sizeof(ScenarioCutsceneTitle) == 96);

	struct ScenarioBSP {
		std::uint32_t bsp_start;
		std::uint32_t bsp_size;
		std::uint32_t bsp_address;
		PADDING(4);
		TagDependency structure_bsp;
	};
	static_assert(sizeof(ScenarioBSP) == 32);

	struct ScenarioScriptNode {
		std::uint16_t salt;
		std::uint16_t index_union;
		ScenarioScriptValueType type;
		ScenarioScriptNodeFlags flags;
		std::uint32_t next_node;
		std::uint32_t string_offset;
		ScenarioScriptNodeValue data;
	};
	static_assert(sizeof(ScenarioScriptNode) == 20);

	struct ScenarioScriptNodeTable {
		TagString name;
		std::uint16_t maximum_count;
		std::uint16_t element_size;
		std::uint8_t one;
		PADDING(3);
		std::uint32_t data;
		PADDING(2);
		std::uint16_t size;
		std::uint16_t count;
		std::uint16_t next_id;
		std::uint32_t first_element_ptr;
	};
	static_assert(sizeof(ScenarioScriptNodeTable) == 56);

	struct Scenario {
		TagDependency dont_use;
		TagDependency wont_use;
		TagDependency cant_use;
		TagBlock<ScenarioSky> skies;
		ScenarioType type;
		ScenarioFlags flags;
		TagBlock<ScenarioChildScenario> child_scenarios;
		float local_north;
		PADDING(20);
		PADDING(136);
		TagBlock<PredictedResource> predicted_resources;
		TagBlock<ScenarioFunction> functions;
		TagDataOffset editor_scenario_data;
		TagBlock<ScenarioEditorComment> comments;
		TagBlock<ScenarioScavengerHuntObjects> scavenger_hunt_objects;
		PADDING(212);
		TagBlock<ScenarioObjectName> object_names;
		TagBlock<ScenarioScenery> scenery;
		TagBlock<ScenarioSceneryPalette> scenery_palette;
		TagBlock<ScenarioBiped> bipeds;
		TagBlock<ScenarioBipedPalette> biped_palette;
		TagBlock<ScenarioVehicle> vehicles;
		TagBlock<ScenarioVehiclePalette> vehicle_palette;
		TagBlock<ScenarioEquipment> equipment;
		TagBlock<ScenarioEquipmentPalette> equipment_palette;
		TagBlock<ScenarioWeapon> weapons;
		TagBlock<ScenarioWeaponPalette> weapon_palette;
		TagBlock<ScenarioDeviceGroup> device_groups;
		TagBlock<ScenarioMachine> machines;
		TagBlock<ScenarioMachinePalette> machine_palette;
		TagBlock<ScenarioControl> controls;
		TagBlock<ScenarioControlPalette> control_palette;
		TagBlock<ScenarioLightFixture> light_fixtures;
		TagBlock<ScenarioLightFixturePalette> light_fixture_palette;
		TagBlock<ScenarioSoundScenery> sound_scenery;
		TagBlock<ScenarioSoundSceneryPalette> sound_scenery_palette;
		PADDING(84);
		TagBlock<ScenarioPlayerStartingProfile> player_starting_profile;
		TagBlock<ScenarioPlayerStartingLocation> player_starting_locations;
		TagBlock<ScenarioTriggerVolume> trigger_volumes;
		TagBlock<ScenarioRecordedAnimation> recorded_animations;
		TagBlock<ScenarioNetgameFlags> netgame_flags;
		TagBlock<ScenarioNetgameEquipment> netgame_equipment;
		TagBlock<ScenarioStartingEquipment> starting_equipment;
		TagBlock<ScenarioBSPSwitchTriggerVolume> bsp_switch_trigger_volumes;
		TagBlock<ScenarioDecal> decals;
		TagBlock<ScenarioDecalPalette> decal_palette;
		TagBlock<ScenarioDetailObjectCollectionPalette> detail_object_collection_palette;
		PADDING(84);
		TagBlock<ScenarioActorPalette> actor_palette;
		TagBlock<ScenarioEncounter> encounters;
		TagBlock<ScenarioCommandList> command_lists;
		TagBlock<ScenarioAIAnimationReference> ai_animation_references;
		TagBlock<ScenarioAIScriptReference> ai_script_references;
		TagBlock<ScenarioAIRecordingReference> ai_recording_references;
		TagBlock<ScenarioAIConversation> ai_conversations;
		TagDataOffset script_syntax_data;
		TagDataOffset script_string_data;
		TagBlock<ScenarioScript> scripts;
		TagBlock<ScenarioGlobal> globals;
		TagBlock<ScenarioReference> references;
		TagBlock<ScenarioSourceFile> source_files;
		PADDING(24);
		TagBlock<ScenarioCutsceneFlag> cutscene_flags;
		TagBlock<ScenarioCutsceneCameraPoint> cutscene_camera_points;
		TagBlock<ScenarioCutsceneTitle> cutscene_titles;
		PADDING(108);
		TagDependency custom_object_names;
		TagDependency ingame_help_text;
		TagDependency hud_messages;
		TagBlock<ScenarioBSP> structure_bsps;
	};
	static_assert(sizeof(Scenario) == 1456);

}

#pragma pack(pop)

#endif

