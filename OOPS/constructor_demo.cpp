// Program to demonstrate default, parameterized, and overloaded constructors in C++

#include <iostream>
using namespace std;

class person {
   
   public : 
       int age;
       char grade;
       
       person(){
           age = 18;
           grade = 'F';
       }
    
       person(int a , char g){
           age = a;
           grade = g;
       }
 };
 
int main(){
    
    person p1;
    person p2 = {15,'B'};
    
    cout<<"Person 1 :\n\tAge : "<<p1.age<<"\n\tGrade : "<<p1.grade<<endl;
    cout<<"Person 2 :\n\tAge : "<<p2.age<<"\n\tGrade : "<<p2.grade<<endl;
  
    return 0;
}

/*
    Constructors in C++:
    
    - A constructor is a special function that runs when an object is created.
    - It has the same name as the class and no return type.
    
    Types of constructors:
    1. Default constructor – no parameters, sets default values.
    2. Parameterized constructor – takes arguments to set custom values.
    3. Constructor overloading – multiple constructors with different parameters.
    
    We can declare constructors inside the class and define them outside using the scope resolution operator (::).
*/
