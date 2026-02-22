#include "linked_lists.hpp"
#include "object.hpp"
#include "node.hpp"

LinkedObjects::LinkedObjects() {
  is_empty = true;
}

void LinkedObjects::add_object(Object* object_ptr) {
  if (is_empty == true) {
    is_empty = false;
    LinkedObject new_link = { .holding = object_ptr, .points_to = nullptr };

    start = new_link;
    end = new_link;

  } else {

    LinkedObject new_link = { .holding = object_ptr, .points_to = nullptr};
    // add link
    end.points_to = &new_link;
   
    // update end
    end = new_link;
  }
}

LinkedNodes::LinkedNodes() {
  is_empty = true;
}

void LinkedNodes::add_node(Node* node_ptr) {
  if (is_empty == true) {
    is_empty = false;
    LinkedNode new_link = { .holding = node_ptr, .points_to = nullptr };
    
    start = new_link;
    end = new_link;

  } else {
    
    LinkedNode new_link = { .holding = node_ptr, .points_to = nullptr };
    // add link
    end.points_to = &new_link;
    
    // update end
    end = new_link;
    
  }
  
}

