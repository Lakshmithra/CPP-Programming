// Program to print bill payment system

#include<iostream>
#include<iomanip>       // For setprecision and fixed
using namespace std;
int main(){

     float bill,change,paid;
     cout<<"Enter your total bill :";
     cin>>bill;
     cout<<"Enter the paid amount :";
     cin>>paid;
     cout<<fixed<<setprecision(2);

     if(bill < paid){
        change = paid - bill;
        cout<<"The remaining change to return :"<<change;
     }
     else if(bill > paid){
        change = bill - paid;
        cout<<"The remaining amount to be paid:"<<change;
     }
     else if(bill == paid){
        change = 0;
        cout<<"Payment completed.No change";
      }

     return 0;
}
