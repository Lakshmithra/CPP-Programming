// Program to demonstrate about references 

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string name1 = "Moon";
    cout<<name1<<endl;
    
    /*
       Create a reference variable 'name2' that refers to 'name1'
       This does not create a new variable, just another name for 'name1'
    */

    string &name2 = name1;     
    cout<<name2<<endl;
    
    /* 
       Change the value using the reference
       Since 'name2' refers to 'name1', this will also change 'name1'
     */
     
    name2 = "Light";
    cout<<name1<<endl;
    cout<<name2<<endl;

    return 0;
}
    
    
