// Program to demonstrate about this pointer in C++

#include <iostream>
using namespace std;

class myclass {
    
    private :
        int x;
        
    public :
        
        void display(){
            cout<<"This pointer\n";
        }
        
        void setter(int x){
            this->x = x;
        }
        
        int getter(){
            return x;
        }
};

int main(){
    
    myclass m;
    m.display();
    m.setter(26);
    int a = m.getter();
    cout<<"Value : "<<a<<endl;
  
    return 0;
}

/*
   Why we use the 'this' pointer in C++ :
  
  - 'this' is a special pointer available inside non-static (object-based) functions of a class.
  - It points to the same object that is calling the function.
  - We use 'this' when the function's input (parameter) has the same name as the class variable.
  - It removes confusion and clearly tells the compiler we are talking about the object's own variable.
  
  Example:
      void setValue(int x) {
          this->x = x;  // Left side: class variable
                        // Right side: function parameter
      }
*/
