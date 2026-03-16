#include <raylib.h>

int main(){
    int screenWidth = 800;
    int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Study Plan!");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}