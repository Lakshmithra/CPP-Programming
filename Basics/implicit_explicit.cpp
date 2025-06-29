// Implicit and Explicit type conversion

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    
    // Implicit type conversion
    
    int a = 25.6 + 9;  
    cout<<a<<endl;
    
    float b = 25.6 + 9;
    cout<<b<<endl;
     
    //Explicit type conversion
    
    float x = 10.12;
    cout<<int (x)<<endl;
    
    int y = 10.12;
    cout<<fixed<<setprecision(2)<<float(y)<<endl;
     
     /*
     We can convert int to float,
     but if we assign a decimal number to int,
     it loses the decimal part first.
     
     int y = 10.12;
     cout<<float(y)<<endl;
     
     Expected  output :- 10.12
     Resulting output :- 10.00
     */
     
    return 0;
}
