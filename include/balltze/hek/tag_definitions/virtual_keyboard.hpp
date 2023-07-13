// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__VIRTUAL_KEYBOARD_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__VIRTUAL_KEYBOARD_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum VirtualKeyboardKeyboardKey : std::uint16_t {
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_1 = 0,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_2,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_3,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_4,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_5,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_6,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_7,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_8,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_9,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_0,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_A,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_B,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_C,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_D,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_E,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_F,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_G,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_H,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_I,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_J,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_K,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_L,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_M,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_N,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_O,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_P,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_Q,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_R,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_S,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_T,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_U,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_V,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_W,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_X,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_Y,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_Z,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_DONE,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_SHIFT,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_CAPS_LOCK,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_SYMBOLS,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_BACKSPACE,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_LEFT,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_RIGHT,
		VIRTUAL_KEYBOARD_KEYBOARD_KEY_SPACE,
	};

	struct VirtualKeyboardVirtualKey {
		Memory::BigEndian<VirtualKeyboardKeyboardKey> keyboard_key;
		Memory::BigEndian<std::int16_t> lowercase_character;
		Memory::BigEndian<std::int16_t> shift_character;
		Memory::BigEndian<std::int16_t> caps_character;
		Memory::BigEndian<std::int16_t> symbols_character;
		Memory::BigEndian<std::int16_t> shift_caps_character;
		Memory::BigEndian<std::int16_t> shift_symbols_character;
		Memory::BigEndian<std::int16_t> caps_symbols_character;
		TagDependency unselected_background_bitmap;
		TagDependency selected_background_bitmap;
		TagDependency active_background_bitmap;
		TagDependency sticky_background_bitmap;
	};
	static_assert(sizeof(VirtualKeyboardVirtualKey) == 80);

	struct VirtualKeyboard {
		TagDependency display_font;
		TagDependency background_bitmap;
		TagDependency special_key_labels_string_list;
		TagReflexive<VirtualKeyboardVirtualKey> virtual_keys;
	};
	static_assert(sizeof(VirtualKeyboard) == 60);

}

#endif

