// This program simulates a door lock system where the user must enter the correct code to unlock the door

#include<iostream>
using namespace std;
int main(){
    
    const int doorcode = 1286;
    int usercode;
  
    cout<<"Enter the doorcode (4 digit) : ";
    cin>>usercode;
    
    if(usercode==doorcode){
        cout<<"The code is corect.The door will open now !\n";
    }
    else {
        cout<<"The code is incorrect.The door will not open !\n";
    }
    
    return 0;
}
