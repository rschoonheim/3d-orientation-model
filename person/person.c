#include "person.h"

#include <stdlib.h>

Person *personCreate() {
    Person * person = malloc(sizeof(Person));
    person->thalamus = malloc(sizeof(Thalamus));
    person->thalamus->receptors = malloc(sizeof(Receptor) * 100);
    for (int i = 0; i < 100; i++) {
        Receptor * receptor = &person->thalamus->receptors[i];
        receptor->active = 0;
        receptor->function = NULL;
    }

    return person;
}

int wirePersonToWorld(Person *person, World *world) {
    Receptor * receptors = person->thalamus->receptors;
    for (int i = 0; i < 100; i++) {
        receptors[i].world = world;
    }

    return 0;
}

void * receptorActivate(Receptor *receptor) {
    receptor->active = 1;
    // todo: implement the receptor activation
    return NULL;
}

void * receptorDeactivate(Receptor *receptor) {
    receptor->active = 0;
    // todo: implement the receptor deactivation
    return NULL;
}

void * thalamusPulse(Thalamus *thalamus) {
    Receptor * receptors = thalamus->receptors;
    for (int i = 0; i < 100; i++) {
        Receptor * receptor = &receptors[i];
        receptorActivate(receptor);
    }
}