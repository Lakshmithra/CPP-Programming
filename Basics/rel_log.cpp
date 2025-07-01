// Basics of operators in C++ (Relational and logical)

#include<iostream>
using namespace std;
int main(){
    
    // Relational operators (comparison operators) : e.g:- >,<,>=,<=,==.!=
    
    int  a = 10, b = 15;
    
    cout<<"Relational Operators\n";
    cout<<"a == b     :"<<(a==b)<<endl;
    cout<<"a != b     :"<<(a!=b)<<endl;
    cout<<"a >= b     :"<<(a>=b)<<endl;
    cout<<"a <= b     :"<<(a<=b)<<endl;
    cout<<"a <  b     :"<<(a<b)<<endl;
    cout<<"a >  b     :"<<(a>b)<<endl;
    
  
    // Logical operators : e.g:- AND (&&), OR (||), NOT (!)
    
    cout<<"\nLogical Operators\n";
    cout<<"AND :"<<((a<b) && (b>a))<<endl;     // Use parentheses for clarity and correct evaluation
    cout<<"OR  :"<<((a<b) || (a>b))<<endl;
    cout<<"NOT :"<<(!(a<b))<<endl;
    
    return 0;
}
