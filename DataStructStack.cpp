#include "Stack.h"

int main()
{
    stack numStack;
    // show isEmpty
    if (numStack.isEmpty()) {
        cout << "This stack is empty." << endl;
    }
    // fill the stack
    for (int i = 0; i < 6; ++i) {
        numStack.push(i);
    }
    numStack.print();
    // should fail this check
    if (numStack.isEmpty()) {
        cout << "This stack is empty." << endl;
    }
    cout << "Average: " << numStack.findAvg() << endl;
    cout << "Top: " << numStack.top() << endl;
    // show pop, how it changes the stack
    numStack.pop();
    numStack.print();
    cout << "Average: " << numStack.findAvg() << endl;
    cout << "Top: " << numStack.top() << endl;
    // clear the stack
    while (!numStack.isEmpty()) {
        numStack.pop();
    }
    numStack.print();
    cout << "Average: " << numStack.findAvg() << endl;
    cout << "Top: " << numStack.top() << endl;
}

