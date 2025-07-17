// Program to demonstrate friend function with a diary analogy

#include <iostream>
#include <string>
using namespace std;

class person {
    
    private :
    string name ;
    string note = "I am studying in PSG !\n";
    
    public :
    
    person (){
        name = "me";
    }
    
    person(string n){
        name = n;
    }
    
    friend void read_diary(person p);
};

void read_diary (person p){
    cout<<"I am  "<<p.name<<". This is my diary !\n";
    cout<<"Diary Says : "<<p.note<<endl;
}

int main(){
    
    person p;
    read_diary(p);
    
    person q("moon");
    read_diary(q);
    

    return 0;
}

/*
  Friend Function in C++:

  A friend function is declared inside a class using the 'friend' keyword.
  It is not a member of the class but can access private and protected members.
  Friend functions can also access private functions of a class.

  Syntax:
    class MyClass {
        private:
            int data;
        public:
            friend void showData(MyClass obj);
    };

    void showData(MyClass obj) {
        // Can access obj.data
    }

  Real-life Analogy:
  
  Think of a person who keeps a personal diary (private information).
  Normally, no one else can read it. But they trust a close friend 
  (the friend function) and give them permission to read it.
  So even though that friend isn't part of the family (class),
  they're allowed to see the secrets.
*/
