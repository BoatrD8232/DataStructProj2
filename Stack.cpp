#include "Stack.h"

bool stack::isEmpty() {
    if (numStack.size() == 0) {
        return true;
    }
    return false;
}
void stack::push(int data) {
    numStack.push_back(data);
}
void stack::pop() {
    if (!isEmpty()) {
        numStack.pop_back();
    }
    else {
        cout << "Cannot remove, the stack is empty." << endl;
    }
}
int stack::top() {
    if (numStack.size() == 0) {
        cout << "Stack is empty, cannot retrieve top" << endl;
        return 0;
    }
    return numStack.back();
}
float stack::findAvg() {
    float sum = 0.0;
    if (numStack.size() == 0) {
        return 0;
    }
    for (int i = 0; i < numStack.size(); ++i) {
        sum += numStack.at(i);
    }
    return sum / numStack.size();
}
void stack::print() {
    cout << setfill('-') << setw(10) << "" << "Printing Stack" << setw(10) << "" << endl;
    for (int i = 0; i < numStack.size(); ++i) {
        cout << numStack.at(i) << endl;
    }
    cout << setw(34) << "" << endl;
}