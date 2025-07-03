// Program to define functions

#include<iostream>
using namespace std;
 
void printarray (int num[3][3]){                   // void- function is not returning anything .This works for fixed dimensions

    for(int i = 0; i < 3 ; i++ ){
        for(int j = 0; j < 3 ; j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printarray(arr1);                                // Calling the function

    return 0;
}
