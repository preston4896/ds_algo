#include <iostream>
#include "list.h"
#include <assert.h>

using namespace std;

int main() {
    // create the list.
    List numList;
    numList = List();
    numList.push(5);
    numList.printList();

    cout << "test" << endl;

    return 0;
}