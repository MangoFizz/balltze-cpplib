// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__WEAPON_HUD_INTERFACE_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__WEAPON_HUD_INTERFACE_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "hud_interface_types.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum WeaponHUDInterfaceStateAttachedTo : std::uint16_t {
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_TOTAL_AMMO = 0,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_LOADED_AMMO,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_HEAT,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_AGE,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_SECONDARY_WEAPON_TOTAL_AMMO,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_SECONDARY_WEAPON_LOADED_AMMO,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_DISTANCE_TO_TARGET,
		WEAPON_H_U_D_INTERFACE_STATE_ATTACHED_TO_ELEVATION_TO_TARGET,
	};

	enum WeaponHUDInterfaceViewType : std::uint16_t {
		WEAPON_H_U_D_INTERFACE_VIEW_TYPE_ANY = 0,
		WEAPON_H_U_D_INTERFACE_VIEW_TYPE_FULLSCREEN,
		WEAPON_H_U_D_INTERFACE_VIEW_TYPE_SPLITSCREEN,
	};

	enum WeaponHUDInterfaceCrosshairType : std::uint16_t {
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_AIM = 0,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_ZOOM_OVERLAY,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_CHARGE,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_SHOULD_RELOAD,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_HEAT,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_TOTAL_AMMO,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_BATTERY,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_RELOAD_OVERHEAT,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_WHEN_FIRING_AND_NO_AMMO,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_WHEN_THROWING_AND_NO_GRENADE,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_LOW_AMMO_AND_NONE_LEFT_TO_RELOAD,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_SHOULD_RELOAD_SECONDARY_TRIGGER,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_SECONDARY_TOTAL_AMMO,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_SECONDARY_RELOAD,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_WHEN_FIRING_SECONDARY_TRIGGER_WITH_NO_AMMO,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_LOW_SECONDARY_AMMO_AND_NONE_LEFT_TO_RELOAD,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_PRIMARY_TRIGGER_READY,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_SECONDARY_TRIGGER_READY,
		WEAPON_H_U_D_INTERFACE_CROSSHAIR_TYPE_FLASH_WHEN_FIRING_WITH_DEPLETED_BATTERY,
	};

	struct WeaponHUDInterfaceCrosshairTypeFlags {
		std::uint32_t aim : 1;
		std::uint32_t zoom_overlay : 1;
		std::uint32_t charge : 1;
		std::uint32_t should_reload : 1;
		std::uint32_t flash_heat : 1;
		std::uint32_t flash_total_ammo : 1;
		std::uint32_t flash_battery : 1;
		std::uint32_t reload_overheat : 1;
		std::uint32_t flash_when_firing_and_no_ammo : 1;
		std::uint32_t flash_when_throwing_and_no_grenade : 1;
		std::uint32_t low_ammo_and_none_left_to_reload : 1;
		std::uint32_t should_reload_secondary_trigger : 1;
		std::uint32_t flash_secondary_total_ammo : 1;
		std::uint32_t flash_secondary_reload : 1;
		std::uint32_t flash_when_firing_secondary_trigger_with_no_ammo : 1;
		std::uint32_t low_secondary_ammo_and_none_left_to_reload : 1;
		std::uint32_t primary_trigger_ready : 1;
		std::uint32_t secondary_trigger_ready : 1;
		std::uint32_t flash_when_firing_with_depleted_battery : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceCrosshairTypeFlags) == sizeof(std::uint32_t));

	struct WeaponHUDInterfaceNumberWeaponSpecificFlags {
		std::uint16_t divide_number_by_clip_size : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceNumberWeaponSpecificFlags) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceCrosshairOverlayFlags {
		std::uint32_t flashes_when_active : 1;
		std::uint32_t not_a_sprite : 1;
		std::uint32_t show_only_when_zoomed : 1;
		std::uint32_t show_sniper_data : 1;
		std::uint32_t hide_area_outside_reticle : 1;
		std::uint32_t one_zoom_level : 1;
		std::uint32_t dont_show_when_zoomed : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceCrosshairOverlayFlags) == sizeof(std::uint32_t));

	struct WeaponHUDInterfaceOverlayType {
		std::uint16_t show_on_flashing : 1;
		std::uint16_t show_on_empty : 1;
		std::uint16_t show_on_reload_overheating : 1;
		std::uint16_t show_on_default : 1;
		std::uint16_t show_always : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceOverlayType) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceScreenEffectDefinitionMaskFlags {
		std::uint16_t only_when_zoomed : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceScreenEffectDefinitionMaskFlags) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceScreenEffectDefinitionNightVisionFlags {
		std::uint16_t only_when_zoomed : 1;
		std::uint16_t connect_to_flashlight : 1;
		std::uint16_t masked : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceScreenEffectDefinitionNightVisionFlags) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceScreenEffectDefinitionDesaturationFlags {
		std::uint16_t only_when_zoomed : 1;
		std::uint16_t connect_to_flashlight : 1;
		std::uint16_t additive : 1;
		std::uint16_t masked : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceScreenEffectDefinitionDesaturationFlags) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceFlags {
		std::uint16_t use_parent_hud_flashing_parameters : 1;
	};
	static_assert(sizeof(WeaponHUDInterfaceFlags) == sizeof(std::uint16_t));

	struct WeaponHUDInterfaceStaticElement {
		WeaponHUDInterfaceStateAttachedTo state_attached_to;
		PADDING(2);
		WeaponHUDInterfaceViewType allowed_view_type;
		HUDInterfaceChildAnchor anchor;
		PADDING(28);
		Point2DInt anchor_offset;
		float width_scale;
		float height_scale;
		HUDInterfaceScalingFlags scaling_flags;
		PADDING(2);
		PADDING(20);
		TagDependency interface_bitmap;
		ColorARGBInt default_color;
		ColorARGBInt flashing_color;
		float flash_period;
		float flash_delay;
		std::int16_t number_of_flashes;
		HUDInterfaceFlashFlags flash_flags;
		float flash_length;
		ColorARGBInt disabled_color;
		PADDING(4);
		Index sequence_index;
		PADDING(2);
		TagBlock<HUDInterfaceMultitextureOverlay> multitexture_overlays;
		PADDING(4);
		PADDING(40);
	};
	static_assert(sizeof(WeaponHUDInterfaceStaticElement) == 180);

	struct WeaponHUDInterfaceMeter {
		WeaponHUDInterfaceStateAttachedTo state_attached_to;
		PADDING(2);
		WeaponHUDInterfaceViewType allowed_view_type;
		HUDInterfaceChildAnchor anchor;
		PADDING(28);
		Point2DInt anchor_offset;
		float width_scale;
		float height_scale;
		HUDInterfaceScalingFlags scaling_flags;
		PADDING(2);
		PADDING(20);
		TagDependency meter_bitmap;
		ColorARGBInt color_at_meter_minimum;
		ColorARGBInt color_at_meter_maximum;
		ColorARGBInt flash_color;
		ColorARGBInt empty_color;
		HUDInterfaceMeterFlags flags;
		std::int8_t minimum_meter_value;
		Index sequence_index;
		std::int8_t alpha_multiplier;
		std::int8_t alpha_bias;
		std::int16_t value_scale;
		float opacity;
		float translucency;
		ColorARGBInt disabled_color;
		float min_alpha;
		PADDING(12);
		PADDING(40);
	};
	static_assert(sizeof(WeaponHUDInterfaceMeter) == 180);

	struct WeaponHUDInterfaceNumber {
		WeaponHUDInterfaceStateAttachedTo state_attached_to;
		PADDING(2);
		WeaponHUDInterfaceViewType allowed_view_type;
		HUDInterfaceChildAnchor anchor;
		PADDING(28);
		Point2DInt anchor_offset;
		float width_scale;
		float height_scale;
		HUDInterfaceScalingFlags scaling_flags;
		PADDING(2);
		PADDING(20);
		ColorARGBInt default_color;
		ColorARGBInt flashing_color;
		float flash_period;
		float flash_delay;
		std::int16_t number_of_flashes;
		HUDInterfaceFlashFlags flash_flags;
		float flash_length;
		ColorARGBInt disabled_color;
		PADDING(4);
		std::int8_t maximum_number_of_digits;
		HUDInterfaceNumberFlags flags;
		std::int8_t number_of_fractional_digits;
		PADDING(1);
		PADDING(12);
		WeaponHUDInterfaceNumberWeaponSpecificFlags weapon_specific_flags;
		PADDING(2);
		PADDING(36);
	};
	static_assert(sizeof(WeaponHUDInterfaceNumber) == 160);

	struct WeaponHUDInterfaceCrosshairOverlay {
		Point2DInt anchor_offset;
		float width_scale;
		float height_scale;
		HUDInterfaceScalingFlags scaling_flags;
		PADDING(2);
		PADDING(20);
		ColorARGBInt default_color;
		ColorARGBInt flashing_color;
		float flash_period;
		float flash_delay;
		std::int16_t number_of_flashes;
		HUDInterfaceFlashFlags flash_flags;
		float flash_length;
		ColorARGBInt disabled_color;
		PADDING(4);
		std::int16_t frame_rate;
		Index sequence_index;
		WeaponHUDInterfaceCrosshairOverlayFlags flags;
		PADDING(32);
	};
	static_assert(sizeof(WeaponHUDInterfaceCrosshairOverlay) == 108);

	struct WeaponHUDInterfaceCrosshair {
		WeaponHUDInterfaceCrosshairType crosshair_type;
		PADDING(2);
		WeaponHUDInterfaceViewType allowed_view_type;
		PADDING(2);
		PADDING(28);
		TagDependency crosshair_bitmap;
		TagBlock<WeaponHUDInterfaceCrosshairOverlay> crosshair_overlays;
		PADDING(40);
	};
	static_assert(sizeof(WeaponHUDInterfaceCrosshair) == 104);

	struct WeaponHUDInterfaceOverlay {
		Point2DInt anchor_offset;
		float width_scale;
		float height_scale;
		HUDInterfaceScalingFlags scaling_flags;
		PADDING(2);
		PADDING(20);
		ColorARGBInt default_color;
		ColorARGBInt flashing_color;
		float flash_period;
		float flash_delay;
		std::int16_t number_of_flashes;
		HUDInterfaceFlashFlags flash_flags;
		float flash_length;
		ColorARGBInt disabled_color;
		PADDING(4);
		std::int16_t frame_rate;
		PADDING(2);
		Index sequence_index;
		WeaponHUDInterfaceOverlayType type;
		HUDInterfaceOverlayFlashFlags flags;
		PADDING(16);
		PADDING(40);
	};
	static_assert(sizeof(WeaponHUDInterfaceOverlay) == 136);

	struct WeaponHUDInterfaceOverlayElement {
		WeaponHUDInterfaceStateAttachedTo state_attached_to;
		PADDING(2);
		WeaponHUDInterfaceViewType allowed_view_type;
		HUDInterfaceChildAnchor anchor;
		PADDING(28);
		TagDependency overlay_bitmap;
		TagBlock<WeaponHUDInterfaceOverlay> overlays;
		PADDING(40);
	};
	static_assert(sizeof(WeaponHUDInterfaceOverlayElement) == 104);

	struct WeaponHUDInterfaceScreenEffect {
		PADDING(4);
		WeaponHUDInterfaceScreenEffectDefinitionMaskFlags mask_flags;
		PADDING(2);
		PADDING(16);
		TagDependency mask_fullscreen;
		TagDependency mask_splitscreen;
		PADDING(8);
		WeaponHUDInterfaceScreenEffectDefinitionMaskFlags convolution_flags;
		PADDING(2);
		Angle convolution_fov_in_bounds[2];
		float convolution_radius_out_bounds[2];
		PADDING(24);
		WeaponHUDInterfaceScreenEffectDefinitionNightVisionFlags even_more_flags;
		std::int16_t night_vision_script_source;
		Fraction night_vision_intensity;
		PADDING(24);
		WeaponHUDInterfaceScreenEffectDefinitionDesaturationFlags desaturation_flags;
		std::int16_t desaturation_script_source;
		Fraction desaturation_intensity;
		ColorRGB effect_tint;
		PADDING(24);
	};
	static_assert(sizeof(WeaponHUDInterfaceScreenEffect) == 184);

	struct WeaponHudInterface {
		TagDependency child_hud;
		WeaponHUDInterfaceFlags flags;
		PADDING(2);
		std::int16_t total_ammo_cutoff;
		std::int16_t loaded_ammo_cutoff;
		std::int16_t heat_cutoff;
		std::int16_t age_cutoff;
		PADDING(32);
		HUDInterfaceAnchor anchor;
		PADDING(2);
		PADDING(32);
		TagBlock<WeaponHUDInterfaceStaticElement> static_elements;
		TagBlock<WeaponHUDInterfaceMeter> meter_elements;
		TagBlock<WeaponHUDInterfaceNumber> number_elements;
		TagBlock<WeaponHUDInterfaceCrosshair> crosshairs;
		TagBlock<WeaponHUDInterfaceOverlayElement> overlay_elements;
		WeaponHUDInterfaceCrosshairTypeFlags crosshair_types;
		PADDING(12);
		TagBlock<WeaponHUDInterfaceScreenEffect> screen_effect;
		PADDING(132);
		Index sequence_index;
		std::int16_t width_offset;
		Point2DInt offset_from_reference_corner;
		ColorARGBInt override_icon_color;
		std::int8_t frame_rate;
		HUDInterfaceMessagingFlags more_flags;
		Index text_index;
		PADDING(48);
	};
	static_assert(sizeof(WeaponHudInterface) == 380);

}

#pragma pack(pop)

#endif

