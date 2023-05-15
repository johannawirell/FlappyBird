#include "Game.h"
#include "bird/Bird.h"
#include <cstdio>

Game::Game() {
    
}

void Game::start() {
    printf("Start Flappy Bird!\n");
    Bird bird;
    bird.flap();
}
