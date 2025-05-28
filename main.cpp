#include <iostream>
#include <raylib.h>
#include "player.h"
#include "AI.h"
#include "line.h"
#include "ball.h"
#include "random.h"

using namespace std;

constexpr int SCREEN_WIDTH = 1280;
constexpr int SCREEN_HEIGHT = 800;
const char* GAME_TITLE = "Pong";

Color backgroundColor = BLACK;

float ballRadius = 10;
Color ballColor{255, 255, 255, 255};
Color lineColor{255, 255, 255, 70};
float lineOffset = 5;

float speed = 15;



int main () {

    Player playerLeft = Player(Player::POS_X_DEFAULT, (SCREEN_HEIGHT - Player::HEIGHT_DEFAULT) / 2);
    AI playerRight = AI((SCREEN_WIDTH - Player::POS_X_DEFAULT - Player::WIDTH_DEFAULT), (SCREEN_HEIGHT - Player::HEIGHT_DEFAULT) / 2);
    Line centralLine = Line(SCREEN_WIDTH/2, lineOffset, SCREEN_WIDTH/2, SCREEN_HEIGHT - lineOffset, lineColor);
    Ball ball = Ball(SCREEN_WIDTH/2, SCREEN_HEIGHT/2, ballRadius, ballColor, GetRandomVector(2, speed));

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    SetTargetFPS(60);
    

    while(!WindowShouldClose()) {
        
        BeginDrawing();
        
        ClearBackground(backgroundColor);

        ball.Draw();
        
        playerLeft.Draw();
        playerRight.Draw();
        ball.Update(playerLeft, playerRight);
        playerLeft.Update();
        playerRight.Update(ball);
        
        ball.HandlePlayerCollisions(playerLeft);
        ball.HandlePlayerCollisions(playerRight);

        centralLine.Draw();

        DrawText((TextFormat("%i", playerLeft.GetScore())), SCREEN_WIDTH * 0.25 - 20, 20, 80, WHITE);
        DrawText((TextFormat("%i", playerRight.GetScore())), SCREEN_WIDTH * 0.75 - 20, 20, 80, WHITE);
        
        EndDrawing();
    }
    
    CloseWindow();

}