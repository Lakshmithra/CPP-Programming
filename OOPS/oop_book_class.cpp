#include <iostream>
#include <string>
using namespace std;

class Book {
  
   public: 
    int year;
    string title ;
    string author ;
   
};

int main(){
    
    Book B1;
    B1.year = 2017;
    B1.title = "PACHINKO";
    B1.author = "Min Jin Lee";
    
    Book B2;
    B2.year = 2016;
    B2.title = "IT ENDS WITH US";
    B2.author = "Colleen Hoover";
    
    cout<<"Book 1 :\n\tYear : "<<B1.year<<"\n\tTitle : "<<B1.title<<"\n\tAuthor : "<<B1.author<<endl;
    cout<<"Book 2 :\n\tYear : "<<B2.year<<"\n\tTitle : "<<B2.title<<"\n\tAuthor : "<<B2.author<<endl;
     
     return 0;   
}
