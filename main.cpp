#include "raylib.h"
#include <iostream>
#include <string>
#include "node.hpp"
#include "line2d.hpp"

Node root;

void handle_input();
void process_nodes();

int main() {
  InitWindow(1280, 720, "Procedural animations");
  Line2D line;
  line.add_point(Vector2 { 0, 0 });
  line.add_point(Vector2 { 500, 20 });
  root.add_child(&line);
  
  Line2D line2;
  line2.add_point(Vector2 { 0, 0 });
  line2.add_point(Vector2 { 20, 500 });
  line2.add_point(Vector2 { 300, 700 });
  root.add_child(&line2);

  // main loop
  while (!WindowShouldClose()) {
    handle_input();

    
   
    BeginDrawing();
      ClearBackground(LIGHTGRAY);
      process_nodes();
     
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

void process_nodes() {
  root._process();
}

