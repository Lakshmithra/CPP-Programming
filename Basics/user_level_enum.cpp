// Program to demonstrate the use of enum for readable user level selection.

#include<iostream>
using namespace std;

enum level{

   BEGINNER = 1,
   INTERMEDIATE,
   ADVANCED

};
int main(){

    int user;
    cout<<"Choose your level \n";
    cout<<"1 - Beginner level \n";
    cout<<"2 - Intermediate level \n";
    cout<<"3 - Advanced level \n";
    cout<<"Enter your level : \n";
    cin>>user;

    if(user == BEGINNER){
        cout<<"YOU ARE ON BEGINNER LEVEL !";
    }
    else if (user == INTERMEDIATE){
        cout<<"YOU ARE ON INTERMEDIATE LEVEL !";
    }
    else if (user == ADVANCED){
        cout<<"YOU ARE ON ADVANCED LEVEL !";
    }
    else {
        cout<<"INVALID LEVEL ! Enter a valid level (1,2,3) ";
    }
    return 0;
}

/*
    enum gives names to fixed numbers to make code easier to read.
    Users enter numbers, but we use enum names in code for clarity.
    This helps avoid confusion and makes the code easier to understand.
    If numbers change, we update them only once in the enum.

    Syntax to define enum:
        enum EnumName {
            NAME1,
            NAME2,
            NAME3
        };
*/

