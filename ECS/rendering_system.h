#pragma once
#include "system.h"
#include "world.h"

class RenderingSystem : public System{
  public:
    void process(World* world);
};


