#pragma once
#include "object.h"

struct LinkObject {
  Object* object;
  LinkObject* points_to;
};

class LinkedObjects {
  public:
    LinkedObjects(Object* start_object);

    int object_count;

    LinkObject* start;
    LinkObject* end;

    void add_object(Object* object);
};
