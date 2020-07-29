#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

/**
 * A single node stores the value and pointers to its previous and next nodes. 
 */
typedef struct Node* node_ptr;

/**
 * Nodes that are linked together forms a list, LIFO order. 
 */
typedef class List* list_ptr;

/**
 * Initializes the node.
 * @param inVal input value.
 * @param prev previous node.
 * @return a new node.
 */
node_ptr init_node(int inVal, node_ptr prev);

struct Node
{
    int val;
    node_ptr prev;
    node_ptr next;
};

class List {
    private:
        int count = -1;
        node_ptr head;
        node_ptr tail;

    public:
        /**
         * Creates the list. 
         * The constructor can only be called once, otherwise a warning message will be written to stderr.
         */
        List();

        /**
         * Inserts a node at the end of the list.
         * @param inVal input value.
         * @return -1 if the list does not exist, otherwise 0.
         */
        int push(int inVal);

        /**
         * Removes the last node from the list.
         * @return -1 if the list is empty or does not exist, otherwise 0.
         */
        int pop();

        /**
         * The total number of nodes in the list.
         * @return -1 if the list does not exist, otherwise the size.
         */
        int size();

        /**
         * Prints the entire list to stdout. If list does not exist or empty, send message to stderr. 
         */
        void printList();
};

#endif // LIST_H