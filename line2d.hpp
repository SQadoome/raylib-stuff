#pragma once
#include "raylib.h"
#include "dynamic_arrays.hpp"
#include "node.hpp"

class Line2D : public Node {
  private:
    DynamicVector2 points;
  
  public:
    Line2D();
    
    void _process() override;
    std::string get_class();
    void add_point(Vector2 new_point);
    void set_point_position(int index, Vector2 value);
    Vector2 get_point_at(int index);
    void remove_point_at(int index);
    void erase_point(Vector2 value);

};

