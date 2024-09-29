#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#pragma once

/*
   class stack: Creates a stack data structure. The data of the stack is stored in a vector.
*/
class stack {
private:
    // The vector used to simulate a stack.
    vector<int> numStack;
public:
    /*
        isEmpty: checks if the list is empty.
        return: True if the list is empty, false otherwise.
    */
    bool isEmpty();
    /*
        push: Puts a new int on top of the stack.
        param data: The int to be placed on the stack.
    */
    void push(int data);
    /*
        pop: Removes the top item on the stack.
    */
    void pop();
    /*
        top: Gets the value of the top of the stack.
        return: The value of the item on top of the stack.
    */
    int top();
    /*
        findAvg: Calculates the average value of the entire stack.
        return: The calculated average.
    */
    float findAvg();
    /*
        print: Prints the contents of the vector. Useful for testing.
    */
    void print();

};
