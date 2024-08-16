#ifndef PERSON_H
#define PERSON_H

#include "../world/world.h"

typedef struct {
    World * world;
    int active;
    void * (*function)(void *data);
} Receptor;

typedef struct {
    Receptor * receptors;
} Thalamus;

typedef struct {
    Thalamus *  thalamus;
} Person;

Person *personCreate();

/**
 * @brief Activates and deactivates the receptors in the thalamus
 *
 * @param {Thalamus} thalamus - The thalamus to pulse
 *
 * @return {void*} - The result of the pulse
 */
void * thalamusPulse(Thalamus *thalamus);

int wirePersonToWorld(Person *person, World *world);

#endif //PERSON_H
