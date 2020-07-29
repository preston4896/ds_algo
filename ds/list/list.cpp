#include "list.h"

node_ptr init_node(int inVal, node_ptr prev) {
    node_ptr newNode = new Node;
    newNode -> val = inVal;
    newNode -> prev = prev;
    newNode -> next = new Node;
    return newNode;
}

List :: List() {
    if (count > -1) {
        cerr << "List already exists." << endl;
    }
    else {
        count = 0;
        head = nullptr;
        tail = nullptr;
        cout << "List created successfully." << endl;
    }
}

int List :: push(int inVal) {
    if (count == -1) {
        return -1;
    }
    node_ptr current = tail;
    // new list.
    if (current == nullptr){
        current = init_node(inVal, nullptr);
        head = current;
    }
    else {
        current = init_node(inVal, tail);
        tail -> next = current;
    }
    count++;
    tail = current;
    return 0;
}

int List :: pop() {
    if (count < 1) {
        return -1;
    }
    else if (count == 1) {
        head = nullptr;
        tail = nullptr;
    }
    else {
        node_ptr current = tail -> prev;
        current -> next = nullptr;
        tail = current;
    }
    count--;
    return 0;
}

int List :: size() {
    return count;
}

void List :: printList() {
    if (count < 1) {
        cerr << "List does not exist or is empty." << endl;
    }
    else {
        node_ptr temp = head;
        for (int i = 0; i < count; i++) {
            cout << "List index: " << i + 1 << ", value = " << temp -> val << endl;
            temp = temp -> next;
        }
    }
}

int destroy_list(list_ptr inList) {
    if (!inList) {
        return -1;
    }
    delete inList;
    return 0;
}