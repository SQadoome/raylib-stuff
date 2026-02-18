#include "raylib.h"
#include <string>
#include "object.h"

Object::Object() {

}

void _process() {
  
}

std::string Object::get_class() {
  return "Object";
}
std::string Object::get_class_tree() {
  return class_tree;
}

