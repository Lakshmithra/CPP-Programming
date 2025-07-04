// Program to demonstrate basics of scopes

#include<iostream>
using namespace std;

// Global variables

int a = 10;
int b = 6;

int main(){

    int a = 5;                                // Local variable (shadows global 'a')
    cout<<"Local Scope  a: "<<a<<endl;
    cout<<"Global Scope a: "<<::a<<endl;     // Accessing global 'a' using scope resolution operator ::
    cout<<"Global Scope b: "<<b<<endl;      // Global 'b' is used (no local 'b')


    int c = 3;                                // Local variable inside main
    cout<<"Local Scope c: "<<c<<endl;
    {
        int d = 6;                               // Block Scope (also called Inner Scope or Nested Scope) - Variable inside inner block
        cout<<"Block Scope d: "<<d<<endl;
        cout<<"Local Scope c: "<<c<<endl;            // Inner function can also access the variable of outer function
    }
    // cout<<d<<endl;            error: 'd' was not declared in this scope|

    return 0;
}

/*
Recap of Scopes Used:

Variable   Scope Type       Accessible Where

a          Local & Global  Local 'a' is accessible only inside main().
                           Global 'a' is accessible using the scope resolution operator (::a).
                           
b          Global           Accessible anywhere in main()
c          Local            Accessible throughout main() and inside blocks
d          Block Scope      Only accessible inside the inner { } block
*/

