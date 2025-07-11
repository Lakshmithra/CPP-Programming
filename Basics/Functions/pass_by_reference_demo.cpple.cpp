// Program demonstrating pass by reference and how it affects original values.

#include <iostream>
using namespace std;

void num1(int &x){

    // Modifies the original variable (pass by reference)
  
    x = x * x;
    cout<<"Value inside function num1 (x * x) : "<<x<<endl;
}
void num2 (int &y){

   // Only prints the squared value; does not modify the original variable
  
    cout<<"Value inside function num2 (y * y) : "<<y*y<<endl;    
}

int main() {

   // Pass by reference — modifies z
  
   int z = 10;
   cout<<"Original value of z before passing : "<<z<<endl; 
   num1(z);
   cout<<"Modified value of z after passing  : "<<z<<endl<<endl;

   // Pass by reference — only prints; no modification
  
   int v = 10;
   cout<<"Original value of v before passing : "<<v<<endl;
   num2(v); 
   cout<<"Value of v remains unchanged       : "<<v<<endl; 
 
    return 0;
    
}

/*
    Pass by reference:
    - Allows functions to access and modify the original variable using '&' in parameters.
    - 'num1' modifies the value, so changes reflect in the original variable.
    - 'num2' only prints a calculated value; no assignment means the original stays unchanged.
    - Reference alone doesn’t modify — modification depends on reassignment.
    - Useful when you want the function to affect the original data directly.
*/
