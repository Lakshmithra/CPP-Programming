// Program to demonstrate search and count-based STL algorithms (find, find_if, count, count_if)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector <int> num = {1,2,3,4,5};

    auto it = find(num.begin() , num.end() , 3);

    if(it != num.end()){
        cout<<"\nElement is found : "<<*it<<endl;
    }
    else {
        cout<<"\nElement not found !\n";
    }

    auto is_even = find_if(num.begin() , num.end() , [](int x){ return x % 2 == 0 ; } );

    if(is_even != num.end()){
        cout<<"\nFirst even number : "<<*is_even<<endl;
    }
    else {
        cout<<"\nEven number is not found !\n";
    }

    int value_count = count(num.begin() , num.end() , 3);

    cout<<"\nNumber of 3's : "<<value_count<<endl;

    int even_count = count_if(num.begin() , num.end() , [](int x){return x % 2 == 0 ;});

    cout<<"\nTotal number of even numbers : "<<even_count<<endl;

    return 0;
}


/*
    Program: Search and Count STL Algorithms (find, find_if, count, count_if)

    Description:
    This program demonstrates four commonly used STL algorithms that are useful 
    for searching and counting elements in containers like vectors.

    STL Algorithms Used:
    
    1. std::find(begin, end, value)
       - Searches for the first occurrence of a specific value.
       - Returns an iterator to the found element or end() if not found.

    2. std::find_if(begin, end, condition)
       - Searches for the first element that satisfies a custom condition.
       - Condition is passed as a lambda function.
       - Returns an iterator to the found element or end() if not found.

    3. std::count(begin, end, value)
       - Counts how many times a specific value appears in the container.
       - Returns an integer.

    4. std::count_if(begin, end, condition)
       - Counts how many elements satisfy a custom condition.
       - Condition is passed as a lambda function.
       - Returns an integer.

    About Lambda Function:
    
    - A lambda is an inline, anonymous function used to pass custom logic to algorithms.
    - Syntax: [](type param) { return condition; }
    - In this program:
        - Used to check if a number is even: (x % 2 == 0)

    Containers:
   
    - vector<int> is used in this program.
    - These algorithms work with all standard containers that support iterators.

    Essentials to Know:
    
    - These algorithms do not modify the container.
    - If no match is found, `find` and `find_if` return end(), while `count` and `count_if` return 0.
    - These improve code readability and eliminate manual looping for common tasks.
*/
