#pragma once
#include <string>


class Object {
  public:
    Object();
    
    std::string class_tree;
    std::string get_class_tree();
    std::string get_class();
};

