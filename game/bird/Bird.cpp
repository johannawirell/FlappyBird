#include "Bird.h"
#include <ncurses.h>

Bird::Bird() {
    jumpHeight = 5;
    gravity = 1;
    birdYPosition = 0;
    birdXPosition = 10;
}

void Bird::flap() {
    // Implementera fågelns hopp-logik
    birdYPosition -= jumpHeight;
}

void Bird::update() {
    // Implementera fågelns uppdateringslogik (t.ex. gravitation)
    birdYPosition += gravity;
}

void Bird::handleInput() {
    // Implementera fågelns uppdateringslogik (t.ex. gravitation)
    birdYPosition += gravity;
}

int Bird::getPositionX() {
    return birdXPosition;
}

int Bird::getPositionY() {
    return birdYPosition;
}

bool Bird::isCollision() {
    // Implementera kollisionslogik (om fågeln kolliderar med hinder eller gräns)
    // Returnera true om kollision sker, annars false
    return false;
}
