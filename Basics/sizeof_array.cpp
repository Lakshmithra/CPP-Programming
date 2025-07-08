// Program to get the size of an array

#include<iostream>
using namespace std;
int main(){
    
    /* 
        sizeof() operator returns the size of a type in bytes.
        To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array
    */
    
    int num[5] = {1,2,3,4,5};

    cout<<sizeof(num)<<endl;
    cout<<sizeof(num)/sizeof(num[0])<<endl;
    
    return 0;
}
