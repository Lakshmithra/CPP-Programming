// Program to demonstrate the difference between C++ string class and C-style character array

#include <iostream>
#include<string>
using namespace std;

int main() {
    
    // C++ string object using the string class from <string>
    // 'string' is a class that supports various string operations

    string name1 = "Moon";
    cout<<name1<<endl;
    
    // C-style string using a character array
    // A char array is terminated with '\0' (null character)

    char name2[] = "Light";
    cout<<name2<<endl;

    return 0;
}
