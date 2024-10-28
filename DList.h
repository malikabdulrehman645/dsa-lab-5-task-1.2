

#include "Node.h"

class DList {
private:
    Node* head;

public:
    DList();                           // Constructor
    bool emptyList();                  // Checks if the list is empty
    void insert_after(int oldV, int newV); // Insert after a given value
    void deleteNode(int value);        // Delete a node by value
    void insert_begin(int value);      // Insert at the beginning
    void insert_end(int value);        // Insert at the end
    void traverse();                   // Display the list
   
};

