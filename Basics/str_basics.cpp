// Basics of Strings

#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string add = "8 + 18";
    cout<<add<<endl;
    
    string name = "Lakshmithra";
    cout<<name<<endl;
    
    // Length of the string
  
    cout<<name.size()<<endl;
    
    // Acessing characters of string using positive index
  
    cout<<name[0]<<endl;
    cout<<name[name.size()-1]<<endl;
    
     return 0;

}
/*  reverse (negative) indexing is not directly possible in C++ and C
    you can use this function instead of negativ indexing 
    s[s.length() - n]
. 
    cout<<name[-1]<<endl;                -> Invalid (undefined behaviour)
    cout<<name[name.size()-1]<<endl;     -> Valid
*/
