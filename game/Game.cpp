#include "Game.h"
#include "bird/Bird.h"
#include <cstdio>
#include <ncurses.h>
#include <unistd.h>

Game::Game() {
    
}

void Game::initializeGame() {

}

void Game::gameLoop() {
    while(true) {
        usleep(10000); // Delay to control game speed
    }
}


void Game::start() {
    printf("Start Flappy Bird!\n");
    initializeGame();
    Bird bird;
    bird.flap();
}
