cmake_minimum_required(VERSION 3.28)
project(3d_orientation_model C)

set(CMAKE_C_STANDARD 23)

add_executable(
        # Executable
        #
        3d_orientation_model
        main.c

        # World
        #
        world/world.h
        world/world.c

        # Receptor
        #
        receptors/receptor.h
        receptors/receptor.c

        # Thalamus
        #
        thalamus/thalamus.h
        thalamus/thalamus.c

        # Cortex
        #
        cortex/cortex.h
        cortex/cortex.c
)

# Add OpenGL
#
find_package(OpenGL REQUIRED)

# Add GLFW
#
find_package(glfw3 REQUIRED)

# Link OpenGL and GLFW to the executable
#
target_link_libraries(3d_orientation_model OpenGL::GL glfw)
