#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    void start(); 
    void initializeGame();
    void handleGameOver(int score);
    void gameLoop();
};

#endif
