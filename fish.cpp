#include "fish.hpp"
#include <string>
#include <iostream>

Fish::Fish() {
  std::cout << line.get_class();
  class_tree += "/Fish";
}

std::string Fish::get_class() {
  return "Fish";
}

void Fish::_process() {
  
}

