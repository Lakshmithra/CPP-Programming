/*  
    Program to demonstrate structure in multiple variables
    SYNTAX :- 
        struct {
          int myNum;
          string myString;
        } myStruct1, myStruct2, myStruct3; 
        
     Multiple structure variables are separated with commas
*/

#include<iostream>
using namespace std;

struct person{    
    int age;            
    string name;         
} p1 , p2;                 

int main(){
    
   p1.age = 17;
   p1.name = "Moon";
   cout<<"Person 1 :\n"<<"Age : "<<p1.age<<endl<<"Name : "<<p1.name<<endl;
   
   p2.age = 26;
   p2.name = "Light";
   cout<<"Person 2 :\n"<<"Age : "<<p2.age<<endl<<"Name : "<<p2.name<<endl;
  
    return 0;
}
