/* Program to demonstrate implicit and explicit type conversion

   1. Implicit Conversion (Automatic type conversion by the compiler)
   2. Explicit Conversion (Manually done by the programmer):
      - Syntax (C-style): (new_type)expression
      - C++ style: static_cast<new_type>(expression)
*/

#include<iostream>
using namespace std;

int main(){

    // Converting int to a float - Implicit conversion

    int i = 10;
    float num = i;               // 'i' is automatically converted to float
    cout<<num<<endl;

    // Converting float to an int - Explicit conversion

    float j = 5.5;
    int n = ( int )j;                 // C-style cast
    int m = static_cast <int>(j);    // C++style cast  
    cout<<n<<endl;
    cout<<m<<endl;

   // 'j' is explicitly cast to int, which removes the decimal part
   
    return 0;
}
