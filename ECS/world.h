#pragma once
#include "../DataStructures/dynamic_arrays.h"
//#include "entity.h"

class World {
  public:
    World();
    DynamicInt* renderers;
    
    void add_entity(int i);
    DynamicInt* query_entities(int i);
};

