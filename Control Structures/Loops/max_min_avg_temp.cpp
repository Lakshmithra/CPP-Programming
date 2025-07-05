// Program to find maximum , minimum and average temperature recorded over a week

#include<iostream>
#include <climits>     // for INT_MIN and INT_MAX
using namespace std;
int main(){


    int temp[7],sum = 0;
    int max = INT_MIN , min = INT_MAX ;

    for(int i = 0; i < 7 ; i++){
        cout<<"Enter the temperature for day "<<i+1<<" : ";
        cin>>temp[i];
        sum += temp[i];
        if(temp[i]>max){
            max = temp[i];
        }
        if(temp[i]< min){
            min = temp[i];
        }

    }
    float avg = sum / 7.0;

   /* YOU CAN ALSO USE THIS METHOD AFTER GETTING ALL VALUES FROM THE USER

    int max = temp[0], min = temp[0];
    for(int i = 0; i < 7 ; i++){
    if(temp[i]>max){
            max = temp[i];
        }
        if(temp[i]< min){
            min = temp[i];
        }
    }
    */

    cout<<"Maximum temperature : "<<max<<endl;
    cout<<"Minimum temperature : "<<min<<endl;
    cout<<"Average temperature : "<<avg<<endl;

    return 0;
}
