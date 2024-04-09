#include <iostream>
#include "linkedLists.cc"
using namespace std;


int main() {
    DoublyLinkedList<int> list;

    // Populate the list with integers 1 through 5
    for (int i = 1; i <= 5; ++i) {
        list.append(i);
    }

    // Print the list from front to back
    cout << "List (front-to-back): ";
    list.printForward();

    // Print the list from back to front
    cout << "List (back-to-front): ";
    list.printBackward();

    return 0;
}
