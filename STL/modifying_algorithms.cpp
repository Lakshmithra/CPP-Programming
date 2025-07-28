// Program to demonstrate modifying STL algorithms (replace, replace_if, fill, fill_n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector <int> num = {0,1,0,2,4};

    cout<<"\nPrinting vector numbers\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    replace(num.begin() , num.end() , 0 , -1);
  
    cout<<"\nPrinting vector numbers (after replacing value)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    replace_if(num.begin() , num.end() , [](int x){return x < 0;} , 0);
  
    cout<<"\nPrinting vector numbers (after replacing with condition)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    fill(num.begin() , num.end() , 2);
  
    cout<<"\nPrinting vector numbers (after filling)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    fill_n(num.begin() , 3 , 0);
  
    cout<<"\nPrinting vector numbers (after filling with n)\n";
    for(auto i : num){
        cout<<i<<" ";
    }
    
    return 0;
}

/*
    Program: Modifying STL Algorithms (replace, replace_if, fill, fill_n)

    Description:
    This program demonstrates four commonly used STL algorithms that modify elements 
    in a container such as vector.

    STL Algorithms Used:
  
    1. std::replace(begin, end, old_value, new_value)
       - Replaces all occurrences of old_value with new_value in the given range.

    2. std::replace_if(begin, end, condition, new_value)
       - Replaces all elements satisfying the condition with new_value.
       - Condition is provided as a lambda function.

    3. std::fill(begin, end, value)
       - Assigns the specified value to all elements in the given range.

    4. std::fill_n(start_iterator, count, value)
       - Assigns the specified value to the first 'count' elements starting from start_iterator.

    About Lambda Function:
    
    - Used in replace_if to define the condition inline.
    - Syntax: [](type param) { return condition; }
    - Example here checks if elements are less than 0.

    Containers:
    
    - vector<int> is used.
    - These algorithms work with any container supporting iterators.

    Essentials to Know:
  
    - These algorithms modify the elements directly.
    - They return void.
    - Useful for quick and easy modification of container contents without manual loops.
*/

