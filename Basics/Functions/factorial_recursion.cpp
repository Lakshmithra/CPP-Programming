//  Program to find the factorial of a number using recursion.

#include<iostream>
using namespace std;

int factorial (int n){
    
    if(n == 0)      // Base case
    {
        return 1;
    }
    else 
    {
        return  n * factorial (n-1);      // Recursive call
    }
}
int main(){
    
   int num ;
   cout<<"Enter the number : ";
   cin>>num;
   
   int result = factorial(num);
   cout<<"Factorial of the number "<<num<<" : "<<result<<endl;
   
   return 0;
   
}

/*
    - The function `factorial()` calls itself to calculate factorial.
    - Base Case: If n == 0, return 1 (since 0! = 1).
    - Recursive Case: n * factorial(n - 1).
    - Each function call is pushed onto the call stack.
    - Once the base case is met, the values are returned and multiplied in reverse order.
    - Example: factorial(3) → 3 * factorial(2) → 3 * 2 * factorial(1) → 3 * 2 * 1 * factorial(0) → 3 * 2 * 1 * 1 = 6.
*/


