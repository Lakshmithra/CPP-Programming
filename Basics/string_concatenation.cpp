// Program to demonstrate string concatenation

#include<iostream>
#include<string>
using namespace std;

int main(){

    // Method 1: Using '+' operator with space in between
  
    string fn1 = "Moon";
    string ln1 = "Light";
    string fullname1 = fn1 + " "+ ln1;
    cout<<fullname1<<endl;

    // Method 2: Using '+' operator without space
  
    string fn2 = "Moon";
    string ln2 = "Light";
    string fullname2 = fn2 + ln2;
    cout<<fullname2<<endl;

     // Method 3: Using .append() method
  
    string fn3 = "Moon";
    string ln3 = " Light";              // Space is included at the beginning
    string fullname3 = fn3.append(ln3);
    cout<<fullname3<<endl;

   return 0;
}



