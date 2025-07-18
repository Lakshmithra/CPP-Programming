// Program to demonstrate operator overloading by adding two objects in C++

#include <iostream>
#include <string>
using namespace std;

class Ingredient {
    
    public :
    string name;
    int quantity;
    
    Ingredient (string n , int q){
        name = n;
        quantity = q;
    }

     void display(){
        cout<<"Ingredient  : "<<name<<"\nQuantity    : "<<quantity<<" grams "<<endl;
    }
    
    Ingredient operator+ (const Ingredient& other){
        string combinedname = name + " + "+ other.name;
        int combinedquantity = quantity + other.quantity ;
        return Ingredient(combinedname , combinedquantity);
    }
};

int main(){
    
   Ingredient t ("Tomato" , 25);
   Ingredient o  ("Onion",50);
   
   t.display();
   o.display();
   
   Ingredient dish = t + o;     // We are adding two objects and storing it in another object
   dish.display();              // Displaying the added objects
 
    return 0;
}

/*
  Operator Overloading in C++

  Operator overloading lets objects behave like variables with operators
  (e.g., obj1 + obj2), enabling symbols like +, -, ==, etc. to work on objects.

  This helps because operators don’t work on user-defined objects by default.
  It improves code readability and clarity without adding new functionality.

  It is a type of Compile-Time Polymorphism and can be inherited or used in derived classes.

  The same behavior can be achieved with normal functions like add(), but
  operator overloading makes code more intuitive.

  Common overloadable operators: +, -, *, /, ==, !=, <, >, +=, -=

  Syntax:
      return_type operator<symbol>(const ClassName& obj);

  Real-life Analogy:
  Just like '+' adds numbers, operator overloading lets you use '+' to combine objects,
  such as mixing "Tomato + Onion" into a new dish, making code feel natural and simple.
*/

