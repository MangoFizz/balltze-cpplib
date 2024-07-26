// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__CAMERA_TRACK_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__CAMERA_TRACK_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::HEK::TagDefinitions { 
	struct CameraTrackControlPoint {
		Point3D position;
		Quaternion orientation;
		PADDING(32);
	};
	static_assert(sizeof(CameraTrackControlPoint) == 60);

	struct CameraTrack {
		Memory::BigEndian<IsUnusedFlag> flags;
		TagBlock<CameraTrackControlPoint> control_points;
		PADDING(32);
	};
	static_assert(sizeof(CameraTrack) == 48);

}

#pragma pack(pop)

#endif

