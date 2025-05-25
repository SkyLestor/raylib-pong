#include "AI.h"



AI::AI()
    : Player(POS_X_DEFAULT, POS_Y_DEFAULT, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

AI::AI(int posX, int posY)
    : Player(posX, posY, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

AI::AI(int posX, int posY, Color color)
    : Player(posX, posY, color), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

AI::AI(int posX, int posY, int width, int height, Color color) 
    : Player(posX, posY, color), width(width), height(height) {}

void AI::Update(Ball ball){
    if ((posY + height / 2 ) > ball.GetPosY()){
        posY -= speed;
    }
    else if ((posY + height / 2 ) < ball.GetPosY()) {
        posY += speed;
    }
}