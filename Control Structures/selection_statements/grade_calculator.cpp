// Program to print grade using else..if..ladder

#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if((marks < 0) || (marks > 100)){
        cout<<"INVALID MARKS ENTERED !\n";
    }
    else if ((marks >= 91) && (marks <= 100)){
        cout<<"GRADE : A \n";
    }
    else if ((marks >= 75) && (marks <= 90)){
        cout<<"GRADE : B \n";
    }
    else if ((marks >= 50) && (marks <= 74)){
        cout<<"GRADE : C \n";
    }
    else if ((marks >= 35) && (marks <= 49)){
        cout<<"GRADE : D \n";
    }
    else {
        cout<<"YOU ARE FAILED !\n";
    }
    return 0;
    }



