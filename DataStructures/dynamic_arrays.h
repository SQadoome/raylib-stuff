#pragma once
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
    void set_at(int index, int value);
    void erase(int target);
    int get_at(int index);
    std::string to_string();
    void remove_at(int index);

};

