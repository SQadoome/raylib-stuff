#include "linked_lists.hpp"
#include "object.hpp"
#include "node.hpp"

LinkedObjects::LinkedObjects() {
  start = nullptr;
  end = nullptr;
}

void LinkedObjects::add_object(Object* object_ptr) {
  // allocate on the heap
  LinkedObject* new_link = new LinkedObject{ .holding = object_ptr, .points_to = nullptr };

  if (is_empty() == true) {

    start = new_link;
    end = new_link;

  } else {


    // add link
    end->points_to = new_link;
   
    // update end
    end = new_link;

  }
}

bool LinkedObjects::is_empty() {
  return (start == nullptr);
}

LinkedNodes::LinkedNodes() {
  start = nullptr;
  end = nullptr;
}

void LinkedNodes::add_node(Node* node_ptr) {
  // allocate on the heap
  LinkedNode* new_link = new LinkedNode{ .holding = node_ptr, .points_to = nullptr};

  if (is_empty() == true) {
    
    start = new_link;
    end = new_link;

  } else {
    
    // add link
    end->points_to = new_link;
    
    // update end
    end = new_link;
    
  }
  
}

bool LinkedNodes::is_empty() {
  return (start == nullptr);
}

