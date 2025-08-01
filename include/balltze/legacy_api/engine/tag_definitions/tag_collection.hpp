// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__TAG_COLLECTION_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__TAG_COLLECTION_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct TagCollectionTag {
		TagDependency reference;
	};
	static_assert(sizeof(TagCollectionTag) == 16);

	struct TagCollection {
		TagBlock<TagCollectionTag> tags;
	};
	static_assert(sizeof(TagCollection) == 12);

}

#pragma pack(pop)

#endif

