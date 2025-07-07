// Program to demonstrate basics of classes and objects

#include<iostream>
using namespace std;

// Defining class

class circle{

private:
    float pi = 3.14;

public:
    float r;
    circle(float radius){
       cout<<"I am the constructor of class circle !"<<endl;
       r = radius;
    }
    float area(){
        return pi*r*r;
     }
     float perimeter(){
       return 2*pi*r;
     }
};
int main(){

    float i;
    cout<<"Enter the radius of the circle : ";
    cin>>i;

  // Creating an object and passing value to constructor

  circle c(i);

  float a = c.area();
  cout<<"Area of the circle of radius "<<i<<"      : "<<a<<endl;
  float p = c.perimeter();
  cout<<"Perimeter of the circle of radius "<<i<<" : "<<p<<endl;

  return 0;

}

 /* cout << c.pi;

   Error: 'pi' is private within this context.

   It's generally better not to access universal constants (like π) through an object.
   Constants like π (3.14159...) don’t depend on any particular object — they're universal, not instance-specific.
   Use 'public static constexpr' for such constants instead of 'private' for better accessibility and cleaner design.

   Example:
   public:
       static constexpr float PI = 3.14;  // Universal constant

   Then you can access it directly using: circle::PI from main()
 */
