// This program simulates a countdown timer and prints a New Year message

#include<iostream>
using namespace std;
int main(){
    
    int countdown = 10;
    while(countdown > 0){
        cout<<countdown<<endl;
        countdown--;
    }
    cout<<"Happy New Year !\n";
    
    return 0;
}
