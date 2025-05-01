#ifndef BALL_H
#define BALL_H

#include <raylib.h>
#include "GameObject.h"

class Ball : public GameObject {
public:

    Ball(int posX, int posY, float radius, Color color);

    void Draw() override;

private:
    float radius;
};

#endif 