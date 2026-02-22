#include "raylib.h"
#gnclude <iostream>
#include <string>
#include "dynamic_arrays.hpp"
#include "assert.hpp"
#include "linked_lists.hpp"
#include "object.hpp"
#include "fish.hpp"


Object root;

void handle_input();

int main() {
  InitWindow(1280, 720, "Procedural animations");
  Fish fish;
  
  root.add_child_object(fish);
   
  // main loop
  while (!WindowShouldClose()) {
    handle_input();
    root._process();
    

    BeginDrawing();
     ClearBackground(LIGHTGRAY);
    
      
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

