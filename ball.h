#ifndef BALL_H
#define BALL_H

#include <raylib.h>
#include <vector>
#include <iostream>
#include "GameObject.h"

using namespace std;

class Ball : public GameObject {
public:

    Ball(int posX, int posY, float radius, Color color, vector<float> speed);

    void Draw() override;
    void Update();

    float speedX;
    float speedY;

private:
    float radius;

};

#endif 