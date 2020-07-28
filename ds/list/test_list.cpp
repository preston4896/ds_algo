#include <iostream>
#include "list.h"
#include <assert.h>

using namespace std;

void push_1_val_then_print() {
    List L1;
    int pushTest = L1.push(5);
    assert(pushTest == 0);
    L1.printList();
    int popTest = L1.pop();
    assert(popTest == 0);
    L1.printList();
}

int main() {
    cout << "Test 1" << endl;
    push_1_val_then_print();
    return 0;
}