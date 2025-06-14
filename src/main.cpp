#include <raylib.h>
#include "grid.h"

int main() 
{
    Color darkBlue ={44,44,127,255};
    InitWindow(300, 600, "My first RAYLIB program!");
    SetTargetFPS(60);

    grid grid = grid();

    grid.grid [0][0] =1;
    grid.grid[3][5] = 4;
    grid.Print();

    grid.Print();
    while(WindowShouldClose()==false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        EndDrawing();
    }
    CloseWindow();
}