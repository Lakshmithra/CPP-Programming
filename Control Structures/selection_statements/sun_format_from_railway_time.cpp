// Program to find sun format with railway timing 

#include <iostream>
using namespace std;
int main() {
    
    int time;
    cout<<"Enter your railway time:";
    cin>>time;
    
    if((0<=time)  && (time<1)){
        cout<<"Midnight\n";
    }
    else if((1 <= time) && (time < 5)){
        cout<<"Early morning\n";
    }
    else if((5 <= time) && (time < 9)){
        cout<<"Morning\n";
    }
    else if((9 <= time ) && (time < 12)){
        cout<<"Forenoon\n";
    }
    else if((12 <= time) && (time < 13)){
        cout<<"Noon\n";
    }
    else if((13 <= time) && (time < 16)){
        cout<<"Afternoon\n";
    }
    else if((16 <= time) && (time < 20)){
        cout<<"Evening\n";
    }
    else if((20 <= time) && (time < 24))  {
        cout<<"Night\n";
    }
    else{
        cout<<"Invalid ! Enter a valid time between 0 to 23\n";
    }
    return 0;
}
    
 
