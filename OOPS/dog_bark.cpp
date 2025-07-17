// Program to demonstrate two ways to define member functions in a class

#include <iostream>
using namespace std;

class Dog {
    public:
     void bark();
   
}; 
 void Dog::bark (){
        cout<<"Woof !\n";
    }
int main(){
    
    Dog d;
    d.bark();
    
    return 0;
}
 

/*
There are two ways to define a function in a class:

1. Inside the class:
   - The function is defined directly inside the class body.
   - Example:
     class Dog {
     public:
         void bark() {
             cout << "Woof!" << endl;
         }
     };

2. Outside the class:
   - The function is only declared inside the class.
   - It is defined outside using the scope resolution operator (::).
   - Example:
     class Dog {
     public:
         void bark();  // Declaration only
     };

     void Dog::bark() {
         cout << "Woof!" << endl;
     }

Both ways are correct. The second method is useful for keeping code clean.
*/
