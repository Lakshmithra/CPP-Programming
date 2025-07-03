// Program to print traffic signal action using if..else

#include <iostream>
#include <cctype>     // for toupper()

using namespace std;

int main()
{
    char colour,R,Y,G;
    cout<<"Enter the traffic light colour (R,Y,G):"<<endl;
    cin>>colour;
    colour =  toupper(colour);

    if(colour=='R'){
        cout<<"STOP\n";
    }
    else if(colour=='Y'){
        cout<<"WAIT\n";
    }
    else if (colour=='G'){
        cout<<"Go\n";
    }
    else{
        cout<<"INVALID ! Enter a valid character (R,Y,G)";
    }
}
