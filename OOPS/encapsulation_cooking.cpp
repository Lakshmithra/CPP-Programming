// Program to demonstrate encapsulation using a cooking example

#include <iostream>
#include <string>
using namespace std;

class chef{
    
    private:
    string secret_ingredients = "Magic Masala !";
    
    void prepare(){
        cout<<"Washing vegetables...........!\n";
        cout<<"Cutting vegetables...........!\n";
        cout<<"Boiling vegetables...........!\n";
    }
    
    void cook(){
        cout<<"Chef is Cooking with  "<<secret_ingredients<<endl;
    }
    
    public :
    void order(){
        prepare();
        cook();
        cout<<"The dish is ready !";
    }
};

int main(){
    
    chef dish;
    dish.order();
    return 0;
}

/*
    Encapsulation in C++ (Simple Explanation):
    
    Encapsulation means hiding the internal details (data and functions)
    and only exposing necessary parts using public methods.
    
     Cooking Analogy (Based on this program):
    - The class 'chef' is the **blueprint** that defines how to cook.
    - The object 'dish' is the **chef at work**.
    - The secret ingredient and cooking steps are **private** — hidden inside the kitchen.
    - The public function 'order()' is the **only way** to request the dish.
    
    So when we call 'dish.order()', it prepares and cooks internally,
    but we (the user) can't see or change how it works inside.
    
    This is encapsulation — protecting and hiding the internal process.
    */
    
    
     
