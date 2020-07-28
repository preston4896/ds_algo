#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

/**
 * Node properties for the list. 
 */
// template <class N>
struct Node {
    // value of T type stored in the node.
    int val;
    // next node.
    Node* next;
    // previous node.
    Node* prev;
    // initialize node.
    Node(int input);
    // destroy node
    // ~Node();
};

/**
 * List Definition. 
 * Methods including create new list, destroy list, add, remove, edit and search values of T type in list.
 * @tparam T the type of data stored in the list.
*/
// template <class T>
class List {
    private:
        // keeps track of the list size.
        int count;
        // first element of the list.
        Node *head;
        // last element of the list.
        Node *end;

    public:
        /**
         * Creates the list.
         * @return -1 error if attempt to recreate an existing list, else return 0.
         */
        List();
        /**
         * Adds new value at the end of the list.
         * @param input the input value of type specified by T.
         * @return -1 error if the list is not created, else 0.
        */
        int push(int input);
        /**
         * Removes the last value.
         * @return -1 error if the list is empty, else 0.
         */
        int pop();
        /**
         * Locates the value in the list.
         * @param query input value to be searched.
         * @return -1 error if the value is not found, else returns the index number (ranges o to size of list) 
         */
        int search(int query);
        /**
         * Size of list.
         * @return -1 error if list is not created, else the number of nodes in list. 
         */
        int size();
        /**
         * Modify the value that is already stored in the list,
         * @param index the location to be modified.
         * @param newVal the new value to overwrite the stored value.
         * @return -1 error if index is invalid or list is not created, else 0.
         */
        int changeVal(int index, int newVal);
        /**
         * Prints the entire list to stdout.
         */
        void printList();
        /**
         * Destroys the list. 
         */
        // ~List();
};

#endif // LIST_H