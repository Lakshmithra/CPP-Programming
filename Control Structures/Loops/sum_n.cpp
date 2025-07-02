// Printing sum of first n natural numbers using loop

#include <iostream>
using namespace std;

int main() {
    
    int sum = 0 , n;
    cout<<"Enter a number:";
    cin>>n;
    
    for(int i = 1 ; i <=n ;i++){
        sum += i;
    }
    cout<<"Sum of "<< n <<" natural numbers :"<<sum<<endl;
    return 0;
}
