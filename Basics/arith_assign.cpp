// Basics of operators in C++  (Arithmetic and Assignment)

#include <iostream>
using namespace std;
int main() {
    int a = 18,b = 8;
    
    // Arithmetic operarators : e.g:- +,-,*,/,%
    
    cout<<"Addition           :"<<(a+b)<<endl;         
    cout<<"Subtraction        :"<<(a-b)<<endl;          
    cout<<"Multiplication     :"<<(a*b)<<endl;          
    cout<<"Division (quotient):"<<(a/b)<<endl;         
    cout<<"Modulus (remainder):"<<(a%b)<<endl; 
    
    cout<<"\n";
    
    //Assignement operators : e.g: = , compound operators (+=,-=,/=,%=,*=)
    
    int c = 26;           //Assigns the value to the left operand 

    cout<<"Value of c        :"<<c<<endl;
    c+=4;
    cout<<"After c+=         :"<<c<<endl;
    c-=3;
    cout<<"After c-=         :"<<c<<endl;
    c*=2;
    cout<<"After c*=         :"<<c<<endl;
    c/=5;
    cout<<"After c/=         :"<<c<<endl;
    c%=3;
    cout<<"After c%=         :"<<c<<endl;
    

    return 0;
}
