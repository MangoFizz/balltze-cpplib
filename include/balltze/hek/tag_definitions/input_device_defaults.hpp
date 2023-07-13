// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__INPUT_DEVICE_DEFAULTS_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__INPUT_DEVICE_DEFAULTS_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
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
		Memory::BigEndian<InputDeviceDefaultsDeviceType> device_type;
		Memory::BigEndian<InputDeviceDefaultsFlags> flags;
		TagDataOffset device_id;
		TagDataOffset profile;
	};
	static_assert(sizeof(InputDeviceDefaults) == 44);

}

#endif

