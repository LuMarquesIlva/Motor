project('Motor', 'c', 'cpp', version: '0.0.1')

cmake = import('cmake')
SDL3_opts = cmake.subproject_options()

BUILD_SDL3_STATIC = true
BUILD_SDL3_SHARED = true


SDL3_opts.add_cmake_defines({'SDL_STATIC': BUILD_SDL3_STATIC, 'SDL_SHARED': BUILD_SDL3_SHARED})

sdl3_proj = cmake.subproject('SDL3', options: SDL3_opts)
box3d_proj = cmake.subproject('BOX3D')

message('SDL3 CMake targets:\n - ' + '\n - '.join(sdl3_proj.target_list()))
message('BOX3D CMake targets:\n - ' + '\n - '.join(box3d_proj.target_list()))

sdl3_dep = sdl3_proj.dependency('SDL3-static')
box3d_dep = box3d_proj.dependency('box3d')

inc = include_directories('include')
src = [
    'src/main.cpp',
    'src/Motor.cpp',
    'src/VBO.cpp',
    ]

executable(meson.project_name(), src, dependencies: [sdl3_dep, box3d_dep], include_directories: inc)
