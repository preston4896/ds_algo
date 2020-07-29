#include <iostream>
#include "list.h"
#include <assert.h>

using namespace std;

void create_list_push_once_then_destroy() {
    list_ptr list1 = new List;
    assert(list1 -> push(4) == 0);
    assert(list1 -> push(8) == 0);
    assert(list1->push(9) == 0);
    assert(list1->push(6) == 0);
    assert(list1 -> size() == 4);
    list1 -> printList();
    assert(list1 -> pop() == 0);
    assert(list1->pop() == 0);
    assert(list1 -> size() == 2);
    list1 -> printList();
    assert(list1->pop() == 0);
    assert(list1->size() == 1);
    list1->printList();
    assert(destroy_list(list1) == 0);
    assert(list1->size() == 0);
}

int main() {
    cout << "Test 1 - create_list_push_once_then_destroy()" << endl;
    create_list_push_once_then_destroy();
    cout << "SUCCESS!" << endl;
    return 0;
}