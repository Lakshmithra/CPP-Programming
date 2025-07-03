// Basics of break (loops and switch case) and continue statementsm(loops)

#include <iostream>
using namespace std;
int main() {
    
    // Printing using for loop
    
    for(int i = 1;i <= 10;i ++){
        cout<<i<<endl;
    }
    cout<<endl;
    
    // Break statement - Exits the loop
    
    for(int j = 1;j <= 10;j++){
        if(j==6){
            break;
        }
        cout<<j<<endl;
    }
    cout<<endl;

    // Continue statement - Skips the iteration
    
    for(int k = 1;k <= 10;k++){
        if(k==6){
            continue;
        }
        cout<<k<<endl;
    }
    return 0;
}
