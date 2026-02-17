#include "raylib.h"
#include <string>
#include "assert.h"
#include "DynamicArrays.h"

DynamicInt::DynamicInt() {
  next = 10;
  length = 0;
  nums = new int[5];
}

std::string DynamicInt::to_string() {
  std::string text = "[ ";
  
  for (int i = 0; i < length; i++) {
      text += std::to_string(nums[i]) + " ";
  }
  
  text += "]";
  return text;
}

void DynamicInt::expand() {
  int* temp = new int[next + 5];
      
  // copy the array
  for (int i = 0; i < length; i++) {
    temp[i] = nums[i];
  }
  delete[] nums;
  nums = temp;
  next += 5;
}
    
void DynamicInt::shrink() {
  int* temp = new int[next - 5];
      
  for (int i = 0; i < next - 5; i++) {
    temp[i] = nums[i];
  }
  delete[] nums;
  nums = temp;

  next -= 5;
}

void DynamicInt::append(int num) {
  nums[length] = num;
  length += 1;
      
  if (length >= next) {
    expand();
  }
}

void DynamicInt::erase(int target) {
    
}

void DynamicInt::remove_at(int index) {
    
}

int DynamicInt::get_at(int index) {
      return 0;
}

class DynamicVector2 {
  private:
    Vector2* vectors;

  public:

    DynamicVector2() {
      vectors = new Vector2[5];
    }

    void clear() {
      delete[] vectors;
      vectors = new Vector2[5];
    }
    
    std::string to_string() {
      return "";
    }

    // warning, if the new size is smaller than the previous then information will be lost!
    void resize(int new_size) {
    
    }

    void append(Vector2 vector) {
      
    }
    void erase(Vector2 vector) {
      
    }

    void remove_at(int index) {
      
    }

    Vector2 get_at(int index) {
      return Vector2 {0, 0};
    }

};

