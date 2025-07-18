// Program to demonstrate class template in C++

#include <iostream>
using namespace std;

template <typename T>
class display {

    public :
    void show(T value){
        cout<<"Value : "<<value<<endl;
    }
};

int main(){

    display <int> d;
    d.show(25);

    display <char> c;
    c.show('A');
    
    return 0;
}

/*
Class Template in C++

A class template allows the creation of generic classes that can work with any data type.
It helps avoid writing duplicate code for different data types.

Syntax:
template <typename T>
class ClassName {
    // members and functions using type T
};

Object Declaration Syntax in C++11:

1. Without constructor:
ClassName<datatype> objectName;

2. With constructor:
ClassName<datatype> objectName(arguments);

*/

