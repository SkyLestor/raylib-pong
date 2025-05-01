#include "ball.h"

Ball::Ball(int posX, int posY, float radius, Color color) 
    : GameObject(posX, posY, color), radius(radius) {}

void Ball::Draw(){
    DrawCircle(posX, posY, radius, color);
}