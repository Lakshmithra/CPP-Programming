// Demonstrates passing a lambda to a function using auto (C++20 feature)


#include <iostream>
using namespace std;

void result (int x , int y ,auto func) {
    cout<<"Result : "<<func(x,y)<<endl;
}

int main() {
    
   auto add = [](int a , int b){
       return a + b;
   };
   auto mul = [](int a , int b){
       return a * b;
   };
   
   result(2,3,add);
   result(2,3,mul);
   
    return 0;
}

/*
    Global Function: result

    Syntax:
    void result(int x, int y, auto func)

    - Takes two integers and a callable (e.g., a lambda function).
    - 'func' holds the passed lambda.
    - The return type of 'func' is automatically inferred.
*/
