#include "Bird.h"
#include <cstdio>

Bird::Bird() {
    jumpHeight = 10;
    gravity = 2;
    birdYPosition = 0;
    birdXPosition = 0;
}

void Bird::flap() {
    printf("Flap!\n");
}
