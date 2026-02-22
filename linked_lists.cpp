#include "LinkedLists.hpp"
#include "object.hpp"

LinkedObjects::LinkedObjects(Object* chain_start) {
  LinkedObject start_link = {chain_start, nullptr};
  start = &start_link;
  end = &start_link;
}

void LinkedObjects::add_object(Object* object_ptr) {
  LinkedObject new_link = {object_ptr, nullptr};
  // add link
  end->points_to = &new_link;
  
  // update end
  end = &new_link;
}

