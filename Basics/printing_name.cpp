// Program to print name with spaces

#include<iostream>
#include<cctype>           //For toupper
#include<string>
using namespace std;

int main(){

   string name ;
   cout<<"Enter your name:";
   getline(cin,name);               // For names with spaces
   name[0]=toupper(name[0]);       // changing first letter of name into uppercase
   cout<<"Hello , "<<name<<endl;

    return 0;
}
