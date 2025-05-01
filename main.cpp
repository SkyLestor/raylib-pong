#include <iostream>
#include <raylib.h>
#include "player.h"
#include "line.h"
#include "ball.h"

using namespace std;

constexpr int SCREEN_WIDTH = 1280;
constexpr int SCREEN_HEIGHT = 800;
const char* GAME_TITLE = "Pong";

Color backgroundColor = BLACK;

float ballRadius = 10;
Color ballColor{255, 255, 255, 255};
Color lineColor{255, 255, 255, 70};
float lineOffset = 5;




int main () {

    Player playerLeft = Player(Player::POS_X_DEFAULT, (SCREEN_HEIGHT - Player::HEIGHT_DEFAULT) / 2);
    Player playerRight = Player((SCREEN_WIDTH - Player::POS_X_DEFAULT - Player::WIDTH_DEFAULT), (SCREEN_HEIGHT - Player::HEIGHT_DEFAULT) / 2);
    Line centralLine = Line(SCREEN_WIDTH/2, lineOffset, SCREEN_WIDTH/2, SCREEN_HEIGHT - lineOffset, lineColor);
    Ball ball = Ball(SCREEN_WIDTH/2, SCREEN_HEIGHT/2, ballRadius, ballColor);

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    SetTargetFPS(60);
    

    while(!WindowShouldClose()) {
        
        BeginDrawing();
        
        ClearBackground(backgroundColor);

        ball.Draw();
        
        playerLeft.Draw();
        playerRight.Draw();
 
        centralLine.Draw();


        EndDrawing();
    }
    
    CloseWindow();

}