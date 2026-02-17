#include <cassert>
#include <string>
#include <iostream>

void msg_assert(bool condition, std::string message) {
  std::cout << "ASSERTION FAILED: " << message << std::endl;
  assert(condition);
}

