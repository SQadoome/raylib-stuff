#include "LinkedLists.h"
#include "object.h"

LinkedObjects::LinkedObjects(Object* start_object_ptr) {
 object_count = 1;
 LinkObject first;
 first.object = start_object_ptr;
 first.points_to = nullptr;
 start = &first;
 end = start;
}

void LinkedObjects::add_object(Object* object_ptr) {
  object_count += 1;
  LinkObject new_object;
  new_object.object = object_ptr;
  new_object.points_to = nullptr;
  end = &new_object;
}

