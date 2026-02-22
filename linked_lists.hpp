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
    bool is_empty;

    LinkedObject start;
    LinkedObject end;

    void add_object(Object* object_ptr);
};


class LinkedNodes {
  public:
    LinkedNodes();
    bool is_empty; 

    LinkedNode start;
    LinkedNode end;
    
    void add_node(Node* node);
};



