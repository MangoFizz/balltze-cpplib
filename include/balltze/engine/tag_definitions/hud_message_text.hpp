// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__HUD_MESSAGE_TEXT_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__HUD_MESSAGE_TEXT_HPP

#include "../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::Engine::TagDefinitions { 
	struct HUDMessageTextElement {
		std::int8_t type;
		std::uint8_t data;
	};
	static_assert(sizeof(HUDMessageTextElement) == 2);

	struct HUDMessageTextMessage {
		TagString name;
		Index start_index_into_text_blob;
		Index start_index_of_message_block;
		std::uint8_t panel_count;
		PADDING(3);
		PADDING(24);
	};
	static_assert(sizeof(HUDMessageTextMessage) == 64);

	struct HudMessageText {
		TagDataOffset text_data;
		TagBlock<HUDMessageTextElement> message_elements;
		TagBlock<HUDMessageTextMessage> messages;
		PADDING(84);
	};
	static_assert(sizeof(HudMessageText) == 128);

}

#pragma pack(pop)

#endif

