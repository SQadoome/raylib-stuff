#include "raylib.h"


int main() {
  InitWindow(500, 300, "fuck");

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawLine(0, 0, 500, 300, LIGHTGRAY);
    EndDrawing();
  }
  
  CloseWindow();

  return 0;
}








