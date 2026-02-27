#include "rendering_system.h"
#include "world.h"
#include "../DataStructures/dynamic_arrays.h"
#include <iostream>

void RenderingSystem::process(World* world) {
  DynamicInt* renderers = world->query_entities(0);
  
  for (int i = 0; i < renderers->length; i++) {
    std:: cout << renderers->get_at(i) << std::endl;
  }
  
}

