#pragma once
#include "line2d.hpp"
#include <string>

class IKTest : public Line2D {
  public:
    IKTest();

    std::string get_class();
    virtual void _process();
    

};

