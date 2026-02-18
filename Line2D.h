#pragma once
#include "raylib.h"
#include "DynamicArrays.h"
#include "object.h"

class Line2D : public Object {
  private:
    DynamicVector2 points;
  
  public:
    Line2D();
    
    virtual void _process() override;
    std::string get_class();
    void add_point(Vector2 new_point);
    void set_point_position(int index, Vector2 value);
    Vector2 get_point_at(int index);
    void remove_point_at(int index);
    void erase_point(Vector2 value);

};

