// Program to demonstrate the use of a class in C++ to input and display personal details with formatting.

#include<iostream>
#include<iomanip>
using namespace std;

// Class definition for a person

class person {
public:

    // Member variables to store personal details

    string name , gender;
    int  age;
    float height , weight;

    // Member function to display the details

    void display(){
       cout<<endl<<"____Personal Details____"<<endl;
       cout<<"Name    : "<<name<<endl;
       cout<<"Age     : "<<age<<endl;
       cout<<"Gender  : "<<gender<<endl;
       cout<<fixed<<setprecision(2);
       cout<<"Height  : "<<height<<" cm "<<endl;
       cout<<"Weight  : "<<weight<<" kg "<<endl;
    }
};

int main(){

    // Creating an object of class person

    person p;

    cout<<"Enter the name of the person    : ";
    getline(cin, p.name);
    cout<<"Enter the age of the person     : ";
    cin>>p.age;
    cout<<"Enter the gender of the person  : ";
    cin>>p.gender;
    cout<<"Enter the height of the person  : ";
    cin>>p.height;
    cout<<"Enter the weight of the person  : ";
    cin>>p.weight;

     // Displaying the entered details

    p.display();

    return 0;
}
