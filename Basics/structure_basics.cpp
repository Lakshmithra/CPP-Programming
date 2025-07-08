/* Program to demonstrate basics of structures (struct)

    - A structure is a user-defined data type.
    - It lets you group different types of variables under one name.
    - It is used to store related data together (like name, age, and marks of a student).
    - Structures are defined outside the main() function.
*/

#include<iostream>
using namespace std;

/*
   Syntax :-
   
    struct StructureName {
    dataType member1;
    dataType member2;         
   
  };
*/

struct mystruct{    
    int n;            
    string s;         
};                 

int main(){
    
    // Create a variable 'data' of type 'mystruct'
  
    mystruct data;
    
    // Assign values to the members of the structure
  
    data.n = 26;
    data.s = "laksh";
    
     // Print the values of the structure members
  
    cout<<data.n <<endl;
    cout<<data.s <<endl;

    return 0;
}
