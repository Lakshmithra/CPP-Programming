// Program demonstrates function overloading (compile-time polymorphism) using a real-life cooking example

#include <iostream>
#include <string>
using namespace std;

class Cook {
    
    public :
    
    void cook (){
        cout<<"I am cooking food !\n";
    }
    void cook (string item){
        cout<<"I am cooking "<<item<<endl;
    }
    void cook(string item , int n){
        cout<<"I am making "<<item<<" for "<<n<<" people"<<endl;
    }
};

int main(){
    
   Cook c;
   c.cook();
   c.cook("rice");
   c.cook("rice" , 5);
   
    return 0;
}

/*
      Compile-Time Polymorphism in C++:
    
      Polymorphism means one function behaves differently based on how it is called.
      Compile-time polymorphism happens when the compiler decides which function to run.
    
      Function Overloading:
      - Function Overloading in a Class = Compile-Time Polymorphism
      - Constructor Overloading = Compile-Time Polymorphism (since constructor is a special function)
      - Same function name with different types or numbers of parameters.
      - All overloaded functions must be in the same class or scope.
      - The compiler picks the right function during compilation.
    
      Real-life Analogy:
      - Imagine a person named "cook".
      - If you just say cook(), they make any food.
      - If you say cook("pasta"), they make pasta.
      - If you say cook("rice", 5), they make rice for 5 people.
      - Same name, different tasks — this is function overloading.
*/
