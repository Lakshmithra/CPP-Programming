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
  It is not a member of the class but can access private and protected member.
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
*/
