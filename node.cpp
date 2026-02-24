#include "node.hpp"
#include <string>
#include <iostream>
#include "raylib.h"

Node::Node() : Object() {
  class_tree += "/Node";
  children_chain = new LinkedNodes();
  position = Vector2 { 0, 0 };
}

std::string Node::get_class() {
  return "Node";
}

void Node::_process() {
  LinkedNode* next = children_chain->start;
    
  while (next != nullptr) {
      
    next->holding->_process();
    next = next->points_to;

  }
}

void Node::add_child(Node* child) {
  children_chain->add_node(child);
}

