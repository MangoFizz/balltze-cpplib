// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__DEVICE_CONTROL_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__DEVICE_CONTROL_HPP

#include "../../memory.hpp"
#include "../data_types.hpp"
#include "enum.hpp"
#include "bitfield.hpp"
#include "device.hpp"

namespace Balltze::Engine::TagDefinitions { 
	enum DeviceType : std::uint16_t {
		DEVICE_TYPE_TOGGLE_SWITCH = 0,
		DEVICE_TYPE_ON_BUTTON,
		DEVICE_TYPE_OFF_BUTTON,
		DEVICE_TYPE_CALL_BUTTON,
	};

	enum DeviceTriggersWhen : std::uint16_t {
		DEVICE_TRIGGERS_WHEN_TOUCHED_BY_PLAYER = 0,
		DEVICE_TRIGGERS_WHEN_DESTROYED,
	};

	struct DeviceControl : public Device {
		DeviceType type;
		DeviceTriggersWhen triggers_when;
		float call_value;
		PADDING(80);
		TagDependency on;
		TagDependency off;
		TagDependency deny;
	};
	static_assert(sizeof(DeviceControl) == 792);

}

#endif

