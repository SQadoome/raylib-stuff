#include "raylib.h"
#include "DynamicArrays.h"
#include "object.h"

class Line2D extends Object {
  private:
    DynamicVector2 points;
  
  public:
    Vector2 get_point(int index) {
      return points.get_at(index);
    }

    void add_point() {
    
    }


};

