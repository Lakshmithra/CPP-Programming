/* 
   Program to demonstrate the use of a for-each loop in C++

   A "for-each loop" (also known as a range-based for loop) is used 
   to iterate through elements in an array, string, vector, or other containers.

   Syntax:
       for (type variableName : containerName) {
           // code block to be executed using variableName
       }

   - 'type' is the data type of elements in the container.
   - 'variableName' is a temporary variable that holds each element.
   - 'containerName' is the array, string, vector, etc.

   This loop automatically goes through each element from beginning to end.
*/


#include<iostream>
#include<string>
using namespace std;
int main(){
    
    // Example with array
    
    int numbers[5] = {1,2,3,4,5};
    for(int i : numbers){
        cout<<i<<endl;
    }
    
    // Example with string
    
    string name = "Moonlight";
    for(char j : name){
        cout<<j<<endl;
    }
     
     return 0;
}
