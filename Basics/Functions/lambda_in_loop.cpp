// Program to demonstrate passing and using a lambda function inside a loop

#include <iostream>
using namespace std;
int main(){
    
    auto cube = [](int x){
        cout<<x*x*x<<endl;
    };
    for(int i = 0 ; i < 5 ; i++){
        cube(i);
    }
    return 0;
}
