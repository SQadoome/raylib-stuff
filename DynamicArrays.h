#include "raylib.h"
#include <string>

class DynamicInt {

  private:
    int* nums;
    int next;
    
    void expand();
    void shrink();

  public:
    DynamicInt();

    int length;

    void append(int num);
    void clear();
    void set_at(int index, Vector2 value);
    void erase(int target);
    int get_at(int index);
    std::string to_string();
    void remove_at(int index);

};

class DynamicVector2 {
  
  private:
    Vector2* vectors;
    int next;
    
    void expand();
    void shrink();

  public:
    DynamicVector2();

    int length;

    void append(Vector2 target);
    void clear();
    void erase(Vector2 target);
    void set_at(int index, Vector2 value);
    Vector2 get_at(int index);
    std::string to_string();
    void remove_at(int index);

};
