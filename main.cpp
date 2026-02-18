#include "raylib.h"
#include <iostream>
#include <string>
#include "DynamicArrays.h"
#include "assert.h"
#include "Line2D.h"
#include "LinkedLists.h"
#include "object.h"

void handle_input();
void process_objects();

int main() {
  InitWindow(1280, 720, "Procedural animations");
  Line2D line;
  line.add_point(Vector2 {0, 0});
  line.add_point(Vector2 {500, 200});
  
  LinkedObjects objects(&line);
  objects.start->object->_process();

  // main loop
  while (!WindowShouldClose()) {
    line._process();
    handle_input();
    process_objects();

    BeginDrawing();
     ClearBackground(LIGHTGRAY); 
    
      
    EndDrawing();
  }

  CloseWindow();

  return 0;
}

void process_objects() {
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

