// Program to find greatest of three numbers using if...else

#include <iostream>
using namespace std;
int main() {
    
    int a,b,c;
    cout<<"Enter number 1:\n";
    cin>>a;
    cout<<"Enter number 2:\n";
    cin>>b;
    cout<<"Enter number 3:\n";
    cin>>c;
    
    if((a > b) && (a > c))
        {
            cout<<"The greater number is "<<a<<endl;
        }
        
    else if ((b > a) && (b > c))
        {
                cout<<"The greater number is "<<b<<endl;
        }
    else 
        {
            cout<<"The greater number is "<<c<<endl;
        }
      
    return 0;
}
    
 
