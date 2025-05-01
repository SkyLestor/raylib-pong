#include <iostream>
#include <raylib.h>
#include "player.h"

using namespace std;

constexpr int SCREEN_WIDTH = 1280;
constexpr int SCREEN_HEIGHT = 800;
const char* GAME_TITLE = "Pong";

float ballRadius = 10;
Color ballColor{255, 255, 255, 255};




int main () {

    Player player1 = Player(Player::POS_X_DEFAULT, (SCREEN_HEIGHT - Player::HEIGHT_DEFAULT) / 2);

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    SetTargetFPS(60);

    while(WindowShouldClose() == false) {
        BeginDrawing();
        
        DrawCircle(SCREEN_WIDTH/2, SCREEN_HEIGHT/2, ballRadius, ballColor);
        
        player1.Draw();

        EndDrawing();
    }

    CloseWindow();

}