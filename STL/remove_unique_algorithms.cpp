// Program to demonstrate removal-based STL algorithms: remove, remove_if, erase, and unique

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector <int> num = {1,1,2,3,3,3,4,4,5,5 ,-1,-2};

    cout<<"\nPrinting vector values\n";
    for(int i : num){
        cout<<i<<" ";
    }

    num.erase(remove(num.begin() , num.end() , 3) , num.end());
  
    cout<<"\nPrinting vector values (after erasing and removing)\n";
    for(int i : num){
        cout<<i<<" ";
    }

    auto ir = remove_if(num.begin() , num.end() , [](int x){return x % 2 == 0 ;});
    num.erase(ir , num.end());
  
    cout<<"\nPrinting vector values (after erasing and removing with condition)\n";
    for(int i : num){
        cout<<i<<" ";
    }

    auto it = unique(num.begin() , num.end());
    num.erase(it , num.end());
  
    cout<<"\nPrinting vector values (after unique)\n";
    for(int i : num){
        cout<<i<<" ";
    }

    return 0;
}

/*

    Description:
    This program shows how to remove elements using standard STL algorithms:
    remove, remove_if, and unique — combined with the container's erase function.

    These algorithms are generic and can be used with many STL containers 
    that support iterators (like vector, deque, list, etc.).

    STL Algorithms and Concepts:

    1. std::remove:
       - Rearranges the container by moving all elements that should stay to the front.
       - Returns an iterator to the new logical end.
       - Does not actually delete elements or reduce container size.
       - Needs erase to physically remove unwanted elements.

    2. std::remove_if:
       - Same as remove, but uses a condition to decide which elements to remove.
       - The condition is given using a lambda or function.
       - Also needs erase to complete the removal.

    3. std::unique:
       - Removes consecutive duplicate elements by rearranging them.
       - Only adjacent duplicates are removed (works best if sorted first).
       - Returns a new end iterator.
       - Must use erase to remove the trailing unwanted elements.

    4. erase (Member Function):
       - This is a function provided by containers like vector, list, deque.
       - Used to delete elements from the container using iterator positions.
       - Syntax: container.erase(start, end);
       - When used after remove, remove_if, or unique, it completes the cleanup.

    Important:
    - These algorithms don't shrink the container on their own.
    - Combining them with erase is necessary to truly remove elements.
    - This technique is often called the "erase-remove idiom".
*/

