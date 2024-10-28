// main.cpp
#include "DList.h"
#include <iostream>
using namespace std;

int main() {
    DList list;

    // Check if list is empty
    cout << "List is empty: " << (list.emptyList() ? "Yes" : "No") << endl;

    // Insert at beginning
    list.insert_begin(10);
    list.insert_begin(20);
    cout << "List after inserting at beginning: ";
    list.traverse();

    // Insert at end
    list.insert_end(30);
    list.insert_end(40);
    cout << "List after inserting at end: ";
    list.traverse();

    // Insert after a specific value
    list.insert_after(20, 25);
    cout << "List after inserting 25 after 20: ";
    list.traverse();

    // Delete a node
    list.deleteNode(30);
    cout << "List after deleting 30: ";
    list.traverse();

    return 0;
}
