// Program to demonstrate about exception handling in C++

#include <iostream>
using namespace std;

int main() {

    int age;
    cout<<"Enter your age : ";
    cin>>age;

    try {
        
         // If eligible, display access granted message
         
        if(age>=18){
            cout<<"Access accepted ! You are eligible !\n";
        }
        
        // If not eligible, throw the age as an exception
        
        else {
            throw (age);
        }
    }
    
    // Catch block handles the thrown age when it's less than 18
    
    catch(int age){
      
        cout<<"Access denied ! \nYou are "<<age<<" years old.\nYou are not eligible !\n";
      
    }
    return 0;
}

/*

    Exception Handling in C++

    Exception handling lets you catch and handle errors during runtime 
    so that your program doesn't crash unexpectedly.

    It uses three main keywords:

    → try    - Defines a block of code to test for errors.
    → throw  - Signals (throws) an exception when an error condition occurs.
    → catch  - Defines a block of code that handles the exception.

    Additional notes:

    - You can also use the throw keyword to throw custom error codes or reference numbers 
      (e.g., throw 505;) for better error organization and identification.

    - If you do not know the throw type used in the try block, you can use the 
      catch-all handler with ellipsis (...) inside the catch block. This will catch 
      any type of exception regardless of its type.

    Example:
      catch(...) {
          // Handle any exception here
      }
-
*/

