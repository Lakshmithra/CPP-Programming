// Program to demonstrate about static and dynamic arrays in C++

#include <iostream>
using namespace std;
int main() {
  
  // STATIC ARRAY :
  
  // Declare and initialize an integer array with 5 elements
  
  int arr[]={1,2,3,4,5};
  
   // Print the total size (in bytes) of the static array
   
   cout<<"Size of a static array : "<<sizeof(arr)<<endl;
  
   // WARNING: Accessing index 5 is out-of-bounds (undefined behavior)
   
  arr[5] = {48};// This is dangerous: arr[5] doesn't exist
  
   // Size of array stays the same — memory size doesn't change
   
  cout<<"Size of a static array : "<<sizeof(arr)<<endl;
  
 // Printing 6 elements (last one is out-of-bounds)
 
  for(int i = 0 ; i < 6 ; i++){
      cout<<"Array element "<<i+1<<" : "<<arr[i]<<endl;
  }

  // DYNAMIC ARRAY
  
    int n;
    cout<<"Enter number of elements of an array : ";
    cin>>n;
    
     // Allocate memory dynamically for n integers
     
    int *array = new int[n];
    for(int i = 0 ; i < n ; i++ ){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }
    
    
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<endl;
    }
    
    // Free dynamically allocated memory
  
    delete[] array;
    return 0;
}

/*

    1. Static vs Dynamic Array Size:
       When you declare: int arr[] = {1, 2, 3, 4, 5};
       - The size is fixed at compile time (in this case, 5 elements).
       - You cannot increase or decrease its size later.
       - Writing arr[5] = 48; is out-of-bounds (only indices 0 to 4 are valid).
         This causes undefined behavior. It might run, crash, or behave incorrectly.

    2. sizeof Does Not Change:
       - sizeof(arr) gives the total memory allocated at compile time.
       - For 5 integers, if each int is 4 bytes, sizeof(arr) = 20 bytes.
       - Even after assigning arr[5] = 48, sizeof(arr) remains the same.

    3. Why We Use new and delete:
       - If you want to create an array whose size is not known until runtime,
         you should use dynamic memory allocation using new.
         Example: int* arr = new int[n];
       - After using the dynamically allocated array, release the memory using:
         delete[] arr;

    4. Why Not Just Use int arr[n];:
       - In standard C++, you cannot declare an array using a variable size like int arr[n];
       - Some compilers may allow it as an extension, but it's not portable or standard.
       - Use new when the array size is not known at compile time.

    5. Common Use:
       - Dynamic memory is commonly used for arrays of unknown size
         and for building data structures like linked lists, trees, etc.
*/
