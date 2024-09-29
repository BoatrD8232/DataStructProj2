#include "SLL.h"

template <typename Item_Type> Single_Linked_List<Item_Type>::Single_Linked_List() {
    head = NULL;
    tail = NULL;
    numItems = 0;
}

template <typename Item_Type> bool Single_Linked_List<Item_Type>::empty() {
    if (numItems == 0) {
        return true;
    }
    return false;
}

template <typename Item_Type> const Node<Item_Type>* Single_Linked_List<Item_Type>::front() {
    return head;
}

template <typename Item_Type> const Node<Item_Type>* Single_Linked_List<Item_Type>::back() {
    return tail;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::push_front(const Item_Type& data) {
    Node<Item_Type>* newHead = new Node<Item_Type>(data);
    // If list is not empty
    if (!empty()) {
        newHead->next = head;
        head = newHead;
    }
    else {
        head = newHead;
        tail = newHead;
    }
    ++numItems;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::push_back(const Item_Type& data) {
    Node<Item_Type>* newTail = new Node<Item_Type>(data);
    // If list is not empty
    if (!empty()) {
        tail->next = newTail;
        tail = newTail;
    }
    else {
        head = newTail;
        tail = newTail;
    }
    ++numItems;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::pop_front() {
    if (empty()) {
        cout << "List is empty, cannot remove." << endl;
        return;
    }
    Node<Item_Type>* nodeToDelete = head;
    // If the head is the only member in the list.
    if (head->next == NULL) {
        head = NULL;
        tail = NULL;
    }
    else {
        head = head->next;
    }
    delete nodeToDelete;
    --numItems;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::pop_back() {
    if (empty()) {
        cout << "List is empty, cannot remove." << endl;
        return;
    }
    Node<Item_Type>* nodeToDelete = tail;
    // If the tail is the only member in the list.
    if (numItems == 1) {
        head = NULL;
        tail = NULL;
    }
    else {
        Node<Item_Type>* currNode = head;
        // Loops to the new end of the list to change its next pointer to null.
        for (int i = 0; i < numItems - 2; ++i) {
            currNode = currNode->next;
        }
        currNode->next = NULL;
        tail = currNode;
    }
    delete nodeToDelete;
    --numItems;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& data) {
    // If the index is beyond the end.
    if (index >= numItems) {
        push_back(data);
        return;
    }
    // If the head is the target.
    else if (index == 0) {
        push_front(data);
        return;
    }
    Node<Item_Type>* currNode = head;
    // Loops to point to the node before the given index. reassigns that node's next member.
    for (int i = 0; i < index - 1; i++) {
        currNode = currNode->next;
    }
    currNode->next = new Node<Item_Type>(data, currNode->next);
    ++numItems;
}

template <typename Item_Type> bool Single_Linked_List<Item_Type>::remove(size_t index) {
    // If the index is invalid.
    if (index >= numItems || index < 0) {
        cout << "Index beyond ends of list, cannot remove." << endl;
        return false;
    }
    // If the target is the head.
    if (index == 0) {
        pop_front();
    }
    // If the target is the tail.
    else if (index == numItems - 1) {
        pop_back();
    }
    else {
        Node<Item_Type>* currNode = head;
        // Loops to find the node before index, so that its next member can be reassigned to the node formerly 2 in front of it.
        for (int i = 0; i < index - 1; i++) {
            currNode = currNode->next;
        }
        Node<Item_Type>* nodeToBeDeleted = currNode->next;
        currNode->next = currNode->next->next;
        delete nodeToBeDeleted;
        --numItems;
    }
    return true;
}

template <typename Item_Type> size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) {
    Node<Item_Type>* currentNode = head;
    // Loops through the list, returns the index if item is found.
    for (int i = 0; i < numItems; i++) {
        if (currentNode->data == item) {
            return i;
        }
        currentNode = currentNode->next;
    }
    return numItems;
}

template <typename Item_Type> void Single_Linked_List<Item_Type>::print() {
    cout << setw(10) << setfill('-') << "" << "Printing List" << setw(10) << "" << endl;
    Node<Item_Type>* currentNode = head;
    for (int i = 0; i < numItems; i++) {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;
    }
    cout << "NumItems: " << numItems << endl;
    if (numItems > 0) {
        cout << "Head: " << head->data << "     Tail: " << tail->data << endl;
    }
    cout << setw(33) << "" << endl;
}

// Declares the template type. Change the int to whatever type is desired.
// The main function only has examples for int types.
template class Single_Linked_List<int>;