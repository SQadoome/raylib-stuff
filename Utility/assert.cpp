#include <cassert>
#include <string>
#include <iostream>
#include "assert.h"

void msg_assert(bool condition, std::string message) {
  if (condition == false) {
    std::cout << "ASSERTION FAILED: " << message << std::endl;
  }
  assert(condition);
}

