#ifndef BIRD_H
#define BIRD_H

class Bird {
public:
    int jumpHeight;
    int gravity;
    int birdYPosition;
    int birdXPosition;

    Bird();
    void flap();
};

#endif
