// Program to demonstrate integer addition, string concatenation, and an invalid operation between string and int

#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int x = 5 , y = 10;
    int z = x + y;
    cout<<z<<endl;
    
    string a = "Moon";
    string b = "Light";
    string c = a + b;
    cout<<c<<endl;
    
    /*  string a = "10";
        int b = 5;
        string c = a + b;  (or)  int c = a + b;
        cout<<c;
        
        Error : invalid operands of types ‘std::string’ and ‘int’ to binary ‘operator+’
     */   
        
    return 0;
}
