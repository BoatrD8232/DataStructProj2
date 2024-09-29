#include "SLL.h"

/*
    This function is just a showcase of functionality.
*/
int main()
{
    Single_Linked_List<int> newList;
    // Pop will print an error on an empty list.
    newList.pop_back();
    newList.pop_front();
    // Shows how head and tail behave with only one item in the list.
    newList.push_front(9);
    newList.print();
    newList.push_front(5);
    newList.pop_back();
    newList.print();
    newList.pop_front();
    // push_back showcase.
    for (int i = 0; i < 6; ++i) {
        newList.push_back(i);
    }
    newList.print();
    // Clears the list. Runs one more than is needed to prompt error message.
    for (int i = 0; i < 7; ++i) {
        newList.pop_back();
    }
    // prints an empty list.
    newList.print();
    //push_front showcase.
    for (int i = 0; i < 6; ++i) {
        newList.push_front(i);
    }
    newList.print();
    // insert showcase. The second insert should be out of bounds.
    newList.insert(3, 12);
    newList.insert(20, 14);
    // insert at front and final index.
    newList.insert(0, 15);
    newList.insert(8, 9);
    newList.print();
    // remove showcase. The second remove should be out of bounds.
    newList.remove(3);
    newList.remove(20);
    // remove at front and final index.
    newList.remove(0);
    newList.remove(7);
    newList.print();
    //Another pop showcase to show head and tail changes.
    newList.pop_back();
    newList.pop_front();
    newList.print();
    // find showcase. 20 isnt in the list and should return the number of items in the list.
    cout << "1 located at index: " << newList.find(1) << endl;
    cout << "20 located at index: " << newList.find(20);
}


