#include "Game.h"
#include "bird/Bird.h"
#include <cstdio>
#include <ncurses.h>
#include <unistd.h>

Game::Game() {
    
}

void Game::initializeGame() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    curs_set(0);
}

void Game::handleGameOver(int score) {
    printf("Game over!\n");
    printf("Score: %d\n", score);
}

void Game::gameLoop() {
    int ch;
    bool gameover = false;
    nodelay(stdscr, true);

    // Skapa en fågel
    Bird bird;

    while (!gameover) {
        clear();
        ch = getch();

        mvprintw(bird.getPositionY(), bird.getPositionX(), "O");

        bird.handleInput();
        bird.update();

        if (bird.isCollision() || ch == 'x') {
            gameover = true;
            handleGameOver(0);
        }

        refresh();
        usleep(10000); // Delay to control game speed
    }

    endwin();
}

void Game::start() {
    printf("Start Flappy Bird!\n");
    initializeGame();
    gameLoop();
}
