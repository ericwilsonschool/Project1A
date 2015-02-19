#ifndef NODE_H
#define NODE_H

#include "Date.h"
#include "Assignment.h"
#include <string>
using namespace std;

template <typename item_type>
struct Node{
    item_type data;
    Node* next;
    Node* prev;
  
    Node(const item_type& data_item, Node* prev_val =NULL, Node* next_val = NULL) :
    data(data_item), prev(prev_val), next(next_val) {}
};

#endif