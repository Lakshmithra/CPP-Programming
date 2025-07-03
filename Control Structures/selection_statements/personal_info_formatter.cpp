// Program to print Personal Info Formatter

#include<iostream>
#include<cctype>           //For toupper
#include<string>
using namespace std;

int main(){

   string name ;
   cout<<"Enter your name:";
   getline(cin,name);             // For names with spaces
   name[0]=toupper(name[0]);     // changing first letter of name into uppercase
   
   int age;
   cout<<"Enter your age:";
   cin>>age;
   
   float height;
   cout<<"Enter your height (in cm):";
   cin>>height;
   
   char gender;
   cout<<"Enter your gender:";
   cin>>gender;
   gender = toupper(gender);

   cout<<endl<<"______Personal Details______"<<endl;
   cout<<"NAME      :"<<name<<endl;
   cout<<"AGE       :"<<age<<endl;
   cout<<"HEIGHT    :"<<height<<" cm"<<endl;
   cout<<"GENDER    :"<<gender<<endl;
   cout<<"____________________________"<<endl;

    return 0;
}
