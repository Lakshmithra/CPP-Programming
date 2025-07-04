/* Program to demonstrate string and integer conversions
    String to int using stoi()
    int to string using to_string()
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "81826";
    cout<<str<<endl;
   // cout<< str + 5 <<endl;       Error: can't add int directly to string
  
    // Converts string to int

    int a = stoi (str);
    int b = 5;
    int num = a + b;
    cout<<num<<endl;

    // Converts int to string

    int c = 55;
    cout<<c<<endl;
    cout<<c + 5 <<endl;

    string d = to_string(c);
    cout<<d<<endl;
  
    // cout<< d + 5 <<endl;     Error: can't add int directly to string

    /* Stoi throws an error if the string is not an valid integer

        string s = "laksh";
        int l = stoi(s);
        cout<<l<<endl;

        Runtime error: invalid_argument
    */
}
