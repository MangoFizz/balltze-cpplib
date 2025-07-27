// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__STRING_LIST_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__STRING_LIST_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct StringListString {
		TagDataOffset string;
	};
	static_assert(sizeof(StringListString) == 20);

	struct StringList {
		TagBlock<StringListString> strings;
	};
	static_assert(sizeof(StringList) == 12);

}

#pragma pack(pop)

#endif

