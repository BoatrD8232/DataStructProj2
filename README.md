Part 1- Singly Linked List

The singly linked list is implemented in the SLL.cpp and SLL.h files. The SLL.h file has the declaration of the list functions and how to use them. The file named DataStructSLL.cpp has a main fuction that shows the operations of the functions. There is also a print function that allows the user to see the contents of the list. The 3 included pictures that start with SLLpt contain the output of the main function. The main function further breaks down what is being shown in comments. Due to some difficulties I encounter with linking errors, the type of the template class must be decided and declared before running the program. You may change the type of the template class by replacing int on the final line of SLL.cpp with the desired type. The class may be used with any type, but the examples in main only use an int type.

Next is a break down of the sample screenshots. More detail can be found in comments in main in DataStructSLL.cpp.

This picture shows how pop reacts to an empty list, pushes and pops one item at a time, then fills and then empties the list
![SSLpt1](https://github.com/user-attachments/assets/07779824-db8d-4950-93cc-ca54c11c8de7)

Refilling the list with push front, then inserting in various places. Lastly calling remove with an invalid index.
![SSLpt2](https://github.com/user-attachments/assets/8a1c45f9-8828-479a-add4-1114e72ac78e)

Removing at various places, running both pops, then running find with a number in the list and a number not in the list.
![SSLpt3](https://github.com/user-attachments/assets/bfaec350-2ca7-4620-aece-b4515da928da)




Part 2- Stack

The stack is implemented in the stack.cpp and stack.h files. The stack.h file has the declarations of the stack functions and how to use them. The file named DataStructStack.cpp has a main function that shows the operations of the functions. There is also a print function that allows the user to see the contents of the stack. The picture named StackPic shows the output of the main function. The main function further breaks down the output 
with comments.

The output of main:
Checks if the stack is empty, fills the stack with push, displays the avearge and top using the functions, pops one item, empties the stack with pop.
The average and top function return 0 when the stack is empty. The error messsage is from the top function.
![StackPic](https://github.com/user-attachments/assets/7f8d968e-44d5-4784-b30d-fa552f601e29)



