#include <iostream>
#include "list.h"
#include <assert.h>

using namespace std;

void push_1_val_then_print_then_pop() {
    List L1 = List();
    int pushTest = L1.push(5);
    assert(pushTest == 0);
    pushTest = L1.push(6);
    assert(pushTest == 0);
    L1.printList();
    int popTest = L1.pop();
    assert(popTest == 0);
    L1.printList();
}

int main() {
    cout << "Test 1" << endl;
    push_1_val_then_print_then_pop();
    return 0;
}