// Program for simple 1D , 2D array and character array

#include<iostream>
using namespace std;
int main(){

    int num1[3]={1,2,3};
    cout<<"1D Array\n";
    for(int i = 0; i < 3;i++){
        cout<<num1[i]<<" ";
    }
    cout<<endl<<endl;

    int num2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"2D Array\n";
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3;i++){
            cout<<num2[j][i]<<" ";
        }
        cout<<endl;
   }
   cout<<endl;

  /* Character array for storing mutiple characters (string)
     /0 - null character escape sequence at the end so size should be greater and should be enclosed within double quotes */
  
   char n = 'L';
   cout<<n<<endl;
   char m [] = "laksh";      //letting the compiler define the size
   cout<<m<<endl;

    return 0;
}
