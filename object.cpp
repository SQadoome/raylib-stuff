#include "raylib.h"
#include <string>
#include "object.hpp"

Object::Object() {
  class_tree += "Object";
}

std::string Object::get_class() {
  return "Object";
}

std::string Object::get_class_tree() {
  return class_tree;
}

