#include <iostream>
#include <iomanip>
using namespace std;
template <typename Item_Type>
#pragma once
/*
    Stuct node creates a node of a singly linked list.
    Item_Type data: stores the data of the node. The type of variable can be changed at will.
    Node* next: contains a pointer to the next node. Initialized to NULL.
*/
struct Node {
    Item_Type data;
    Node* next;
    Node(const Item_Type& data_item, Node* next_ptr = NULL) :data(data_item), next(next_ptr) {}
};

/*
    Class- Simgle_Linked_List: creates and handles  singly linked list of node objects.
    Node<Item_Type>* head: a pointer to the first item on the list. Initialized to NULL.
    Node<Item_Type>* tail: a pointer to the last item in the list. Initialized to NULL.
    int numItems: the number of nodes in the list.
*/
template <typename Item_Type> class Single_Linked_List {
private:
    Node<Item_Type>* head;
    Node<Item_Type>* tail;
    int numItems;
public:
    Single_Linked_List();
    /*
        empty: checks if the list is empty.
        returns: true if the list is empty, false if otherwise.
    */
    bool empty();
    /*
        front: gets the first item in the list.
        returns: a pointer pointing to the first node in the list.
    */
    const Node<Item_Type>* front();
    /*
        back: gets the last item in the list.
        returns: a pointer pointing to the last node in the list.
    */
    const Node<Item_Type>* back();
    /*
        push_front: creates a new node at the start of the list.
        parameter data: The data to be stored in the new node.
    */
    void push_front(const Item_Type& data);
    /*
        push_back: creates a new node at the back of the list.
        parameter data: The data to be stored in the new node.
    */
    void push_back(const Item_Type& data);
    /*
        pop_front: removes the item at the start of the list.
    */
    void pop_front();
    /*
        pop_back: removes the item at the end of the list.
    */
    void pop_back();
    /*
        insert: inserts a new node in the space before the node stored in the given index.
        parameter index: The index that the new node will be placed before;
        parameter data: The data to be stored in the new node.
    */
    void insert(size_t index, const Item_Type& data);
    /*
        remove: Removes a node at a given index.
        parameter index: the index of the node to be removed.
        return: True if removal was successful, false if otherwise.
    */
    bool remove(size_t index);
    /*
        find: Looks for a given value in the list.
        parameter item: The value to be found.
        return: The index of the item if found, returns the size of the list otherwise.
    */
    size_t find(const Item_Type& item);
    /*
        print: Prints the contents of the list as well as the data memebers of the class. Useful for testing.
    */
    void print();
};
