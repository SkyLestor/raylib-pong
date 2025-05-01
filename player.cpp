#include "Player.h"

Player::Player()
    : posX(POS_X_DEFAULT), posY(POS_Y_DEFAULT), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT), color(COLOR_DEFAULT) {}

Player::Player(int posX, int posY)
    : posX(posX), posY(posY), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT), color(COLOR_DEFAULT) {}

Player::Player(int posX, int posY, Color color)
    : posX(posX), posY(posY), width(WIDTH_DEFAULT), height(HEIGHT_DEFAULT), color(color) {}

Player::Player(int posX, int posY, int width, int height, Color color)
    : posX(posX), posY(posY), width(width), height(height), color(color) {}

void Player::Draw() {
    DrawRectangle(posX, posY, width, height, color);
}