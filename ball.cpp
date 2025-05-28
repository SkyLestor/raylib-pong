#include "ball.h"


Ball::Ball(int posX, int posY, float radius, Color color, vector<float> speed)
    : GameObject(posX, posY, color), radius(radius), speedX(speed[0]), speedY(speed[1])
{
}

void Ball::Draw()
{
    DrawCircle(posX, posY, radius, color);
}

void Ball::Update(Player& leftPlayer, Player& rightPlayer)
{
    posX += speedX;
    posY += speedY;

    if ((posY + radius) >= GetScreenHeight() || (posY - radius) <= 0)
    {
        speedY *= -1;
    }
    else if ((posX + radius) >= GetScreenWidth())
    {
        leftPlayer++;
        speedX *= -1;
    }
    else if ((posX - radius) <= 0)
    {
        rightPlayer++;
        speedX *= -1;
    }
}

int Ball::GetPosX()
{
    return posX;
}

int Ball::GetPosY()
{
    return posY;
}

void Ball::HandlePlayerCollisions(Player player)
{
    if (CheckCollisionCircleRec(Vector2{posX, posY}, radius, Rectangle{player.GetPosX(), player.GetPosY(), player.GetWidth(), player.GetHeight()}))
    {
        speedX *= -1;
    }
}