// Program to track day sales for a shop

#include<iostream>
using namespace std;
int main(){

    float total = 0 , avg = 0,amount[7];
    for(int i = 0; i <= 6;i++){
        cout<<"Enter sales amount for day "<<(i+1)<<" : ";
        cin>>amount[i];
        total += amount[i];
    }
    avg = total/7;
    cout<<"Total sales amount for the week               :"<<total<<endl;
    cout<<"Average sales amount for each day of the week :"<<avg<<endl;
    return 0;
}
