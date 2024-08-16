cmake_minimum_required(VERSION 3.28)
project(3d_orientation_model C)

set(CMAKE_C_STANDARD 23)

add_executable(3d_orientation_model main.c world/world.h world/world.c)



# Add OpenGL
#
find_package(OpenGL REQUIRED)

# Add GLFW
#
find_package(glfw3 REQUIRED)


add_library(
        person
        person/person.c
        person/person.h
)

# Link thalamus to the executable
#
target_link_libraries(3d_orientation_model person)


# Link OpenGL and GLFW to the executable
#
target_link_libraries(3d_orientation_model OpenGL::GL glfw)

