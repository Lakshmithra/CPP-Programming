// Program to print simple login validator using if..else..

#include<iostream>
#include<string>
using namespace std;

int main(){

    string username = "Velayudan", password = "MURUGA26";
    string name , pass;
    cout<<"Enter your username :";
    cin>>name;
    cout<<"Enter the password  :";
    cin>>pass;

    if((name==username) && (pass==password)){
        cout<<"LOGIN SUCCESSFUL"<<endl;
    }
    else{
        cout<<"LOGIN FAILED"<<endl;
    }
    return 0;
}
