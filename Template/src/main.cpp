#include <raylib.h>
#include "grid.h"

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "TETRIS");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        EndDrawing();
    }

    CloseWindow();
}