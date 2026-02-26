#pragma once
#include "object.hpp"
#include "node.hpp"

class Node;
class Object;

struct LinkedObject {
  Object* holding;
  LinkedObject* points_to;
};

struct LinkedNode {
  Node* holding;
  LinkedNode* points_to;
};

class LinkedObjects {
  public:
    LinkedObjects();

    LinkedObject* start;
    LinkedObject* end;

    bool is_empty();
    void add_object(Object* object_ptr);
};


class LinkedNodes {
  public:
    LinkedNodes(); 

    LinkedNode* start;
    LinkedNode* end;
    
    bool is_empty();
    void add_node(Node* node);
};



