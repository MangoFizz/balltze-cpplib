// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__EQUIPMENT_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__EQUIPMENT_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"
#include "item.hpp"

namespace Balltze::HEK::TagDefinitions { 
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
		Memory::BigEndian<EquipmentPowerupType> powerup_type;
		Memory::BigEndian<GrenadeType> grenade_type;
		Memory::BigEndian<float> powerup_time;
		TagDependency pickup_sound;
		PADDING(144);
	};
	static_assert(sizeof(Equipment) == 944);

}

#endif

