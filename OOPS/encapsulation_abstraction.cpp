// Program to demonstrate Encapsulation and Abstraction in C+

#include <iostream>
using namespace std;

class CoffeeMachine {
    
    private :

    // Encapsulation: private data member

    int water = 0;      
    
    // Private function: not directly accessible from outside

    void boilwater(){
        cout<<"Water is boiling.....!\n";
    }
    
    public :
    
     // Public method to safely add water

    void addwater(int amount){
        water += amount;
    }

    // Public method to make coffee (abstracts internal steps)

    void makecoffee(){
        if(water <= 0){
            cout<<"Add water first.....!\n";
        }
        else {
            boilwater();    // Hidden internal process
            cout<<"Coffee is ready.....!\n";
        }
    }
};

int main(){
    
    CoffeeMachine c;

     // Trying to make coffee without water
    c.makecoffee();

     // Adding water and making coffee again
    c.addwater(50);
    c.makecoffee();


    return 0;
}

/*
      Encapsulation – Data Protection (hides access → who can access what)
      - Binds data (like 'water') and related methods (like 'boilwater') inside a class.
      - Hides internal details from outside the class using 'private'.
      - Real-life example: In a coffee machine, the water tank and heater are hidden; you can’t access them directly.
    
      Abstraction – Data Hiding (hides complexity → what you need to know)
      - Shows only essential features, hides inner complexity.
      - User interacts with simple functions like 'addwater()' and 'makecoffee()'.
      - Real-life example: You just press a button to make coffee, without knowing how it works inside.
    
      Together:
      - Encapsulation → protects the internal working.  
        e.g., Cold drink bottle is sealed — you can't touch what's inside.
      - Abstraction → gives a clean and simple interface.  
        e.g., You just drink — you don’t know how it's made.
*/
