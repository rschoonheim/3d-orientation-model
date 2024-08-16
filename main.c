#include <stdio.h>

#include <GLFW/glfw3.h>

#include "world/world.h"
#include "person/person.h"

int main(void) {
    // Initialize the world
    //
    World *world = worldCreate(100, 100, 100);

    // Initialize the person
    //
    Person *person = personCreate();
    wirePersonToWorld(person, world);

    return 0;


    // Initialize the library
    //
    if (!glfwInit()) {
        return -1;
    }

    // Create a windowed mode window and its OpenGL context
    //
    GLFWwindow *window = glfwCreateWindow(640, 480, "3D Orientation Model", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Main loop
    //
    while (!glfwWindowShouldClose(window)) {
        // Render here
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    return 0;
}
