#include "Player.h"


Player::Player()
    : GameObject(POS_X_DEFAULT, POS_Y_DEFAULT, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY)
    : GameObject(posX, posY, COLOR_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY, Color color)
    : GameObject(posX, posY, color), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT) {}

Player::Player(int posX, int posY, int width, int height, Color color)
    : GameObject(posX, posY, color), width(width), height(height) {}

void Player::Draw() {
    DrawRectangle(posX, posY, width, height, color);
}