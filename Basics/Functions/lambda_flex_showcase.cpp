// Demonstrates defining and using lambda functions inside and outside main, with parameters and return types.

#include <iostream>
using namespace std;

auto display = [](){
    cout<<"I am lambda function outside main !\n";
};

int main() {
    
   []() {
      cout << "I am lambda function inside main !\n";
   } ();

   display();
   
   auto sum = [](int x , int y){
       cout<<"I am lambda function with parameters !\n";
       cout<< "Sum : "<< x + y ;
   };
   sum(8,18);
   
   auto divide = [](int x , int y) -> double {
        cout<<"\nI am lambda function with return type !\n";
        return (double) x / y ;
   };
   double d = divide(10,4);
   cout<<"Division : "<<d<<endl;
   
  return 0;
  

}

/*
    Lambda Functions in C++ (Quick Overview):

    - Anonymous functions defined using: auto name = [](params) -> return_type { body };
    - Can be defined inside or outside main(), but only called inside a function.
    - Often stored in variables using `auto` for reuse; can also be called immediately.
    - Useful for short, inline operations without declaring a full function.
    - Can be nested inside other functions or lambdas.
    - Return type is optional—compiler infers it if omitted.
*/
