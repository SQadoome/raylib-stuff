#include "Line2D.h"
#include "raylib.h"
#include "object.h"

Line2D::Line2D() : Object() {
 class_tree += "/Line2D"; 
}

std::string Line2D::get_class() { return "Line2D"; }

void Line2D::add_point(Vector2 new_point) {
  points.append(new_point);
}

void Line2D::remove_point_at(int index) {
  points.remove_at(index);
}

void Line2D::erase_point(Vector2 point) {
  points.erase(point);
}

void Line2D::set_point_position(int index, Vector2 value) {
  points.set_at(index, value);
}

Vector2 Line2D::get_point_at(int index) {
  return points.get_at(index);
}

void Line2D::_process() {
    if (points.length > 1) {
      for (int i = 1; i < points.length; i++) {
        DrawLineV(points.get_at(i - 1), points.get_at(i), DARKGRAY);
      }
    }
}

