#include "raylib.h"
#include <iostream>
#include <string>
#include "node.hpp"
#include "line2d.hpp"
#include "ik_test.hpp"

Node root;

void handle_input();
void process_nodes();

int main() {
  InitWindow(1280, 720, "Procedural animations");

  // keep in mind these are on the stack !!!
  IKTest test;
  //test.position = Vector2{ 500, 100 };
  root.add_child(&test); 


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

