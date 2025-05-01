#include "line.h"

Line::Line(int posX, int posY, int endPosX, int endPosY, Color color)
    : GameObject(posX, posY, color), endPosX(endPosX), endPosY(endPosY) {}

void Line::Draw(){
    DrawLine(posX, posY, endPosX, endPosY, color);
}