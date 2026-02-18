#include "raylib.h"
#include <string>
#include "assert.h"
#include "DynamicArrays.h"
#include <iostream>

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

//------------

DynamicVector2::DynamicVector2() {
  vectors = new Vector2[5];
  length = 0;
  next = 5;
}

void DynamicVector2::clear() {
  delete[] vectors;

  vectors = new Vector2[5];
}

std::string DynamicVector2::to_string() {
  std::string text = "[ ";

  for (int i = 0; i < length; i++) {
    text += "(" + std::to_string(vectors[i].x) + ", " + std::to_string(vectors[i].y) + ") ";
  }

  text += "]";
  return text;
}

Vector2 DynamicVector2::get_at(int index) {
  msg_assert((index > -1 && index < length), "Invalid index: " + std::to_string(index));
  
  return vectors[index];
}

void DynamicVector2::expand() {
  Vector2* temp = new Vector2[next + 5];

  // copy the array
  for (int i = 0; i < length; i++) {
    temp[i] = vectors[i];
  }

  delete[] vectors;
  vectors = temp;
  next += 5;
}

void DynamicVector2::shrink() {
  Vector2* temp = new Vector2[next - 5];

  for (int i = 0; i < next - 5 - 1; i++) {
    temp[i] = vectors[i];
  }
  
  delete[] vectors;
  vectors = temp;
  next -= 5;
}

void DynamicVector2::append(Vector2 vector) {
  if (length >= next) {
    expand();
  }

  if (length < next) {
    vectors[length] = vector;
    length += 1;
  }
  
}

void DynamicVector2::remove_at(int index) {
  msg_assert((index > -1 && index < length), "Invalid index: " + std::to_string(index));
  
  for (int i = index; i < length - 1; i++) {
    vectors[i] = vectors[i + 1];
  }

  // length -= 1 ensures last item is empty (its not really but it is not used)
  length -= 1;
}

void DynamicVector2::erase(Vector2 target) {
  for (int i = 0; i < length; i++) {
    if (vectors[i].x == target.x && vectors[i].y == target.y) {

      // shift elements
      for (int j = 0; j < length - i - 1; j++) {
        vectors[i+j] = vectors[i+j+1];
      }
      
      // length -= 1 ensures the last item is empty (its not really but it is not used)
      length -= 1;
      break;
    }

  }
  

}

