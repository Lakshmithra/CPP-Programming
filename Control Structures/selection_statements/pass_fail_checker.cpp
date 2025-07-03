// Program to print name whether a student is passed or failed using if..else..

#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if((marks < 0) || (marks > 100)){
        cout<<"INVALID MARKS ENTERED !"<<endl;
    }
    else if(marks>=35){
        cout<<"YOU ARE PASSED !"<<endl;
    }
    else{
        cout<<"YOU ARE FAILED !"<<endl;
    }
  return 0;
}


