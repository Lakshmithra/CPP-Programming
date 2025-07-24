// Program to demonstrate about lists in STL and its member functions

#include <iostream>
#include <list>
using namespace std;

int main(){

    // Syntax :- list < type > listname;

    list <int> numbers;

    cout<<"Empty list : "<<numbers.empty()<<endl;

    numbers.assign ({1,2,3,4});

    cout<<"Non Empty list : "<<numbers.empty()<<endl;

    cout<<"Size of list : "<<numbers.size()<<endl;

    // Can't access list using index (can't use normal for loop , need to use for each loop)

    cout<<"\nPrinting elements of a list\n";
    for(int i : numbers){
       cout<<i<<endl;
   }

    // Accessing first and last elements of the list

    cout<<"\nFirst element : "<<numbers.front()<<endl;
    cout<<"Last element  : "<<numbers.back()<<endl;

    // Modifying first and last elements of the list

    numbers.front() = 8;
    numbers.back()= 7;

    cout<<"\nPrinting elements of a list after modification\n";
  
    for(int i : numbers){
       cout<<i<<endl;
   }

    numbers.push_front(5);
    numbers.push_back(6);

   cout<<"\nPrinting elements of a list after pushing front and back \n";
  
   for(int i : numbers){
       cout<<i<<endl;
   }

   numbers.pop_front();
   numbers.pop_back();

   cout<<"\nPrinting elements of a list after popping front and back \n";
  
   for(int i : numbers){
       cout<<i<<endl;
   }

   numbers.insert(numbers.begin() , 0);
   numbers.insert(numbers.end() , 5);

   auto it1 = numbers.begin();
   advance(it1 , 1);
   numbers.insert(it1 , 4);

    auto it2 = numbers.end();
    --it2;
    numbers.insert(it2 , 7);

    cout<<"\nPrinting elements of a list after insertion\n";

    for(int i : numbers){
       cout<<i<<endl;
   }

   auto it3 = numbers.begin();
   advance(it3 , 5);
   numbers.erase(it3);

   cout<<"\nPrinting elements of a list after deletion\n";

   for(int i : numbers){
       cout<<i<<endl;
   }

   // Removing elements equal to the value

    numbers.remove(4);

    cout<<"\nPrinting elements of a list after removing a value \n";
  
     for(int i : numbers){
       cout<<i<<endl;
   }

   numbers.sort();
    
    cout<<"\nPrinting elements of a list after sorting \n";
    
     for(int i : numbers){
       cout<<i<<endl;

   }
    
   numbers.clear();
   cout<<"\nSize of cleared list : "<<numbers.size()<<endl;

   return 0;
}

/*
    LIST IN C++ STL (std::list)

    std::list is a doubly linked list in C++ STL.
    It stores elements in non-contiguous memory with pointers to previous and next nodes.
    You can add and remove elements from both the beginning and the end of the list.

    Important Notes:

    - Cannot access elements using index (like list[i])
    - Cannot use normal for loop with index
    - Must use range-based for loop or iterator for traversal
    - Efficient for insertion and deletion at any position (especially middle)
    - Slower than vector for searching or accessing elements

    Commonly used functions (1-line summary):

    - empty()         → checks if the list is empty
    - assign()        → assigns values to the list
    - size()          → returns the number of elements
    - front()         → access/modify first element
    - back()          → access/modify last element
    - push_front()    → inserts element at the front
    - push_back()     → inserts element at the back
    - pop_front()     → removes element from the front
    - pop_back()      → removes element from the back
    - insert()        → inserts element at a given position (using iterator)
    - erase()         → removes element at a given position (using iterator)
    - remove(value)   → removes all elements equal to the given value
    - clear()         → removes all elements from the list
    - reverse()       → reverses the order of elements in the list
    - sort()          → sorts the list in ascending order
*/
