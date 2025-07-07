// Program to demonstrate accessing and modifying characters in a string using indexing and at() function


#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string name = "Moon";
    cout<<name<<endl;
  
    // To print first character of the string
  
    cout<<name[0]<<endl;
    
    // To print last character of the string
  
    cout<<name[3]<<endl;
    cout<<name[name.length()-1]<<endl;
    
    // To change specific character in a string 
  
    name[0] = 'N';
    cout<<name<<endl;
    
    //The <string> library also has an at() function that can be used to access characters in a string
    
    cout<<name.at(1)<<endl;
    cout<<name.at(0)<<endl;
    
    name.at(0)='M';
    cout<<name<<endl;
           
    return 0;
}
