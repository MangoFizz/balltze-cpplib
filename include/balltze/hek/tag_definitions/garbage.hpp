// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__GARBAGE_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__GARBAGE_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "item.hpp"

namespace Balltze::HEK::TagDefinitions { 
	struct Garbage : public Item {
		PADDING(168);
	};
	static_assert(sizeof(Garbage) == 944);

}

#pragma pack(pop)

#endif

