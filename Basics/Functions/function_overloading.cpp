// Program demonstrating function overloading in C++.

#include <iostream>
using namespace std;

// Overloaded function for adding two integers

int numadd (int x , int y ){
    return x  +  y ;
}

// Overloaded function for adding two doubles

double numadd (double x , double y ){
    return x + y  ;
}

// Overloaded function for adding three integers

int numadd (int x , int y , int z){
     return x + y + z ;
}

int main(){

    int a = numadd (8,18);
    int b = numadd (8,18,26);
    double c = numadd (8.0 , 18.0);

    cout<<"Result of a : "<<a<<endl;
    cout<<"Result of b : "<<b<<endl;
    cout<<"Result of c : "<<c<<endl;

    return 0;
}
/*
    Function Overloading in C++:

    - Allows multiple functions with the same name but different parameter lists.
    - The compiler determines which function to call based on the number and types of arguments.
    - In this program:
        - `numadd(int, int)` adds two integers.
        - `numadd(int, int, int)` adds three integers.
        - `numadd(double, double)` adds two double values.
*/
