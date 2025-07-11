// This program demonstrates the difference between stack and heap memory allocation in C++.

#include <iostream>
using namespace std;
int main() {

    int stackvariable = 26;
    int *heapvariable = new int;
    *heapvariable = 26;

    cout<<"Stack Variable : "<<stackvariable<<endl;
    cout<<"Address of stack variable : "<<&stackvariable<<endl;
    
    cout<<"Heap Variable  : "<<*heapvariable<<endl;
    cout<<"Address of heap variable  : "<<heapvariable<<endl;
    
    delete heapvariable;
  
    return 0;
}
/*
  Memory Management:
  - Stack stores local variables with automatic allocation and cleanup.
  - Heap stores dynamically allocated memory using 'new'.
  - 'new' allocates memory on the heap and returns its address (pointer).
  - Use pointers to access and modify heap memory.
  - Always free heap memory with 'delete' to avoid memory leaks.
*/
