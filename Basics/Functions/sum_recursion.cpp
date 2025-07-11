//  Program to find the sum of first n natural numbers using recursion.

#include<iostream>
using namespace std;

int sum (int n){
    if(n==0){       // Base case 
        return 0;
    }
    else {
        return n + sum(n-1);   // Recursive case
    }
}
int main(){
    
   int num ;
   cout<<"Enter the number : ";
   cin>>num;
   
   int result = sum (num);
   cout<<"Sum of first "<<num<<" natural numbers : "<<result<<endl;
   
   return 0;
   
}
/*
    Program to find the sum of first n natural numbers using recursion.

    - The function `sum()` calls itself to add all numbers from n down to 1.
    - Base Case: If n == 0, return 0 (end of recursion).
    - Recursive Case: n + sum(n - 1).
    - Example: sum(3) → 3 + sum(2) → 3 + 2 + sum(1) → 3 + 2 + 1 + sum(0) → 3 + 2 + 1 + 0 = 6.
    - Each call stores its result until the base case is hit, then they are added on the way back.
*/

