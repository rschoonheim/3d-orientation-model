#include "world.h"

#include <stdlib.h>

/** @inheritDoc */
World* worldCreate(int width, int height, int depth) {

    World *world = malloc(sizeof(World));
    world->width = width;
    world->height = height;
    world->depth = depth;
    world->entities = malloc(sizeof(World_Entity) * width * height * depth);

    return world;
}