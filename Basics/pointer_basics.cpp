// Program to demonstrate about pointers in C++

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int num = 26;
    cout<<"Value of num            : "<<num<<endl;
    cout<<"Address of num          : "<<&num<<endl<<endl;
    
     /*  Declare a pointer to an integer
         Assign the address of 'num' to the pointer 'n'
         Now 'n' holds the memory address of 'num'
    */
    
    int *n ;   
    n = &num;
    
    // Print the address stored in pointer 'n'
    // This is the memory location of 'num'
    
    cout<<"Pointer n (address)     : "<<n<<endl;
    
    // Dereference the pointer using * to get the value at the address
    // This will print the value of 'num', which is 26
    
    cout<<"Value at pointer n (*n) : "<<*n<<endl<<endl;
    
   // Change the value at the memory address using pointer
  
    *n = 25;
    
     // Print the updated value via pointer and original variable
  
    cout<<"Updated value at pointer : "<<*n<<endl;
    cout<<"Updated value at num     : "<<num<<endl;
    
    return 0;
}
/*
  NOTES :
    When used in declaration (string* ptr), it creates a pointer variable.
    When not used in declaration, it act as a dereference operator.
*/
