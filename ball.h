#ifndef BALL_H
#define BALL_H

#include <raylib.h>
#include <vector>
#include <iostream>
#include "GameObject.h"
#include "player.h"

using namespace std;

class Ball : public GameObject {
public:

    Ball(int posX, int posY, float radius, Color color, vector<float> speed);

    void Draw() override;
    void Update();

    int GetPosY();
    int GetPosX();

    float speedX;
    float speedY;
    void HandlePlayerCollisions(Player player);
private:
    float radius;

   

};

#endif 