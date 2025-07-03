// Program to find whether a person is eligible to vote or not

#include<iostream>
using namespace std;
int main(){

     int age;
     cout<<"Enter your age : ";
     cin>>age;

     if(age<=0){
        cout<<"INVALID AGE ENTERED !";
     }
     else if (age >= 18){
        cout<<"YOU ARE ELIGIBLE TO VOTE !";
     }
     else{
        cout<<"YOU ARE NOT ELIGIBLE TO VOTE !";
     }
     return 0;
}
