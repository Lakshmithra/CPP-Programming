/* Program to define a function for factorial and permutaion
   Function - a set of statements which gets executed when it is called
    Permutation formula: nPr = n! / (n - r)!
*/

#include<iostream>
using namespace std;

/*
    auto factorial = [](int n) { ... };
    This is a lambda function that acts like a local factorial function, defined inside nPr.
*/


int nPr (int num , int r){

   auto factorial = [](int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
    };
  int permu = factorial(num)/factorial(num - r);
  return permu;
}

int main(){

      int result = nPr(5,3);
      cout<<result<<endl;
      
      /*
      factorial is defined inside nPr as a lambda, so it's local to nPr only — it cannot be accessed from main().
      
      int output = factorial(5);  
      cout<<output<<endl;

      error: ‘factorial’ was not declared in this scope
     */
}
