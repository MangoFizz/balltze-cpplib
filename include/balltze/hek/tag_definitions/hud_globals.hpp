// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__HUD_GLOBALS_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__HUD_GLOBALS_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "hud_interface_types.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum HUDGlobalsAnniversaryRemapTargetLanguage : std::uint16_t {
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_ENGLISH = 0,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_FRENCH,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_SPANISH,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_ITALIAN,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_GERMAN,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_TRADITIONAL_CHINESE,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_JAPANESE,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_KOREAN,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_PORTUGUESE,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_LATAM_SPANISH,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_POLISH,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_RUSSIAN,
		H_U_D_GLOBALS_ANNIVERSARY_REMAP_TARGET_LANGUAGE_SIMPLIFIED_CHINESE,
	};

	struct HUDGlobalsWaypointArrowFlags {
		std::uint32_t dont_rotate_when_pointing_offscreen : 1;
	};
	static_assert(sizeof(HUDGlobalsWaypointArrowFlags) == sizeof(std::uint32_t));

	struct HUDGlobalsAnniversaryRemapTargetFlags {
		std::uint16_t legacy_mode : 1;
	};
	static_assert(sizeof(HUDGlobalsAnniversaryRemapTargetFlags) == sizeof(std::uint16_t));

	struct HUDGlobalsButtonIcon {
		Index sequence_index;
		Memory::BigEndian<std::int16_t> width_offset;
		Point2DInt offset_from_reference_corner;
		ColorARGBInt override_icon_color;
		Memory::BigEndian<std::int8_t> frame_rate;
		Memory::BigEndian<HUDInterfaceMessagingFlags> flags;
		Index text_index;
	};
	static_assert(sizeof(HUDGlobalsButtonIcon) == 16);

	struct HUDGlobalsAnniversaryRemapTarget {
		TagDependency target_bitmap;
		Memory::BigEndian<HUDGlobalsAnniversaryRemapTargetLanguage> language;
		Memory::BigEndian<HUDGlobalsAnniversaryRemapTargetFlags> flags;
	};
	static_assert(sizeof(HUDGlobalsAnniversaryRemapTarget) == 20);

	struct HUDGlobalsAnniversaryRemap {
		TagDependency source_bitmap;
		TagBlock<HUDGlobalsAnniversaryRemapTarget> targets;
	};
	static_assert(sizeof(HUDGlobalsAnniversaryRemap) == 28);

	struct HUDGlobalsWaypointArrow {
		TagString name;
		PADDING(8);
		ColorARGBInt color;
		Memory::BigEndian<float> opacity;
		Memory::BigEndian<float> translucency;
		Index on_screen_sequence_index;
		Index off_screen_sequence_index;
		Index occluded_sequence_index;
		PADDING(2);
		PADDING(16);
		Memory::BigEndian<HUDGlobalsWaypointArrowFlags> flags;
		PADDING(24);
	};
	static_assert(sizeof(HUDGlobalsWaypointArrow) == 104);

	struct HudGlobals {
		Memory::BigEndian<HUDInterfaceAnchor> anchor;
		PADDING(2);
		PADDING(32);
		Point2DInt anchor_offset;
		Memory::BigEndian<float> width_scale;
		Memory::BigEndian<float> height_scale;
		Memory::BigEndian<HUDInterfaceScalingFlags> scaling_flags;
		PADDING(2);
		PADDING(20);
		TagDependency single_player_font;
		TagDependency multi_player_font;
		Memory::BigEndian<float> up_time;
		Memory::BigEndian<float> fade_time;
		ColorARGB icon_color;
		ColorARGB text_color;
		Memory::BigEndian<float> text_spacing;
		TagDependency item_message_text;
		TagDependency icon_bitmap;
		TagDependency alternate_icon_text;
		TagBlock<HUDGlobalsButtonIcon> button_icons;
		ColorARGBInt hud_help_default_color;
		ColorARGBInt hud_help_flashing_color;
		Memory::BigEndian<float> hud_help_flash_period;
		Memory::BigEndian<float> hud_help_flash_delay;
		Memory::BigEndian<std::int16_t> hud_help_number_of_flashes;
		Memory::BigEndian<HUDInterfaceFlashFlags> hud_help_flash_flags;
		Memory::BigEndian<float> hud_help_flash_length;
		ColorARGBInt hud_help_disabled_color;
		PADDING(4);
		TagDependency hud_messages;
		ColorARGBInt objective_default_color;
		ColorARGBInt objective_flashing_color;
		Memory::BigEndian<float> objective_flash_period;
		Memory::BigEndian<float> objective_flash_delay;
		Memory::BigEndian<std::int16_t> objective_number_of_flashes;
		Memory::BigEndian<HUDInterfaceFlashFlags> objective_flash_flags;
		Memory::BigEndian<float> objective_flash_length;
		ColorARGBInt objective_disabled_color;
		Memory::BigEndian<std::int16_t> objective_uptime_ticks;
		Memory::BigEndian<std::int16_t> objective_fade_ticks;
		Memory::BigEndian<float> top_offset;
		Memory::BigEndian<float> bottom_offset;
		Memory::BigEndian<float> left_offset;
		Memory::BigEndian<float> right_offset;
		PADDING(32);
		TagDependency arrow_bitmap;
		TagBlock<HUDGlobalsWaypointArrow> waypoint_arrows;
		PADDING(80);
		Memory::BigEndian<float> hud_scale_in_multiplayer;
		PADDING(256);
		TagDependency default_weapon_hud;
		Memory::BigEndian<float> motion_sensor_range;
		Memory::BigEndian<float> motion_sensor_velocity_sensitivity;
		Memory::BigEndian<float> motion_sensor_scale;
		Rectangle2D default_chapter_title_bounds;
		PADDING(44);
		Memory::BigEndian<std::int16_t> hud_damage_top_offset;
		Memory::BigEndian<std::int16_t> hud_damage_bottom_offset;
		Memory::BigEndian<std::int16_t> hud_damage_left_offset;
		Memory::BigEndian<std::int16_t> hud_damage_right_offset;
		PADDING(32);
		TagDependency hud_damage_indicator_bitmap;
		Index hud_damage_sequence_index;
		Index hud_damage_multiplayer_sequence_index;
		ColorARGBInt hud_damage_color;
		PADDING(16);
		ColorARGBInt not_much_time_left_default_color;
		ColorARGBInt not_much_time_left_flashing_color;
		Memory::BigEndian<float> not_much_time_left_flash_period;
		Memory::BigEndian<float> not_much_time_left_flash_delay;
		Memory::BigEndian<std::int16_t> not_much_time_left_number_of_flashes;
		Memory::BigEndian<HUDInterfaceFlashFlags> not_much_time_left_flash_flags;
		Memory::BigEndian<float> not_much_time_left_flash_length;
		ColorARGBInt not_much_time_left_disabled_color;
		PADDING(4);
		ColorARGBInt time_out_flash_default_color;
		ColorARGBInt time_out_flash_flashing_color;
		Memory::BigEndian<float> time_out_flash_flash_period;
		Memory::BigEndian<float> time_out_flash_flash_delay;
		Memory::BigEndian<std::int16_t> time_out_flash_number_of_flashes;
		Memory::BigEndian<HUDInterfaceFlashFlags> time_out_flash_flash_flags;
		Memory::BigEndian<float> time_out_flash_flash_length;
		ColorARGBInt time_out_flash_disabled_color;
		PADDING(4);
		PADDING(40);
		TagDependency carnage_report_bitmap;
		Index loading_begin_text;
		Index loading_end_text;
		Index checkpoint_begin_text;
		Index checkpoint_end_text;
		TagDependency checkpoint_sound;
		TagBlock<HUDGlobalsAnniversaryRemap> anniversary_hud_remaps;
		PADDING(84);
	};
	static_assert(sizeof(HudGlobals) == 1104);

}

#pragma pack(pop)

#endif

