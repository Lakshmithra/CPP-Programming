// Program to demonstrate function template in C++

#include <iostream>
using namespace std;

template <typename T1, typename T2>
void sum(T1 x , T2 y){
    cout<<"Sum : "<<x+y<<endl;
}

int main(){
    
    sum(8,18);
    sum(1.2,5.2);
    sum(5,6.3);
    
   
    return 0;
}

/*
  Templates in C++:
  
  - Templates allow writing generic and reusable code for functions and classes.
  - They enable a single function or class to work with different data types without rewriting code.
  
  - Syntax for a single type template:
  
      template <typename T>
      ReturnType functionName(T param) {
          // function body
      }
  
  - For multiple different types, use multiple template parameters:
  
      template <typename T1, typename T2>
      ReturnType functionName(T1 param1, T2 param2) {
          // function body
      }
  
  - The compiler generates the appropriate function/class for the data types used in calls.
  - Templates increase code flexibility and reduce duplication.
*/
