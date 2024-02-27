#include <raylib.h>
#include "game.hpp"

int main()
{
    InitWindow(1024, 960, "Survival Game - V3");
    SetTargetFPS(60);

    Game game;

    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        game.Update();

        ClearBackground(LIGHTGRAY);

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}