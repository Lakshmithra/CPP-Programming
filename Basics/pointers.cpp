// Program to demonstrate about pointers , pointer arithmetic , array pointer , char pointer

#include <iostream>
using namespace std;
int main(){
    
   int a = 10;
   cout<<"Value of a : "<<a<<endl;     // Printing value of 'a' using variable 
   cout<<"Address of a : "<<&a<<endl;  // Printing address of 'a' using ampersand '&'
  
   int b = 20;
   int *p = &b;
   cout<<"Value of b : "<<*p<<endl;    // Printing value of 'b' using pointer
   cout<<"Address of b : "<<p<<endl;   // Prining address of 'b' using pointer 'p'

   // Printing address of variables using ampersand '&'
  
   int  c = 30 , d = 40 , e = 50;
   cout<<"Address of c : "<<&c<<endl;
   cout<<"Address of d : "<<&d<<endl;
   cout<<"Address of e : "<<&e<<endl;
   
   // Printing address of variables using a single pointer
  
   int *ptr = &c;
   cout<<"Address of c : "<<ptr<<endl;
   cout<<"Address of d : "<<ptr-1<<endl;
   cout<<"Address of e : "<<ptr-2<<endl;
   
   cout<<endl<<"Printing values of array\n";
   int arr[] = {1,2,3,4,5};
   for(int i = 0 ; i < 5 ; i++){
       cout<<arr[i]<<endl;
   }
   
   // Pointer to store address of first element
   
   int *q = &arr[0];
   cout<<"Address of first element : "<<q<<endl;
   
   // Printing values of array using pointer
   
    for(int i = 0 ; i < 5 ; i++){
      cout<<*(q+i)<<endl;
  }
  
   char ch = 'a';
   char *y = &ch;
   cout<<"Address of char : "<<static_cast <void*>(y)<<endl;
   
    return 0;
}

/*
  POINTERS - KEY NOTES
  
  1. int *p = &a; → Declares a pointer storing the address of an integer variable.
  2. *p → Dereferences the pointer to access the value stored at the pointed address.
  3. &var → Gets the memory address of a variable.
  
  4. Pointer Arithmetic:
     - p + 1 moves to the next element in memory (based on data type size, e.g., +4 bytes for int).
     - p - 1 moves to the previous element.
     - These do not always mean the next/previous declared variable — just a shift in memory.
     - If variables are not stored contiguously (like c, d, e), pointer arithmetic may point to unrelated or unsafe memory.
     - Pointer arithmetic is only safe within arrays or the same allocated memory block.
  
  ARRAY POINTERS
  
  1. arr or &arr[0] → Gives the address of the first element in the array.
  2. You can use a pointer to iterate through the array:
     - arr[i] == *(arr + i)
     - Pointer-based looping avoids indexing syntax.
  3. Arrays are stored in continuous memory, which allows pointer arithmetic to work.
  4. Array names behave like constant pointers — you can't reassign them.
  5. Accessing out-of-bounds (e.g., arr[5] when size is 5) leads to undefined behavior.
  
  CHAR POINTERS
  
  1. char *y = &ch; → Points to a single character (not a string).
     - Printing with cout << y treats it like a C-string (prints until it finds '\0').
     - If there’s no null terminator nearby, it may print garbage or cause a crash.
  
  2. To safely print the address of a char pointer:
     - Use static_cast<void*>(y) to avoid string interpretation.
  
  3. char* is mostly used to point to character arrays (C-strings ending in '\0').
     - char *str = "hello"; → Safe for reading, but modifying is undefined behavior.
     - Use char str[] = "hello"; to safely modify individual characters.
  
  IMPORTANT
  
  - Pointer misuse can lead to crashes, garbage output, or memory corruption.
  - Always stay within valid bounds and know exactly what your pointer points to.
  - Avoid assumptions about variable layout unless you're working within arrays.
*/
