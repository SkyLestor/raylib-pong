#include "ball.h"

Ball::Ball(int posX, int posY, float radius, Color color, vector<float> speed)
    : GameObject(posX, posY, color), radius(radius), speedX(speed[0]), speedY(speed[1])
{
}

void Ball::Draw()
{
    DrawCircle(posX, posY, radius, color);
}

void Ball::Update()
{
    posX += speedX;
    posY += speedY;
}