// Program to demonstrate STL algorithms for condition checking (any_of, all_of, none_of)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){


    vector <int> num = {1,2,3,4,5};

    bool is_any_even = any_of (num.begin() , num.end() , [](int x){return x % 2 == 0 ; });

    if(is_any_even){
        cout<<"\nAtlest one even number is found !\n";
    }
    else {
        cout<<"\nNo even number is found !\n";
    }

    bool is_all_even = all_of (num.begin() , num.end() , [](int x){return x % 2 == 0 ; });

    if(is_all_even){
        cout<<"\nAll numbers are even !\n";
    }
    else {
        cout<<"\nAll numbers are not even !\n";
    }

    bool is_none_even = none_of(num.begin() , num.end() ,[](int x){return x < 0 ; });

    if(is_none_even){
        cout<<"\nNumbers are not negative !\n";
    }
    else {
        cout<<"\nAtleast one number is negative !\n";
    }

    return 0;
}

/*
    Program: Condition-Based STL Algorithms (any_of, all_of, none_of)

    Description:
    This program shows how to use STL algorithms that check if container elements meet a condition.
    The condition is written using a lambda function.

    Algorithms Used:
    
    1. std::any_of(begin, end, condition)
       - Returns true if at least one element satisfies the condition.

    2. std::all_of(begin, end, condition)
       - Returns true only if all elements satisfy the condition.

    3. std::none_of(begin, end, condition)
       - Returns true if no elements satisfy the condition.

    Lambda Function:
    
    - A lambda is a short function written inside the algorithm call.
    - Syntax: [](type x) { return condition; }
    - It runs once for each element and checks if the condition is true or false.

    Containers:
   
    - These algorithms work with any STL container that has begin() and end().
    - This example uses vector<int>.

    Key Points:
    
    - These algorithms do not change the container.
    - They return a bool value (true or false).
    - Useful for checking rules or filtering data without writing loops.
*/
