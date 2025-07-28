// Program to demonstrate min max based STL algorithms: min, max, minmax, min_element, max_element, minmax_element

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int a = 10 , b = 20;

    cout<<"\nMinimum : "<<min(a,b)<<endl;
    cout<<"\nMaximum : "<<max(a,b)<<endl;

    auto m = minmax(a,b);
    cout<<"\nMin : "<<m.first<<"\tMax : "<<m.second<<endl;

    vector <int> num = {1,2,3,4,5};

    auto it1 =  min_element(num.begin() , num.end());
    auto it2 =  max_element(num.begin() , num.end());
  
    cout<<"\nMinimum element : "<<*it1<<endl;
    cout<<"\nMaximum element : "<<*it2<<endl;

    auto n = minmax_element(num.begin() , num.end());
    cout<<"\nMin : "<<*n.first<<"\tMax : "<<*n.second<<endl;

    return 0;
}

/*

    Description:
    This program demonstrates how to find minimum and maximum values using STL functions 
    on both individual variables and containers like vectors.

    STL Algorithms Used:

    1. std::min(a, b)
       - Returns the smaller of two values.
       - Important: Only works with two values, not containers.

    2. std::max(a, b)
       - Returns the larger of two values.
       - Important: Use for simple comparisons, not containers.

    3. std::minmax(a, b)
       - Returns both min and max as a pair.
       - Important: Use when you want both in a single step (non-container).

    4. std::min_element(begin, end)
       - Returns iterator to the smallest element in a container.
       - Important: Use *iterator to access the value.

    5. std::max_element(begin, end)
       - Returns iterator to the largest element in a container.
       - Important: Commonly used to find largest number in vector, array, etc.

    6. std::minmax_element(begin, end)
       - Returns a pair of iterators for smallest and largest elements.
       - Important: Efficient if both min and max are needed together.

    Essentials to Know:
    - These algorithms do not modify the container.
    - They work on any standard container that supports iterators.
    - min/max (not min_element) only compare two values, not full containers.
    - *iterator is needed to access the actual element value.
*/


