// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__MATERIAL_EFFECTS_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__MATERIAL_EFFECTS_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::HEK::TagDefinitions { 
	struct MaterialEffectsMaterialEffectMaterial {
		TagDependency effect;
		TagDependency sound;
		PADDING(16);
	};
	static_assert(sizeof(MaterialEffectsMaterialEffectMaterial) == 48);

	struct MaterialEffectsMaterialEffect {
		TagBlock<MaterialEffectsMaterialEffectMaterial> materials;
		PADDING(16);
	};
	static_assert(sizeof(MaterialEffectsMaterialEffect) == 28);

	struct MaterialEffects {
		TagBlock<MaterialEffectsMaterialEffect> effects;
		PADDING(128);
	};
	static_assert(sizeof(MaterialEffects) == 140);

}

#pragma pack(pop)

#endif

