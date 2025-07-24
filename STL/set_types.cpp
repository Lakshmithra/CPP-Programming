 // This program demonstrates three STL containers: set, multiset, and unordered_set.

#include <iostream>
#include <set>                  // For set and multiset
#include <unordered_set>        // For unordered set
using namespace std;

int main(){

    set <int> s = {6,4,7,2,2,9,9,3,1,8};

    cout<<"\nPrinting elements of a set(unique and sorted)\n";

    for(int i : s){
        cout<<i<<" ";
    }

     multiset <int> ms = {6,4,7,2,2,9,9,3,1,8};

    cout<<"\n\nPrinting elements of a multiset (sorted with duplicates)\n";

    for(int i : ms){
        cout<<i<<" ";
    }

    unordered_set <int> us = {6,4,7,2,2,9,9,3,1,8};

    cout<<"\n\nPrinting elements of a unordered set(unique and random)\n";

    for(int i : us){
        cout<<i<<" ";
    }

   return 0;

}

/*
 

  Key Differences:
 
  - set:
    * Stores only unique elements.
    * Automatically sorts elements in ascending order (default).
    * Fast search, insertion, and deletion using balanced binary search tree (O(log n)).

  - multiset:
    * Allows duplicate elements.
    * Elements are stored in sorted order (ascending by default).
    * Useful when frequency of elements matters.

  - unordered_set:
    * Stores only unique elements.
    * Does not maintain any order — elements appear in random order.
    * Internally uses hash table, providing average case O(1) time for insert, find, and erase.

  Common Notes:

  - These sets do not allow access by index (no operator[], no at()).
  - Use range-based for loop or iterators to access elements.
  - Insertions are done using insert().
  - Duplicates are automatically ignored in set and unordered_set.
  - unordered_set is faster than set for large data but offers no sorting.

  Tip:

  - Use set when you need sorted unique data.
  - Use multiset when duplicates and sorting matter.
  - Use unordered_set when only uniqueness matters and fast access is needed.
*/
