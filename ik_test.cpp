#include <string>
#include "line2d.hpp"
#include "ik_test.hpp"

IKTest::IKTest() : Line2D() {
  class_tree += "/IKTest";
}

std::string IKTest::get_class() {
  return "IKTest";
}

void IKTest::_process() {
  Line2D::_process();


}

