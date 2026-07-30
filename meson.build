project('Motor', 'c', 'cpp', version: '0.0.1')

cmake = import('cmake')
sdl3_opts = cmake.subproject_options()

BUILD_SDL3_STATIC = true
BUILD_SDL3_SHARED = false

sdl3_opts.add_cmake_defines(
    {
        'SDL_STATIC': BUILD_SDL3_STATIC, 
        'SDL_SHARED': BUILD_SDL3_SHARED, 
        'CMAKE_POSITION_INDEPENDENT_CODE': true
        }
    )

sdl3_proj = cmake.subproject('SDL3', options: sdl3_opts)
box3d_proj = cmake.subproject('BOX3D')

message('SDL3 CMake targets:\n - ' + '\n - '.join(sdl3_proj.target_list()))
message('BOX3D CMake targets:\n - ' + '\n - '.join(box3d_proj.target_list()))

sdl3_dep = sdl3_proj.dependency('SDL3-static')
box3d_dep = box3d_proj.dependency('shared')

inc = include_directories('include')
src = [
    'src/main.cpp',
    'src/Motor.cpp',
    ]

executable(meson.project_name(), src, dependencies: [sdl3_dep, box3d_dep], include_directories: inc)
