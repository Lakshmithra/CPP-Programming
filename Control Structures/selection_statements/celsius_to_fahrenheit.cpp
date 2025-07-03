// Program to print temperature monitor (Celcius to Fahrenheit)

#include <iostream>
using namespace std;

int main()
{
    float C;
    cout<<"Enter the temperature (in *C) :";
    cin>>C;

    float F =(C * 9/5) + 32;
    cout<<"The temperature in Fahrenheit  :"<<F<<endl;
}
