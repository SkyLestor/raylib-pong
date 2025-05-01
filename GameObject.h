#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <raylib.h>

class GameObject {
    public:
        
        virtual void Draw() = 0;
        

    protected:

        float posX;
        float posY;
        Color color;

        GameObject(float posX, float posY, Color color)
            : posX(posX), posY(posY), color(color) {}

};

#endif