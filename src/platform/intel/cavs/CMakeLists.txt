# SPDX-License-Identifier: BSD-3-Clause

add_subdirectory(lib)

add_local_sources(sof platform.c)

target_include_directories(sof_options INTERFACE ${PROJECT_SOURCE_DIR}/src/platform/intel/cavs/include)
