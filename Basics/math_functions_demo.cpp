// Program to demonstrate common mathematical functions using <cmath> in C++

#include <iostream>
#include<cmath>            // For mathematical functions like sqrt, pow, log, etc.

using namespace std;
int main() {
    
    int x = 5 , y = 10;
    
     // max(a, b): returns the maximum of two values

    cout<<"Maximum : "<<max(x,y)<<endl;

     // min(a, b): returns the minimum of two values

    cout<<"Minimum : "<<min(x,y)<<endl;
  
    // round(x): rounds a floating-point number to the nearest integer

    float z = 26.666;
    cout<<"Round off : "<<round(z)<<endl;
    
     // sqrt(x): returns the square root of a number (x must be non-negative)

    int m = 5;
    cout<<"Square root: "<<sqrt(m)<<endl;
    
    // log(x): returns the natural logarithm (base e) of a number

    int n = 2;
    cout<<"Logarithm  : "<<log(n)<<endl;
    
     // pow(base, exponent): returns base raised to the power of exponent

     cout<<"Exponential power : "<<pow(n,m)<<endl;
    
    return 0;
}
