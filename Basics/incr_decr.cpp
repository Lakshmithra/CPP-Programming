// Basics of increment and decrement operators

#include <iostream>
using namespace std;

int main() {
   
   // Pre increment operator
  
   int a = 10;
   cout<<++a<<endl;                                                //Increments the value and then prints
   cout<<"Pre incremented value  :"<<a<<endl;
   
   // Post increment operator
  
   int b = 10;
   cout<<b++<<endl;                                           //Prints the value and then increments
   cout<<"Post incremented value :"<<b<<endl;
   
   // Pre decrement operator
  
   int c = 10;
   cout<<--c<<endl;                                      //Decrements the value and then prints
   cout<<"Pre decremented value  :"<<c<<endl;
   
   // Post decrement operator
  
   int d = 10;
   cout<<d--<<endl;                                 //Prints the value and then decrements
   cout<<"Post decremented value :"<<d<<endl;
   
    return 0;
}
