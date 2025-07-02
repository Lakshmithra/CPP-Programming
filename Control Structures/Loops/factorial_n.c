// Printing factorial of a number using loop

#include <iostream>
using namespace std;

int main() {
    
    int fact = 1 , n;
    cout<<"Enter a number:";
    cin>>n;
    
    for(int i = 1 ; i <=n ;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<": "<<fact<<endl;
    return 0;
}
