#include "raylib.h"

int main()
{
    int width = 800, height = 600, ball_size = 100, ball_velocity = 4;
    float ball_x = width / 2, ball_y = height / 2;
    SetTargetFPS(60);
    InitWindow(width, height, "Moja Hra");
    while (! WindowShouldClose( ))
    {
        BeginDrawing();
        ball_y += ball_velocity;

        ClearBackground(RED);
        DrawCircle(ball_x, ball_y, ball_size, WHITE);









        EndDrawing();
    }
    
    return 0;
}