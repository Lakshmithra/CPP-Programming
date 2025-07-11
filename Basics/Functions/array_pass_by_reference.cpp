// Program demonstrating how arrays are passed to functions and modified in C++

#include<iostream>
using namespace std;

// Function to display and modify array elements

void display (int arrayname[], int size){
    
     cout<<"\nElements of an array inside display function : \n";
     for(int i = 0 ; i <size ; i++){
         arrayname[i] *=  2;
         cout<<arrayname[i]<<"\t";
     }
}

int main(){
    
    int size;
    cout<<"Enter number of elements in the array : ";
    cin>>size;
    
    int array[50];
    for(int i = 0; i < size ; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }
    
    cout<<"\nElements of an array inside main function before calling display function : \n";
    for(int i = 0 ; i < size ; i++){
        cout<<array[i]<<"\t";
    }
    
     // Passing array to function
  
    display(array,size);
   
   cout<<"\nElements of an array inside main function after calling display function : \n";
    for(int i = 0 ; i < size ; i++){
        cout<<array[i]<<"\t";
    }
    
    return 0;
}  

/*
    Understanding Array Passing in C++:

    - Arrays are passed to functions by reference (actually as pointers).
    - This means the function receives the memory address of the original array.
    - Any change made to the array elements inside the function will reflect in the original array.
    - Inside the function, the array parameter can be written as either 'int arr[]' or 'int *arr'.
    - Since the array size isn't passed automatically, we include it as a separate parameter.
    - This method is useful for modifying arrays or processing large datasets without copying.
    - Array size inside parameter brackets is ignored; pass size separately as an argument.
*/
