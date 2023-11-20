#include "raylib.h"

int main()
{
    int width = 1200, height = 1000, ball_size = 100;
    float ball_x = width / 2, ball_y = height / 2, ball_velocity = 4;
    SetTargetFPS(60);
    InitWindow(width, height, "Moja Hra");
    while (! WindowShouldClose( ))
    {
        BeginDrawing();
        ball_y += ball_velocity;
        ball_velocity += 0.2;

        ClearBackground(RED);
        DrawCircle(ball_x, ball_y, ball_size, WHITE);









        EndDrawing();
    }
    
    return 0;
}