#include "raylib.h"
#include <string>


class Object {
  public:
    std::string class_name = "Object";

    void _process() {
    
    }

    std::string get_class_chain() {
      std::string chain = class_name;
      return chain;
    }
};

