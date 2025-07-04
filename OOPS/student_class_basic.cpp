// Program to define a class 'student', assign values, and display the details

#include<iostream>
using namespace std;

// defining class

class student { 

 // access modifier

public:        

    // class members

    string name;                                       
    int rollno;

   // member function

    void display(){                                
        cout<<"Name   : "<<name<<endl;
        cout<<"Rollno : "<<rollno<<endl;
    }
};
int main(){
  
    // Defining object
  
    student s1; 
  
    cout<<"Enter the student name : ";
    cin.ignore();                          // clear leftover newline from input buffer         
    getline(cin,s1.name) ;                // take full line input (including spaces)

    cout<<"Enter the roll number : ";
    cin>>s1.rollno;

    // Calling member function
  
    s1.display(); 
    return 0;
}






