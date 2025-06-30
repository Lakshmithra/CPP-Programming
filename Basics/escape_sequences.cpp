// Basics of escape sequences in C++

#include <iostream>
#include<string>
using namespace std;

int main() {
    
    // Newline
    
    cout<<"Hello C++ "<<endl;
    cout<<"Hello C++ \n";            // Adds a newline at the end of the string
    
    // Tab space
    cout<<"Hello    C++"<<endl;
    cout<<"Hello\t C++"<<endl;     //Adds a tab space
    
    // Backslash , single and double quotes
    
    cout<<"\\Hello World\\"<<endl;
    cout<<"\"Hello World\""<<endl;
    cout<<"\'Hello World\'"<<endl;
    
    // Quoted sentences
    
    cout<<"C++ said,\"Hello World !\""<<endl;
    cout<<"C++ said,\"It's raining !\""<<endl;
    
    // Single character
    
    cout<<"'C'"<<endl;
    cout<<"\'C\'"<<endl;
    
     return 0;
}
