// Program to demonstrate STL sorting and rearranging algorithms (reverse, sort, nth_element, partial_sort, rotate)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector <int> num = {1,5,6,2,0,3,4,4};

    cout<<"\nPrinting vector numbers (unsorted)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    reverse(num.begin() , num.end());
  
    cout<<"\nPrinting vector numbers (reversed order)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    nth_element(num.begin() , num.begin() + 5 , num.end());
  
    cout<<"\nPrinting vector numbers (sorted 3th element)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    partial_sort(num.begin() , num.begin() + 4 , num.end());
  
    cout<<"\nPrinting vector numbers (partially sorted)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    sort(num.begin() , num.end());
  
    cout<<"\nPrinting vector numbers (sorted - ascending)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    rotate(num.begin() , num.begin() + 4 , num.end());
  
    cout<<"\nPrinting vector numbers (rotated order)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    sort(num.begin() , num.end() ,[](int a , int b){return a > b ;});
  
    cout<<"\nPrinting vector numbers (sorted - descending)\n";
    for(auto i : num){
        cout<<i<<" ";
    }

    return 0;
}

/*
    Program: STL Sorting and Rearranging Algorithms Demonstration

    Description:
    This program shows simple examples of common STL algorithms used to sort and rearrange 
    elements in containers like std::vector.

    STL Algorithms Used:

    1. std::reverse(begin, end)
       - Reverses the current order of elements.
       - Does NOT sort; it just flips the values.
       - To sort in descending order: first sort normally, then reverse.

    2. std::nth_element(begin, nth_position, end)
       - Partially rearranges the vector so the element at nth_position 
         is what it would be if fully sorted.
       - Elements before it are smaller; after it are larger.
       - Faster than full sorting.

    3. std::partial_sort(begin, middle, end)
       - Sorts only the first few elements [begin to middle).
       - Rest of the elements after middle are untouched.

    4. std::sort(begin, end)
       - Sorts all elements in ascending order (by default).
       - You can also give a custom condition for sorting in a different order.

    5. std::rotate(begin, middle, end)
       - Moves elements from [begin to middle) to the end.
       - Element at middle becomes the new first element.
       - Useful for circular shifting of values.

    6. std::sort with lambda comparator
       - You can use a lambda function to change sort order.
       - Example: [](int a, int b){ return a > b; } sorts in descending order.

    About Lambda Functions:

    - Lambdas are small anonymous functions written inside code.
    - Syntax: [](parameter) { return condition; }
    - Used to write custom conditions in sort, find_if, count_if, etc.

    Containers:

    - The program uses vector<int>.
    - All these algorithms work on any container that supports iterators.

    Important Points:

    - reverse just flips the values; it doesn’t sort.
    - For descending order, use custom comparator or reverse after sorting.
    - nth_element and partial_sort are useful when full sorting is not needed.
    - All functions shown here modify the container directly (in-place).
    - rotate returns an iterator, but we usually don’t need to store it.

*/
