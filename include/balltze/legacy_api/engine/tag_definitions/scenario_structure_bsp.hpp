// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__ENGINE__TAG_DEFINITION__SCENARIO_STRUCTURE_BSP_HPP
#define BALLTZE_API__ENGINE__TAG_DEFINITION__SCENARIO_STRUCTURE_BSP_HPP

#include "../../../memory.hpp"
#include "../tag.hpp"
#include "../script.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)


namespace Balltze::LegacyApi::Engine::TagDefinitions { 
	struct ScenarioStructureBSPMaterialFlags {
		std::uint16_t coplanar : 1;
		std::uint16_t fog_plane : 1;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterialFlags) == sizeof(std::uint16_t));

	struct ScenarioStructureBSPClusterPortalFlags {
		std::uint32_t ai_can_simply_not_hear_through_all_this_amazing_stuff_darn_it : 1;
	};
	static_assert(sizeof(ScenarioStructureBSPClusterPortalFlags) == sizeof(std::uint32_t));

	struct ScenarioStructureBSPCollisionMaterial {
		TagDependency shader;
		PADDING(2);
		MaterialType material;
	};
	static_assert(sizeof(ScenarioStructureBSPCollisionMaterial) == 20);

	struct ScenarioStructureBSPNode {
		std::uint16_t node_stuff[3];
	};
	static_assert(sizeof(ScenarioStructureBSPNode) == 6);

	struct ScenarioStructureBSPLeaf {
		std::uint16_t vertices[3];
		PADDING(2);
		Index cluster;
		std::int16_t surface_reference_count;
		std::int32_t surface_references;
	};
	static_assert(sizeof(ScenarioStructureBSPLeaf) == 16);

	struct ScenarioStructureBSPSurfaceReference {
		std::int32_t surface;
		std::int32_t node;
	};
	static_assert(sizeof(ScenarioStructureBSPSurfaceReference) == 8);

	struct ScenarioStructureBSPSurface {
		Index vertex0_index;
		Index vertex1_index;
		Index vertex2_index;
	};
	static_assert(sizeof(ScenarioStructureBSPSurface) == 6);

	struct ScenarioStructureBSPMaterialUncompressedRenderedVertex {
		Point3D position;
		Vector3D normal;
		Vector3D binormal;
		Vector3D tangent;
		Point2D texture_coords;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterialUncompressedRenderedVertex) == 56);

	struct ScenarioStructureBSPMaterialCompressedRenderedVertex {
		Point3D position;
		std::uint32_t normal;
		std::uint32_t binormal;
		std::uint32_t tangent;
		Point2D texture_coords;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterialCompressedRenderedVertex) == 32);

	struct ScenarioStructureBSPMaterialUncompressedLightmapVertex {
		Vector3D normal;
		Point2D texture_coords;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterialUncompressedLightmapVertex) == 20);

	struct ScenarioStructureBSPMaterialCompressedLightmapVertex {
		std::uint32_t normal;
		std::int16_t texture_coordinate_x;
		std::int16_t texture_coordinate_y;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterialCompressedLightmapVertex) == 8);

	struct ScenarioStructureBSPMaterial {
		TagDependency shader;
		Index shader_permutation;
		ScenarioStructureBSPMaterialFlags flags;
		std::int32_t surfaces;
		std::int32_t surface_count;
		Point3D centroid;
		ColorRGB ambient_color;
		std::int16_t distant_light_count;
		PADDING(2);
		ColorRGB distant_light_0_color;
		Vector3D distant_light_0_direction;
		ColorRGB distant_light_1_color;
		Vector3D distant_light_1_direction;
		PADDING(12);
		ColorARGB reflection_tint;
		Vector3D shadow_vector;
		ColorRGB shadow_color;
		Plane3D plane;
		Index breakable_surface;
		PADDING(2);
		VertexType rendered_vertices_type;
		PADDING(2);
		std::uint32_t rendered_vertices_count;
		std::uint32_t rendered_vertices_offset;
		PADDING(4);
		std::byte *rendered_vertices_index_pointer;
		VertexType lightmap_vertices_type;
		PADDING(2);
		std::uint32_t lightmap_vertices_count;
		std::uint32_t lightmap_vertices_offset;
		PADDING(4);
		std::byte *lightmap_vertices_index_pointer;
		TagDataOffset uncompressed_vertices;
		TagDataOffset compressed_vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPMaterial) == 256);

	struct ScenarioStructureBSPLightmap {
		Index bitmap;
		PADDING(2);
		PADDING(16);
		TagBlock<ScenarioStructureBSPMaterial> materials;
	};
	static_assert(sizeof(ScenarioStructureBSPLightmap) == 32);

	struct ScenarioStructureBSPLensFlare {
		TagDependency lens;
	};
	static_assert(sizeof(ScenarioStructureBSPLensFlare) == 16);

	struct ScenarioStructureBSPLensFlareMarker {
		Point3D position;
		std::int8_t direction_i_component;
		std::int8_t direction_j_component;
		std::int8_t direction_k_component;
		std::int8_t lens_flare_index;
	};
	static_assert(sizeof(ScenarioStructureBSPLensFlareMarker) == 16);

	struct ScenarioStructureBSPSubclusterSurfaceIndex {
		std::int32_t index;
	};
	static_assert(sizeof(ScenarioStructureBSPSubclusterSurfaceIndex) == 4);

	struct ScenarioStructureBSPSubcluster {
		float world_bounds_x[2];
		float world_bounds_y[2];
		float world_bounds_z[2];
		TagBlock<ScenarioStructureBSPSubclusterSurfaceIndex> surface_indices;
	};
	static_assert(sizeof(ScenarioStructureBSPSubcluster) == 36);

	struct ScenarioStructureBSPClusterSurfaceIndex {
		std::int32_t index;
	};
	static_assert(sizeof(ScenarioStructureBSPClusterSurfaceIndex) == 4);

	struct ScenarioStructureBSPMirrorVertex {
		Point3D point;
	};
	static_assert(sizeof(ScenarioStructureBSPMirrorVertex) == 12);

	struct ScenarioStructureBSPMirror {
		Plane3D plane;
		PADDING(20);
		TagDependency shader;
		TagBlock<ScenarioStructureBSPMirrorVertex> vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPMirror) == 64);

	struct ScenarioStructureBSPClusterPortalIndex {
		Index portal;
	};
	static_assert(sizeof(ScenarioStructureBSPClusterPortalIndex) == 2);

	struct ScenarioStructureBSPCluster {
		Index sky;
		Index fog;
		Index background_sound;
		Index sound_environment;
		Index weather;
		Index transition_structure_bsp;
		Index first_decal_index;
		std::uint16_t decal_count;
		PADDING(24);
		TagBlock<PredictedResource> predicted_resources;
		TagBlock<ScenarioStructureBSPSubcluster> subclusters;
		Index first_lens_flare_marker_index;
		std::int16_t lens_flare_marker_count;
		TagBlock<ScenarioStructureBSPClusterSurfaceIndex> surface_indices;
		TagBlock<ScenarioStructureBSPMirror> mirrors;
		TagBlock<ScenarioStructureBSPClusterPortalIndex> portals;
	};
	static_assert(sizeof(ScenarioStructureBSPCluster) == 104);

	struct ScenarioStructureBSPClusterPortalVertex {
		Point3D point;
	};
	static_assert(sizeof(ScenarioStructureBSPClusterPortalVertex) == 12);

	struct ScenarioStructureBSPClusterPortal {
		Index front_cluster;
		Index back_cluster;
		std::int32_t plane_index;
		Point3D centroid;
		float bounding_radius;
		ScenarioStructureBSPClusterPortalFlags flags;
		PADDING(24);
		TagBlock<ScenarioStructureBSPClusterPortalVertex> vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPClusterPortal) == 64);

	struct ScenarioStructureBSPBreakableSurface {
		Point3D centroid;
		float radius;
		std::int32_t collision_surface_index;
		PADDING(28);
	};
	static_assert(sizeof(ScenarioStructureBSPBreakableSurface) == 48);

	struct ScenarioStructureBSPFogPlaneVertex {
		Point3D point;
	};
	static_assert(sizeof(ScenarioStructureBSPFogPlaneVertex) == 12);

	struct ScenarioStructureBSPFogPlane {
		Index front_region;
		MaterialType material_type;
		Plane3D plane;
		TagBlock<ScenarioStructureBSPFogPlaneVertex> vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPFogPlane) == 32);

	struct ScenarioStructureBSPFogRegion {
		PADDING(36);
		Index fog;
		Index weather_palette;
	};
	static_assert(sizeof(ScenarioStructureBSPFogRegion) == 40);

	struct ScenarioStructureBSPFogPalette {
		TagString name;
		TagDependency fog;
		PADDING(4);
		TagString fog_scale_function;
		PADDING(52);
	};
	static_assert(sizeof(ScenarioStructureBSPFogPalette) == 136);

	struct ScenarioStructureBSPWeatherPalette {
		TagString name;
		TagDependency particle_system;
		PADDING(4);
		TagString particle_system_scale_function;
		PADDING(44);
		TagDependency wind;
		Vector3D wind_direction;
		float wind_magnitude;
		PADDING(4);
		TagString wind_scale_function;
		PADDING(44);
	};
	static_assert(sizeof(ScenarioStructureBSPWeatherPalette) == 240);

	struct ScenarioStructureBSPWeatherPolyhedronPlane {
		Plane3D plane;
	};
	static_assert(sizeof(ScenarioStructureBSPWeatherPolyhedronPlane) == 16);

	struct ScenarioStructureBSPWeatherPolyhedron {
		Point3D bounding_sphere_center;
		float bounding_sphere_radius;
		PADDING(4);
		TagBlock<ScenarioStructureBSPWeatherPolyhedronPlane> planes;
	};
	static_assert(sizeof(ScenarioStructureBSPWeatherPolyhedron) == 32);

	struct ScenarioStructureBSPPathfindingSurface {
		std::int8_t data;
	};
	static_assert(sizeof(ScenarioStructureBSPPathfindingSurface) == 1);

	struct ScenarioStructureBSPPathfindingEdge {
		std::int8_t midpoint;
	};
	static_assert(sizeof(ScenarioStructureBSPPathfindingEdge) == 1);

	struct ScenarioStructureBSPBackgroundSoundPalette {
		TagString name;
		TagDependency background_sound;
		PADDING(4);
		TagString scale_function;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioStructureBSPBackgroundSoundPalette) == 116);

	struct ScenarioStructureBSPSoundEnvironmentPalette {
		TagString name;
		TagDependency sound_environment;
		PADDING(32);
	};
	static_assert(sizeof(ScenarioStructureBSPSoundEnvironmentPalette) == 80);

	struct ScenarioStructureBSPMarker {
		TagString name;
		Quaternion rotation;
		Point3D position;
	};
	static_assert(sizeof(ScenarioStructureBSPMarker) == 60);

	struct ScenarioStructureBSPGlobalDetailObjectCell {
		std::int16_t cell_x;
		std::int16_t cell_y;
		std::int16_t cell_z;
		std::int16_t offset_z;
		std::int32_t valid_layers_flags;
		std::int32_t start_index;
		std::int32_t count_index;
		PADDING(12);
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalDetailObjectCell) == 32);

	struct ScenarioStructureBSPGlobalDetailObject {
		std::int8_t position_x;
		std::int8_t position_y;
		std::int8_t position_z;
		std::int8_t data;
		std::int16_t color;
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalDetailObject) == 6);

	struct ScenarioStructureBSPGlobalDetailObjectCount {
		std::int16_t count;
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalDetailObjectCount) == 2);

	struct ScenarioStructureBSPGlobalZReferenceVector {
		float z_reference_i;
		float z_reference_j;
		float z_reference_k;
		float z_reference_l;
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalZReferenceVector) == 16);

	struct ScenarioStructureBSPDetailObjectData {
		TagBlock<ScenarioStructureBSPGlobalDetailObjectCell> cells;
		TagBlock<ScenarioStructureBSPGlobalDetailObject> instances;
		TagBlock<ScenarioStructureBSPGlobalDetailObjectCount> counts;
		TagBlock<ScenarioStructureBSPGlobalZReferenceVector> z_reference_vectors;
		std::uint8_t bullshit;
		PADDING(3);
		PADDING(12);
	};
	static_assert(sizeof(ScenarioStructureBSPDetailObjectData) == 64);

	struct ScenarioStructureBSPRuntimeDecal {
		Point3D position;
		Index decal_type;
		std::int8_t yaw;
		std::int8_t pitch;
	};
	static_assert(sizeof(ScenarioStructureBSPRuntimeDecal) == 16);

	struct ScenarioStructureBSPMapLeafFaceVertex {
		Point2D vertex;
	};
	static_assert(sizeof(ScenarioStructureBSPMapLeafFaceVertex) == 8);

	struct ScenarioStructureBSPMapLeafFace {
		std::int32_t node_index;
		TagBlock<ScenarioStructureBSPMapLeafFaceVertex> vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPMapLeafFace) == 16);

	struct ScenarioStructureBSPMapLeafPortalIndex {
		std::int32_t portal_index;
	};
	static_assert(sizeof(ScenarioStructureBSPMapLeafPortalIndex) == 4);

	struct ScenarioStructureBSPGlobalMapLeaf {
		TagBlock<ScenarioStructureBSPMapLeafFace> faces;
		TagBlock<ScenarioStructureBSPMapLeafPortalIndex> portal_indices;
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalMapLeaf) == 24);

	struct ScenarioStructureBSPLeafPortalVertex {
		Point3D point;
	};
	static_assert(sizeof(ScenarioStructureBSPLeafPortalVertex) == 12);

	struct ScenarioStructureBSPGlobalLeafPortal {
		std::int32_t plane_index;
		std::int32_t back_leaf_index;
		std::int32_t front_leaf_index;
		TagBlock<ScenarioStructureBSPLeafPortalVertex> vertices;
	};
	static_assert(sizeof(ScenarioStructureBSPGlobalLeafPortal) == 24);

	struct ScenarioStructureBsp {
		TagDependency lightmaps_bitmap;
		float vehicle_floor;
		float vehicle_ceiling;
		PADDING(20);
		ColorRGB default_ambient_color;
		PADDING(4);
		ColorRGB default_distant_light_0_color;
		Vector3D default_distant_light_0_direction;
		ColorRGB default_distant_light_1_color;
		Vector3D default_distant_light_1_direction;
		PADDING(12);
		ColorARGB default_reflection_tint;
		Vector3D default_shadow_vector;
		ColorRGB default_shadow_color;
		PADDING(4);
		TagBlock<ScenarioStructureBSPCollisionMaterial> collision_materials;
		TagBlock<ModelCollisionGeometryBSP> collision_bsp;
		TagBlock<ScenarioStructureBSPNode> nodes;
		float world_bounds_x[2];
		float world_bounds_y[2];
		float world_bounds_z[2];
		TagBlock<ScenarioStructureBSPLeaf> leaves;
		TagBlock<ScenarioStructureBSPSurfaceReference> leaf_surfaces;
		TagBlock<ScenarioStructureBSPSurface> surfaces;
		TagBlock<ScenarioStructureBSPLightmap> lightmaps;
		PADDING(12);
		TagBlock<ScenarioStructureBSPLensFlare> lens_flares;
		TagBlock<ScenarioStructureBSPLensFlareMarker> lens_flare_markers;
		TagBlock<ScenarioStructureBSPCluster> clusters;
		TagDataOffset cluster_data;
		TagBlock<ScenarioStructureBSPClusterPortal> cluster_portals;
		PADDING(12);
		TagBlock<ScenarioStructureBSPBreakableSurface> breakable_surfaces;
		TagBlock<ScenarioStructureBSPFogPlane> fog_planes;
		TagBlock<ScenarioStructureBSPFogRegion> fog_regions;
		TagBlock<ScenarioStructureBSPFogPalette> fog_palette;
		PADDING(24);
		TagBlock<ScenarioStructureBSPWeatherPalette> weather_palette;
		TagBlock<ScenarioStructureBSPWeatherPolyhedron> weather_polyhedra;
		PADDING(24);
		TagBlock<ScenarioStructureBSPPathfindingSurface> pathfinding_surfaces;
		TagBlock<ScenarioStructureBSPPathfindingEdge> pathfinding_edges;
		TagBlock<ScenarioStructureBSPBackgroundSoundPalette> background_sound_palette;
		TagBlock<ScenarioStructureBSPSoundEnvironmentPalette> sound_environment_palette;
		TagDataOffset sound_pas_data;
		PADDING(24);
		TagBlock<ScenarioStructureBSPMarker> markers;
		TagBlock<ScenarioStructureBSPDetailObjectData> detail_objects;
		TagBlock<ScenarioStructureBSPRuntimeDecal> runtime_decals;
		PADDING(8);
		PADDING(4);
		TagBlock<ScenarioStructureBSPGlobalMapLeaf> leaf_map_leaves;
		TagBlock<ScenarioStructureBSPGlobalLeafPortal> leaf_map_portals;
	};
	static_assert(sizeof(ScenarioStructureBsp) == 648);

	struct ScenarioStructureBSPCompiledHeader {
		std::byte *pointer;
		std::uint32_t lightmap_material_count;
		std::byte *rendered_vertices;
		std::uint32_t lightmap_material_count_again;
		std::byte *lightmap_vertices;
		TagClassInt signature;
	};
	static_assert(sizeof(ScenarioStructureBSPCompiledHeader) == 24);

	struct ScenarioStructureBSPCompiledHeaderCEA {
		std::byte *pointer;
		std::uint32_t lightmap_vertex_size;
		std::uint32_t lightmap_vertices;
		PADDING(8);
		TagClassInt signature;
	};
	static_assert(sizeof(ScenarioStructureBSPCompiledHeaderCEA) == 24);

}

#pragma pack(pop)

#endif

