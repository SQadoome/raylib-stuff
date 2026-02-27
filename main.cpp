#include "raylib.h"
#include "ECS/rendering_system.h"
#include "ECS/world.h"

RenderingSystem* rendering_system;
World* world;

void initiate_systems();
void process_systems();

int main() {
  InitWindow(1280, 720, "Procedural animations");
  initiate_systems();
  world->add_entity(1);
  
  // main loop
  while (!WindowShouldClose()) {
   
    BeginDrawing();
      
      ClearBackground(LIGHTGRAY);
      process_systems();

    EndDrawing();

  }

  CloseWindow();
  
  return 0;
}

void initiate_systems() {
  world = new World();
  rendering_system = new RenderingSystem();
}

void process_systems() {
  rendering_system->process(world);

}

