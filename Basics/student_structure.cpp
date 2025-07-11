// Program to demonstrate how to define and use a structure to store and display student details in C++

#include<iostream>
#include<string>
using namespace std;

struct student {

    string name;
    int age;
    char grade;

};
int main(){

    student s;
    s.name = "Murugan";
    s.age  = 6;
    s.grade = 'A';

    cout<<"Name of the student  : "<<s.name<<endl;
    cout<<"Age of the student   : "<<s.age<<endl;
    cout<<"Grade of the student : "<<s.grade<<endl;

    return 0;

}

