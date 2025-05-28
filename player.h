#ifndef PLAYER_H
#define PLAYER_H

#include <raylib.h>
#include "GameObject.h"

class Player : public GameObject
{
public:
    static constexpr int POS_X_DEFAULT = 10;
    static constexpr int POS_Y_DEFAULT = 0;
    static constexpr int WIDTH_DEFAULT = 35;
    static constexpr int HEIGHT_DEFAULT = 150;
    static constexpr Color COLOR_DEFAULT = WHITE;

    Player();
    Player(int posX, int posY);
    Player(int posX, int posY, Color color);
    Player(int posX, int posY, int width, int height, Color color);

    void Draw() override;
    void Update();

    float GetPosX();
    float GetPosY();
    float GetHeight();
    float GetWidth();
    int GetScore();
    void operator++(int);
protected:
    int score = 0;
    
private:
    int width;
    int height;
    float speed = 7;
};

#endif