#include "object.h"
#include "Line2D.h"
#include <string>

class Fish : public Object {
  private:
    Line2D line;
    

  public:
    Fish();
    
    void _process();
    std::string get_class();
};

