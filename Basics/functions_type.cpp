/* Program to define functions with return type 

   Syntax of a function with return type:

   return_type function_name(parameters) {
       statements
       return value;
   }

   - If a function just prints something and does not return a value,
     we use 'void' as the return type.
   - If a function returns a value, you should store that value in a 
     variable when calling the function from main().
*/

#include<iostream>
using namespace std;

// Defining functions
int mul(int x,int y){
     int z = x * y;
     return z;
}
int main(){

    int a = 8 , b = 18;
    int ans = mul(a,b);    // Calling the functions and storing the return value
    cout<<ans;             //Printing the result
    return 0;

}
