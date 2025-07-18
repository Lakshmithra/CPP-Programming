// Program to demonstrate run time polymorphism in C++

#include <iostream>
using namespace std;

class Chef {
    
    public :
       virtual void cook(){
            cout<<"Chef is cooking his special dish !\n";
        }
};

class Indian_chef : public Chef {
    
    public :
     void cook() override {
            cout<<"Indian Chef is cooking \"Biriyani\" !\n";
        }
    
};
class Korean_chef : public Chef {
    
    public :
     void cook() override {
            cout<<"Korean Chef is cooking \"Ramen\" !\n";
        }
    
};

int main(){
    
    Chef *c;
    
    int choice;
    cout<<"1-Indian Chef\n2-Korean Chef\nChoose your choice (1/2) : ";
    cin>>choice;
    
    if(choice==1){
        c = new Indian_chef();
        c->cook();
    }
    else if (choice==2){
        c = new Korean_chef();
        c->cook();
    }
    else {
        cout<<"Invalid Choice !";
    }
    
    delete c;
    return 0;
}

/*
      Polymorphism: Same function name behaves differently for different objects.
    
      Runtime Polymorphism = Inheritance + virtual + override + pointer/reference
    
      - Inheritance → Allows derived class to inherit and override functions  
      - virtual     → Tells compiler to choose function at runtime, not compile time  
      - override    → Ensures the derived class correctly overrides base function  
      - pointer     → Needed to call derived function using base class pointer  
    
      Optional: 'new' is used to create objects during program execution
    
      Example:
        Chef has cook(). IndianChef and KoreanChef override it.
        Chef* c = new IndianChef();
        c->cook(); // Calls IndianChef's cook() at runtime
    
      Real-life Analogy:
        You hire a chef and say "cook".  
        If the chef is Indian, he makes biryani.  
        If Korean, he makes ramen.  
        You don't know which chef was hired until runtime.
*/
