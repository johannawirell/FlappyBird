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

void Bird::handleInput() {

}

int Bird::getPositionX() {
    return birdXPosition;
}

int Bird::getPositionY() {
    return birdYPosition;
}
