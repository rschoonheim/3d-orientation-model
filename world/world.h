#ifndef WORLD_H
#define WORLD_H


typedef struct {
    int x;
    int y;
    int z;
} World_Entity;

typedef struct {
    int width;
    int height;
    int depth;
    World_Entity* entities;
} World;

/**
 * @brief Create a new world object.
 *
 * @param {int} width The width of the world.
 * @param {int} height The height of the world.
 * @param {int} depth The depth of the world.
 *
 * @return {World*} The newly created world object.
 */
World* worldCreate(int width, int height, int depth);


#endif
