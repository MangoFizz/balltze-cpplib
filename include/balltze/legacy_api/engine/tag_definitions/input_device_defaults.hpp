// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__INPUT_DEVICE_DEFAULTS_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__INPUT_DEVICE_DEFAULTS_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	enum InputDeviceDefaultsDeviceType : std::uint16_t {
		INPUT_DEVICE_DEFAULTS_DEVICE_TYPE_MOUSE_AND_KEYBOARD = 0,
		INPUT_DEVICE_DEFAULTS_DEVICE_TYPE_JOYSTICKS_GAMEPADS_ETC,
		INPUT_DEVICE_DEFAULTS_DEVICE_TYPE_FULL_PROFILE_DEFINITION,
	};

	struct InputDeviceDefaultsFlags {
		std::uint16_t unused : 1;
	};
	static_assert(sizeof(InputDeviceDefaultsFlags) == sizeof(std::uint16_t));

	struct InputDeviceDefaults {
		InputDeviceDefaultsDeviceType device_type;
		InputDeviceDefaultsFlags flags;
		TagDataOffset device_id;
		TagDataOffset profile;
	};
	static_assert(sizeof(InputDeviceDefaults) == 44);

}

#pragma pack(pop)

#endif

