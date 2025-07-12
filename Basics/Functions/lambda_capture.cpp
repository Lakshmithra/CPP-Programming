// Program demonstrates lambda capture by value and by reference

#include <iostream>
using namespace std;
int main(){
    
    int x = 10;
    auto same = [=](){
        cout<<"Value inside lambda unmodified : "<<x<<endl;
    };
    x = 20;
    same();
    
    int y = 10;
    auto diff = [&](){
        cout<<"Value inside lambda modified   : "<<y<<endl;
    };
    y = 20;
    diff();
    
    return 0;
}

/*
   Capture List in Lambda:

   [=]  → Captures all **used** outer variables by **value** (copy)
   [&]  → Captures all **used** outer variables by **reference**

    Only the variables actually used inside the lambda are captured,
   even if not named in the capture list.
*/
