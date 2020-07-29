#include "list.h"

node_ptr init_node(int inVal, node_ptr prev) {
    node_ptr newNode = new Node;
    newNode -> val = inVal;
    newNode -> prev = prev;
    newNode -> next = new Node;
    return newNode;
}