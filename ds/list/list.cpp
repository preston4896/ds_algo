#include "list.h"


Node :: Node(int input) {
    val = input;
}


List :: List() {
    count = 0;
    head = nullptr;
    end = head;
}

int List :: push(int input) {
    // if (this == nullptr) {
    //     return -1;
    // }
    end = new Node(input);
    if (count == 0) {
        head = end;
    }
    count++;
    return 0;
}


int List :: pop() {
    if (head == nullptr || size() == 0) {
        return -1;
    }
    end = end -> prev;
    end -> next = nullptr;
    return 0;
}


int List :: size() {
    if (head == nullptr) {
        return -1;
    }
    else return count;
}


void List :: printList() {
    if (head == nullptr || size() == 0) {
        cout << "List is empty or do not exist." << endl;
    }
    else {
        Node *current = head;
        for (int i = 0; i < size(); i++) {
            cout << "Value at index: " + i << " , is = " << current -> val << endl;
            current = current -> next;
        }
    }
}

// template struct Node<int>;
// template struct Node<char>;
// template struct Node<string>;
// template struct Node<double>;
// template class List<int>;
// template class List<char>;
// template class List<string>;
// template class List<double>;