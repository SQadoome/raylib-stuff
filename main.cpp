#include "raylib.h"
#include "object.cpp"
#include <iostream>
#include <string>
#include "DynamicArrays.h"
#include "assert.h"

int fake_main() {
  InitWindow(500, 300, "fuck");

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      
      Vector2 start = {0.0, 0.0};
      Vector2 end = {500, 300};
      
      DrawLineEx(start, end, 5.0f, LIGHTGRAY);
     
    EndDrawing();
  }
  
  CloseWindow();

  return 0;
}

int main() {
  DynamicInt arr;

  return 0;
}

