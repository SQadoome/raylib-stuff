#include <string>
#include "line2d.hpp"
#include "ik_test.hpp"
#include "raylib.h"
#include "raymath.h"
#include <iostream>

IKTest::IKTest() : Line2D() {
  class_tree += "/IKTest";
  for (int segments = 0; segments < 5; segments++) {
    float index = segments;
    add_point(Vector2{ index*32, 0 });
  }

}

std::string IKTest::get_class() {
  return "IKTest";
}

void IKTest::_process() {
  float radius = 16;

  Vector2 end = GetMousePosition();
  
  set_point_position(points.length - 1, end);

  for (int i = points.length - 2; i > -1; i--) {

    Vector2 direction = Vector2Normalize(Vector2Subtract(get_point_at(i + 1), get_point_at(i)));
    set_point_position(i, Vector2Add(Vector2Scale(direction, radius), get_point_at(i)));
    
  }
  Line2D::_process();

}

