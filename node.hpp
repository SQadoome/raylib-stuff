#pragma once
#include "linked_lists.hpp"
#include <string>
#include "object.hpp"
#include "raylib.h"

class LinkedNodes;

class Node : public Object {
 
  public:
    Node();
    
    LinkedNodes* children_chain;
    Vector2 position;

    std::string get_class();

    virtual void _process();
    void add_child(Node* child); 
    
  
};


