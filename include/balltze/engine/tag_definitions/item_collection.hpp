// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__ITEM_COLLECTION_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__ITEM_COLLECTION_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::Engine::TagDefinitions { 
	struct ItemCollectionPermutation {
		PADDING(32);
		float weight;
		TagDependency item;
		PADDING(32);
	};
	static_assert(sizeof(ItemCollectionPermutation) == 84);

	struct ItemCollection {
		TagBlock<ItemCollectionPermutation> permutations;
		std::int16_t default_spawn_time;
		PADDING(2);
		PADDING(76);
	};
	static_assert(sizeof(ItemCollection) == 92);

}

#pragma pack(pop)

#endif

