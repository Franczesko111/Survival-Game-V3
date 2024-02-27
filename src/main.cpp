#include <raylib.h>

int main()
{
    InitWindow(1024, 960, "Survival Game - V3");
    SetTargetFPS(60);

    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}