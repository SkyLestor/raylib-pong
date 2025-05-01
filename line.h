#ifndef LINE_H
#define LINE_H

#include <raylib.h>
#include "GameObject.h"

class Line : public GameObject {
public:

    Line(int posX, int posY, int endPosX, int endPosY, Color color);

    void Draw() override;

private:
    int endPosX;
    int endPosY;
};

#endif 