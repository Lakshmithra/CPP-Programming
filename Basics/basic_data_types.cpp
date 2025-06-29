// Basic of data types in c++

#include <iostream>            // For input and output (cin, cout)
#include <iomanip>            // For setprecision (decimal formatting)
#include <string>            // For using string data type

using namespace std;
int main(){
   
   // char :- eg: A,B,C
   
   char i = 'L';
   cout<<"Char   : "<<i<<endl;
   
  // string :- eg:Laksh,Geetha,Ramesh
  
  string j = "Laksh";
  cout<<"String : "<<j<<endl;
  
  // int :- eg:2,56,0,-2
  
  int k = 26;
  cout<<"Integer: "<<k<<endl;
  
  // float :- eg:3.14,26.5,1.234569 (prints upto 6 decimal places)
  
  float m = 5.142456;
  cout<<"Float  : "<<m<<endl;
  
  // double :- eg:1.023456789123 (prints upto 12 decimal places)
  
  double n = 1.023456789123;
  cout<<fixed<<setprecision(12)<<"Double : "<<n<<endl;  

    return 0;
}
