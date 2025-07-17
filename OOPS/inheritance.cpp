// Program to demonstrate types of inheritance in C++

#include <iostream>
using namespace std;

// Base class

class Father {

    // Private function - cannot be accessed outside this class

    private : 
    void marketing (){
        cout<<"I am a marketing expert !\n";
    }

    // Protected function - accessible in derived (child) class

    protected :
    void driving(){
        cout<<"I am an excellent driver !\n";
    }

    // Public function - accessible everywhere

    public :
    void name(){
        cout<<"I am father !\n";
    }
    
    void publicspeaking() {
        cout<<"I am a public speaker !\n";
    }
};

// Derived class (inherits publicly from Father)

class child : public Father {
    
    public :

    // Function with the same name as base class (overrides it)
    void name (){
        cout<<"I am child !\n";
    }

    void coding(){
        driving();                 // Calling protected function from base class
        cout<<"I am a good coder !\n";
    }
    
};

int main(){
  
    // Creating object of base class
  
     Father f;
     f.name();                  // Calls base class function
     f.publicspeaking();        // Accessible because it's public
    //  f.marketing();             Error: private function not accessible
    //  f.driving();               Error: protected function not accessible
    //  f.coding();                Error: Base class object can't access derived class members (Parent can't inherit from Child)

     
    // Creating object of derived class
  
    child c;
  
    c.name();              // Calls child's version of name()
    c.publicspeaking();    // Inherited from base class
    c.coding();            // Calls function defined in child class
    // c.marketing();      Error: private function not accessible
    // c.driving();        Error: protected function not accessible directly through object
    
   
    return 0;
}

/*
  Inheritance in C++:

  Inheritance allows one class (child/derived) to get features from another class (parent/base).

  Types of Inheritance:
  - Single Inheritance: One child gets features from one parent
  - Multilevel Inheritance: Child inherits from parent, and that child becomes parent to another
  - Hierarchical Inheritance: Many children get features from the same parent
  - Multiple Inheritance: One child gets features from more than one parent
  - Hybrid Inheritance: Combination of the above types

  Important Points:
  - Private members of the parent are not directly accessible in the child class and also through object
  - Protected members are accessible in the child class but no through object
  - Public inheritance keeps public and protected features usable in the child
  - Parent’s constructor runs before the child’s constructor
  - Child can have its own version of a function with the same name
*/
