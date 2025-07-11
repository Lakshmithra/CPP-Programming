// Program demonstrating function calls with multiple and default parameters in C++.

#include<iostream>
using namespace std;

void function(string name = "Speed" , int age = 15){      // Function with default parameters
    cout<<"Name :  "<<name<< "\tAge : "<<age<<endl;      
int main(){
    
    function("Messi",25);          // Call with both arguments
    function("Neimer");            // Call with one argument (age uses default)
    function();                    // Call with no arguments (both use defaults)
    
    return 0;
    
}
/*
    - Defines a function with two parameters: name and age.
    - Default values ("Speed" and 15) are used when arguments aren't provided.
    - Demonstrates how default parameters reduce the need for overloaded functions.
    - Makes code cleaner and avoids redundancy.
    - Useful when some arguments are commonly used or optional.
*/
