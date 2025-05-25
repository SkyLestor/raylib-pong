#include "Player.h"

Player::Player()
    : GameObject(POS_X_DEFAULT, POS_Y_DEFAULT, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY)
    : GameObject(posX, posY, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY, Color color)
    : GameObject(posX, posY, color), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY, int width, int height, Color color)
    : GameObject(posX, posY, color), width(width), height(height) {}

void Player::Draw()
{
    DrawRectangle(posX, posY, width, height, color);
}
void Player::Update()
{
    if (IsKeyDown(KEY_UP) && posY >= 0)
    {
        posY -= speed;
    }
    else if (IsKeyDown(KEY_DOWN) && (posY + height) <= GetScreenHeight())
    {
        posY += speed;
    }
}

float Player::GetPosX()
{
    return posX;
}
float Player::GetPosY()
{
    return posY;
}
float Player::GetWidth()
{
    return width;
}
float Player::GetHeight()
{
    return height;
}
