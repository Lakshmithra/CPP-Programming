// Program to design a simple calculator

#include<iostream>
using namespace std;
int main(){

     char c;       // Variable to check if the user wants to continue
     do{

        int n1 , n2 ,opt;

        cout<<"Enter the first number:";
        cin>>n1;
        cout<<"Enter the second number:";
        cin>>n2;

        cout<<"Select your option :\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division (quotient)\n\t5.Modulus (remainder)\n\n";
        cout<<"Enter the option (1/2/3/4/5):";
        cin>>opt;

        switch(opt){

            case 1:
                cout<<"Addition : "<<n1+n2<<endl;
                break;

             case 2:
                cout<<"Subtraction : "<<n1-n2<<endl;
                break;

             case 3:
                cout<<"Multiplication : "<<n1*n2<<endl;
                break;

             case 4:

                 if(n2!=0){
                    cout<<"Division : "<<n1/n2<<endl;
                 }
                 else{
                    cout<<"Division by zero is impossible"<<endl;
                 }
                 break;

             case 5:

                 if(n2!=0){
                    cout<<"Modulus : "<<n1%n2<<endl;
                 }
                 else{
                    cout<<"Modulus by zero is impossible"<<endl;
                 }
                break;

            default:
                cout<<"INVALID ! Enter a valid option (1,2,3,4,5)\n";

        }
            cout<<"Do you want to continue (y/n):";
            cin>>c;

        } while (c =='y' || c == 'Y');
         cout<<"Program ran successfully\n";

        return 0;
}
