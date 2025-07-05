// Program to find the body mass index (BMI) of a person

#include<iostream>
using namespace std;
int main(){

    float height , weight;
    cout<<"Enter your weight (in kg) : ";
    cin>>weight;
    cout<<"Enter your height (in m)  : ";
    cin>>height;

    if((weight<=0)|| (height<=0)){
        cout<<"Invalid Input ! Enter valid positive values for height and weight "<<endl;
        return 1;
    }

    float BMI;
    BMI = weight / (height * height);
    cout<<"Your body mass index (BMI) : "<<BMI<<endl                                                                                                                            ;

    if(BMI <= 18.4){
        cout<<"Underweight\n";
    }
    else if((BMI >= 18.5) && (BMI <= 24.9)){
        cout<<"Normal\n";
    }
    else if((BMI >= 25.0) && (BMI <=39.9)){
        cout<<"Overweight\n";
    }
    else if (BMI >= 40.0){
        cout<<"Obese\n";
    }

    return 0;
}
