#include <string>
#include "../Utility/assert.h"
#include "dynamic_arrays.h"

DynamicInt::DynamicInt() {
  next = 5;
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
  
  // free and update original array
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
  msg_assert((index >= 0 || index > length), "Invalid Index" + std::to_string(index));

  return nums[index];
}


