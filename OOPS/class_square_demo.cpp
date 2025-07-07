// Program to demonstrate basics of classes and objects

#include<iostream>
using namespace std;

// Defining class

class square{

    float s;    // s is private by default

    public:

    /*
       Defining constructor - Executes automatically when the object is created
       It has the same name as that of class name
       Constructor that initializes the side length 's' with the given value
       Value passed to the class is received by the constructor to initialize data
    */

    square(float size){
         cout<<"I am the constructor of square !"<<endl;
         s = size;
     }
     float area(){
        return s*s;
     }
     float perimeter(){
       return 4*s;
     }
};
int main(){

    float i;
    cout<<"Enter the side of the square : ";
    cin>>i;

  // Creating an object and passing value to constructor

  square side(i);

  float a = side.area();
  cout<<"Area of the square of side "<<i<<"      : "<<a<<endl;
  float p = side.perimeter();
  cout<<"Perimeter of the square of side "<<i<<" : "<<p<<endl;

  // cout<<side.s;    Error :- s is private within this context

  return 0;

}
