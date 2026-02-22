#pragma once
#include "object.hpp"

struct LinkedObject {
  Object* obj;
  LinkedObject* points_to;
};

class LinkedObjects {
  public:
    LinkedObjects(Object* chain_start);

    LinkedObject* object_chain;
    LinkedObject* start;
    LinkedObject* end;

    void add_object(Object* object_ptr);
};
