#include "raylib.h"
#include "object.cpp"
#include <iostream>
#include <string>
#include "DynamicArrays.h"
#include "assert.h"

void handle_input();

int main() {
  InitWindow(1280, 720, "Procedural animations");
  DynamicVector2 points;
  points.append(Vector2 {200, 50});
  points.append(Vector2 {100, 500});
  points.append(Vector2 {1, 1});
  points.append(Vector2 {1, 1});
  points.append(Vector2 {1, 1});
  points.append(Vector2 {1, 1});
  
  for (int i = 0; i < 6; i++) {
    points.append(Vector2 {5, 0});
  }
  std::cout << points.to_string() << std::endl;
  for (int i = 0; i < 8; i++) {
    points.remove_at(0);
  }
  std::cout << points.to_string() << std::endl;
  points.remove_at(50);
  // main loop
  while (!WindowShouldClose()) {
    handle_input();

    BeginDrawing();
     ClearBackground(LIGHTGRAY); 
    
     for (int i = 0; i < points.length; i++) {
      DrawLineV(Vector2 {0, 0}, points.get_at(i), DARKGRAY); 
     }
      
    EndDrawing();
  }

  CloseWindow();

  return 0;
}

int last_key = 0;
void handle_input() {
  int key = GetKeyPressed();

  switch(key) {
    case KEY_F11:
      ToggleFullscreen();
      break;
  }

}

