// This program reverses a number entered by the user

#include<iostream>
using namespace std;
int main(){
    
    int number ;
    cout<<"Enter a number : ";
    cin>>number;
    
    int reverse = 0;
    
    // Loop to reverse the digits of the number

    while(number > 0){
        
        // Get last digit and add to reverse

        reverse = reverse * 10 + number % 10 ; 
        
        // Remove last digit

        number = number / 10 ;
    
    } 

    cout<<"The reverse of the number : "<<reverse<<endl;
    return 0;
}
