// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__GBXMODEL_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__GBXMODEL_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "model.hpp"

namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct GBXModelGeometryPart : public ModelGeometryPart {
		PADDING(1);
		PADDING(1);
		PADDING(1);
		std::uint8_t local_node_count;
		std::uint8_t local_node_indices[22];
		PADDING(2);
	};
	static_assert(sizeof(GBXModelGeometryPart) == 132);

	struct GBXModelGeometry {
		IsUnusedFlag flags;
		PADDING(32);
		TagBlock<GBXModelGeometryPart> parts;
	};
	static_assert(sizeof(GBXModelGeometry) == 48);

	struct Gbxmodel {
		ModelFlags flags;
		std::int32_t node_list_checksum;
		float super_high_detail_cutoff;
		float high_detail_cutoff;
		float medium_detail_cutoff;
		float low_detail_cutoff;
		float super_low_detail_cutoff;
		std::uint16_t super_low_detail_node_count;
		std::uint16_t low_detail_node_count;
		std::uint16_t medium_detail_node_count;
		std::uint16_t high_detail_node_count;
		std::uint16_t super_high_detail_node_count;
		PADDING(2);
		PADDING(8);
		float base_map_u_scale;
		float base_map_v_scale;
		PADDING(116);
		TagBlock<ModelMarker> markers;
		TagBlock<ModelNode> nodes;
		TagBlock<ModelRegion> regions;
		TagBlock<GBXModelGeometry> geometries;
		TagBlock<ModelShaderReference> shaders;
	};
	static_assert(sizeof(Gbxmodel) == 232);

}

#pragma pack(pop)

#endif

