// Program to demonstrate about sets in STL and its member functions

#include <iostream>
#include <set>
using namespace std;

int main(){

    // Syntax :- set <type> setname;

    set <char> letters = {'L','P','N','A','C','L'};

    //The .empty() function returns 1 (true) if the set is empty and 0 (false)

    cout<<"Empty ? (after declaring) : "<<letters.empty()<<endl;

   // To find out how many elements a set has, use the .size() function:

    cout<<"\nSize : "<<letters.size()<<endl;

    // You can loop through a set with the for-each loop

    cout<<"\nPrinting sorted (ascending- default) letters\n";
  
    for(char i : letters){
        cout<<i<<" ";
    }

    // To remove all elements from a set, you can use the .clear() function

    letters.clear();
    cout<<"\n\nEmpty ? (after clearing) : "<<letters.empty()<<endl;

    // By default, the elements in a set are sorted in ascending order.
    // If you want to reverse the order, you can use the greater<type> functor inside the angle brackets

    set <int , greater <int>> num = {1,2,3,4,5};

    cout<<"\nPrinting sorted (descending) numbers\n";
    for(int i : num){
        cout<<i<<" ";
    }

    // To add elements to a set, you can use the .insert() function

    num.insert(6);
    num.insert(8);

    // To remove specific elements from a set, you can use the .erase() function

    num.erase(3);
    num.erase(5);

    cout<<"\nPrinting numbers after inserting and erasing\n";
    for(int i : num){
        cout<<i<<" ";
    }

    auto it1 = num.find(6);

    if(it1 != num.end()){
        cout<<"\n\nFound : "<<*it1<<endl;
    }
    else {
        cout<<"\nNot found !\n";
    }

    /*
      find() returns an iterator to the element if found, else returns an iterator set.end()
       We compare with end() to check if the element exists
       Dereferencing without this check can cause errors if element is not found
   */
  
    auto it2 = num.find(3);

    if(it2 != num.end()){
        cout<<"\nFound : "<<*it2<<endl;   
    }
    else {
        cout<<"\nNot found !\n";            
    }

    cout<<"\nIs 8 there ? "<<num.count(8)<<endl;
    cout<<"Is 5 there ? "<<num.count(5)<<endl;


    set <int> numbers = {1,2,3,5,6,7};
    auto it3 = numbers.lower_bound(4);

    if(it3 != numbers.end()){
        cout<<"\n\nThe number greater than or equal to 4 : "<<*it3<<endl;
    }
    else{
        cout<<"\nLower bound not found !\m";
    }

    auto it4 = numbers.upper_bound(6);

    if(it4 != numbers.end()){
        cout<<"\n\nThe number greater than 6 : "<<*it4<<endl;
    }
    else{
        cout<<"\nUpper bound not found !\m";

    }

    set <int> numbers2 = {11,12,13,14,15};

    numbers.swap(numbers2);

    cout<<"\nPrinting swapped set 1 \n";
     for(int i : num){
        cout<<i<<" ";
    }

    cout<<"\nPrinting swapped set 2 \n";
     for(int i : numbers){
        cout<<i<<" ";
    }

    return 0;
}

/*
  SET IN C++ STL - SUMMARY AND IMPORTANT NOTES
  
  What is set:
  A set is an ordered container in C++ STL that stores unique elements in sorted order.
  It is implemented using a balanced binary search tree (typically a Red-Black Tree).
  All operations like insertion, deletion, and searching take logarithmic time (O(log n)).
  
  Functions used in this program:
  empty()         - Checks if the set is empty
  size()          - Returns the number of elements in the set
  insert()        - Adds a new element to the set
  erase()         - Removes a specific element from the set
  clear()         - Removes all elements from the set
  find()          - Returns an iterator to the element if found, otherwise returns end()
  count()         - Returns 1 if the element exists, otherwise returns 0
  lower_bound()   - Returns an iterator to the first element that is greater than or equal to the given value
  upper_bound()   - Returns an iterator to the first element that is strictly greater than the given value
  swap()          - Swaps the contents of two sets
  
  Other useful functions (not used in this program):
  begin(), end()      - Returns iterators to the beginning and end of the set
  rbegin(), rend()    - Returns reverse iterators
  emplace()           - Inserts a new element in-place (more efficient than insert)
  equal_range()       - Returns a pair of lower_bound and upper_bound for a given value
  
  Important tips:
  - Elements are always stored in sorted (ascending) order by default
  - To store in descending order, use set<Type, greater<Type>>
  - lower_bound() and upper_bound() only work correctly for sets sorted in ascending order
  - Do not access elements using index like set[i] as it is not allowed
  - Always use range-based for loops or iterators to access elements
*/
