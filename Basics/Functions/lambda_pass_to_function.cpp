// Demonstrates passing a lambda function to another function using std::function

#include <iostream>
#include <functional>               // Required for std::function
using namespace std;

// Function that takes a lambda (or any callable) with no parameters and no return value

void display (function<void()> func){
    func();                           // Call the passed lambda function
}

int main() {

    // Define a lambda function that prints a message
  
    auto message = [](){           
        cout<<"I am lambda function passed to a function !";
    };
    display(message); // Pass the lambda function to 'display' which executes it

    return 0;
}

/*
    Global Function: display

    Syntax: void display(function<void()> func)

    - 'void': The function does not return anything.
    - 'display': Name of the function.
    - 'function<void()> func':
        - This is from the <functional> library.
        - Accepts any callable object (like a lambda) that takes no parameters and returns void.
        - 'func' is the name of the parameter that will hold the passed lambda or function.
*/
