// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__EQUIPMENT_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__EQUIPMENT_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "item.hpp"

namespace Balltze::Engine::TagDefinitions { 
	enum EquipmentPowerupType : std::uint16_t {
		EQUIPMENT_POWERUP_TYPE_NONE = 0,
		EQUIPMENT_POWERUP_TYPE_DOUBLE_SPEED,
		EQUIPMENT_POWERUP_TYPE_OVER_SHIELD,
		EQUIPMENT_POWERUP_TYPE_ACTIVE_CAMOUFLAGE,
		EQUIPMENT_POWERUP_TYPE_FULL_SPECTRUM_VISION,
		EQUIPMENT_POWERUP_TYPE_HEALTH,
		EQUIPMENT_POWERUP_TYPE_GRENADE,
	};

	struct Equipment : public Item {
		EquipmentPowerupType powerup_type;
		GrenadeType grenade_type;
		float powerup_time;
		TagDependency pickup_sound;
		PADDING(144);
	};
	static_assert(sizeof(Equipment) == 944);

}

#pragma pack(pop)

#endif

