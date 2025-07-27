// Program to demonstrate iterators in STL and its utility functions

#include <iostream>
#include <string>
#include <bits/stdc++.h>     // Includes all standard C++ libraries (used mainly for convenience in coding practice)

using namespace std;
int main(){

    vector <int> num1 = {11,12,13,14,15} ;

    cout<<"\nPrinting vector values (reverse)\n";
    for(auto it1 = num1.rbegin() ; it1 != num1.rend() ; ++it1){
        cout<<*it1<<endl;
    }

    list <int> num2 = {1,2,3,4,5};

    auto it2 = num2.begin();
    advance(it2 , 2);
    *it2 = 16;

    cout<<"\nPrinting list values\n";
    for(auto it = num2.begin() ; it != num2.end() ; ++it){
        cout<<*it<<endl;
    }

    deque <int> num3 = {10,20,30,40,50};

    auto it3 = next(num3.begin() , 3);
    *it3 = 99;

    cout<<"\nPrinting deque values\n";
    for(auto it = num3.begin() ; it != num3.end() ; ++it){
        cout<<*it<<endl;
    }

    set <int> num4 = {11,22,33,44,55};

    auto it4 = num4.begin();
    auto it5 = num4.find(44);

   int dist = distance(it4 , it5);
    cout<<"\nDistance between begin and end (no of steps) : "<<dist<<endl;

    map <string , int> fridge = {{"Tomato" , 15} , {"Onion" , 20}};

    cout<<"\nPrinting key values (unmodified)\n";
    for(auto it : fridge){
        cout<<"Key : "<<it.first<<"\tValue : "<<it.second<<endl;
    }


    auto it6 = prev( fridge.end() ,2);
    it6->second = 25;
    auto it7 = next( fridge.begin() ,1);
    it7->second = 30;

    cout<<"\nPrinting key values (modified)\n";
    for(auto it : fridge){
        cout<<"Key : "<<it.first<<"\tValue : "<<it.second<<endl;
    }


    return 0;
}

/*
  C++ STL Iterators 

  Iterators :
    - Iterators are like smart pointers.
    - They help us move through elements in containers like vector, list, map, etc.
    - We can use them to read, change, or go to the next/previous element.
    - We define iterators using 'auto' or by specifying container type like container <type>::iterator iterator_name;

  Why do we need Iterators?
  - Different containers store elements differently, but iterators give us one common way to access them.
  - We can use the same logic (like loops, find, modify) for any container using iterators.

  Basic Syntax:
    auto it = container.begin();   // Points to first element
    *it;                           // Gets the value
    ++it;                          // Moves to next element
    --it;                          // Moves to previous element (if allowed)

  Member Functions of Containers:
    - begin(): returns iterator to first element
    - end(): returns iterator to position after last element
    - rbegin(): points to last element (reverse)
    - rend(): points before the first element (reverse)

  Types of Iterators and Where They Work:

    Iterator Type      |  Can Move   |  Can Read | Can Change | Used In
    -------------------|-------------|-----------|-------------|----------------------
    Input Iterator     | → forward   |   Yes     |    No       | cin, file input
    Output Iterator    | → forward   |   No      |    Yes      | cout, file output
    Forward Iterator   | → forward   |   Yes     |    Yes      | forward_list
    Bidirectional      | ← and →     |   Yes     |    Yes      | list, set, map
    Random Access      | ←, →, [ ]   |   Yes     |    Yes      | vector, deque, array

  Iterator Utility Functions (from <iterator>):

    - advance(it, n): move iterator by n steps (changes the iterator).
    - next(it, n): get new iterator n steps ahead (original doesn't change).
    - prev(it, n): get new iterator n steps back (original doesn't change).
    - distance(it1, it2): tells how many steps from it1 to it2.
    - swap(it1, it2): swaps the values at two iterator positions.

  Notes:
  - Some containers (like forward_list) don't support going backward (--it or prev).
  - Containers like set, map, list don’t support random access (no it + 2), so use advance, next, or prev instead.
  - Stack and queue do not support iterators.
*/
