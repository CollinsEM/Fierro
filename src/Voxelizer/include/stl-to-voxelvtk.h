#pragma once

namespace Voxelizer {
    void create_voxel_vtk(
        const char* stl_file_path, const char* vtk_file_path, 
        int gridX, int gridY, int gridZ,
        bool use_index_space);
}