/* 
   Program to define variables using auto keyword.

   The 'auto' keyword tells the compiler to automatically deduce 
   the variable's type based on the value assigned to it.

   Note: 'auto' must be initialized at the time of declaration 
   because the compiler needs the value to infer the type.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

   auto intnum = 26;
   cout<<intnum<<endl;
   
   auto floatnum = 26.6f;
   cout<<floatnum<<endl;
   
   auto doublenum = 26.6656;
   cout<<doublenum<<endl;
   
   auto charc = 'L';
   cout<<charc<<endl;
   
   auto boolnum = true;
   cout<<boolnum<<endl;
   
   auto stringname = string("Laksh");
   cout<<stringname<<endl;

   return 0;
}
