#include "../DataStructures/dynamic_arrays.h"
#include "world.h"

World::World() {
  renderers = new DynamicInt();
}

void World::add_entity(int i) {
  renderers->append(i);
}

DynamicInt* World::query_entities(int i) {
  return renderers;
}

