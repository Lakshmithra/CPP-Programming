// Program to demonstrate about stack in STL and its member functions

#include <iostream>
#include <stack>
using namespace std;
int main(){

    stack <int> numbers;  // You cannot add elements to the stack at the time of declaration

    cout<<"Empty stack : "<<numbers.empty()<<endl;

   // To add elements to the stack, use the .push() function, after declaring the stack

   numbers.push(0);
   numbers.push(1) ;
   numbers.push(2) ;
   numbers.push(4) ;

   cout<<"\nNon-Empty stack : "<<numbers.empty()<<endl;

   cout<<"\nSize of stack : "<<numbers.size()<<endl;

   // You cannot access stack elements by referring to index numbers
   // In a stack, you can only access the top element, which is done using the .top() function

   cout<<"\nTop element (before) : "<<numbers.top()<<endl;

   // You can also use the .top function to change the value of the top element

   numbers.top() = 3;
   cout<<"\nTop element (after modifying)  : "<<numbers.top()<<endl;

   // You can use the .pop() function to remove an element from the stack. This will remove the last element that was added to the stack

   numbers.pop();
   cout<<"\nTop element (after popping)  : "<<numbers.top()<<endl;

   numbers.emplace(6);   // Inserts the value 6 at the top of the stack (more efficient than push)

   cout<<"\nPrinting stack values\n";

   while(!numbers.empty()){
      cout<<numbers.top()<<" ";
      numbers.pop();
   }

   return 0;
}

/*
    STACK IN C++ STL

    A stack is a Last-In First-Out (LIFO) data structure.
    This means the last element that is inserted will be the first one to be removed.
    You can only add, access, or remove elements from the top of the stack.

    Real-life example: Stack of books or plates.
    You can only add to the top and remove from the top.
    You cannot access elements from the bottom or middle directly.

    Stack uses containers like deque (default), vector, or list internally.

    Important functions in stack:

    push(value)        - Adds an element to the top of the stack.
    pop()              - Removes the topmost element from the stack.
    top()              - Returns a reference to the topmost element.
    empty()            - Returns true(1) if the stack is empty, false (0) otherwise.
    size()             - Returns the total number of elements in the stack.
    emplace(value)     - Inserts a new element at the top (more efficient than push).
    swap(stack2)       - Swaps the contents of the current stack with another stack.

    Notes:

    - You cannot access stack elements using index numbers like stack[0].
    - You can only use top to access or modify the top element.
    - To print all elements, use a loop and pop each element until the stack is empty.
    - Once an element is popped, it is permanently removed from the stack.

    Stack is useful when you need to reverse data or backtrack (like undo operations, function calls, etc.)
*/



