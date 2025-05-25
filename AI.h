#ifndef AI_H
#define AI_H

#include <raylib.h>
#include "player.h"
#include "ball.h"

class AI : public Player {
public:
    static constexpr int POS_X_DEFAULT = 10;
    static constexpr int POS_Y_DEFAULT = 0;
    static constexpr int WIDTH_DEFAULT = 35;
    static constexpr int HEIGHT_DEFAULT = 150;
    static constexpr Color COLOR_DEFAULT = RED;

    AI();
    AI(int posX, int posY);
    AI(int posX, int posY, Color color);
    AI(int posX, int posY, int width, int height, Color color);

    void Update(Ball ball);

private:
    int width;
    int height;
    float speed = 7;
};

#endif