// Program to demonstrate about vector in STL and its member functions with iterators

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // syntax :- vector < type > vectorname

    vector<int>numbers;

    // .empty function returns 1 if vector has no element

    cout<<"Empty vector : "<<numbers.empty()<<endl;

    // Assigning values to vector

    numbers.assign({1,2,3,4});

    // .empty function returns 0 if vector has atleast one element

    cout<<"Non empty vector : "<<numbers.empty()<<endl;

    // Finding length of vector using size()

    cout<<"Length of vector : "<<numbers.size()<<endl;

    // Accessing vector elements using index (like in arrays)

    cout<<"\nFirst element (using index) : "<<numbers[0]<<endl;
    cout<<"Middle element (using index): "<<numbers[2]<<endl;
    cout<<"Last element (using index)  : "<<numbers[3]<<endl;
   
    /* 
       .at() function is often preferred over square brackets [] because it lets you know if an error occurs.
        eg : If the element is out of range
        cout<<numbers[5];  -> prints garbage value
        cout<<numbers.at(5);

        error :- terminate called after throwing an instance of 'std::out_of_range'
                 what(): vector::_M_range_check: __n (which is 6) >= this->size() (which is 4)
                 
    */

    // Accessing vector elements using index (safe)

    cout<<"\nFirst element (using vector functions) : "<<numbers.front()<<endl;
    cout<<"Middle element (using vector funcions) : "<<numbers.at(2)<<endl;
    cout<<"Last element (using vector functions)  : "<<numbers.back()<<endl;

    // Modifying vector elements using at() (can use index[] but at is more safe)
  
    numbers.at(1) = 6;
    cout<<"\nChanged second element : "<<numbers[1]<<endl;

    // push.back() - adding elements at the end of vector
  
    numbers.push_back(7);
    numbers.push_back(9);

    // Printing vector elements using for loop and size()

    cout<<endl<<"Printing vector elements (for loop)"<<endl;
    for(int i = 0 ; i < numbers.size() ; i++){
        cout<<"Vector element "<<i+1<<" : "<<numbers[i]<<endl;
    }

    // pop.back() - removing elements at the end of vector

    numbers.pop_back();

    // Printing vector elements using for-each loop
  
    cout<<endl<<"Printing vector elements (for each loop)"<<endl;
    int count = 1;
    for(int i : numbers){
        cout<<"Vector element "<<count<<" : "<<i<<endl;
        count++;
    }


    // Printing inserted (using iterator) vector elements

    cout<<endl<<"Printing inserted vector elements "<<endl;

    // Syntax :- vector.insert(position_iterator,[count] , value);

    numbers.insert(numbers.begin() , 5);         // Insert at beginning
    numbers.insert(numbers.begin() + 2 ,3, 7);   // Insert three 7s at 3rd position
    numbers.insert(numbers.end() , 0);           // Insert at end

    count = 1;
    for(int i : numbers){
        cout<<"Vector element "<<count<<" : "<<i<<endl;
        count++;
    }

    numbers.erase(numbers.begin() + 1);                        // Erase 2nd element
    numbers.erase(numbers.begin() + 3 , numbers.begin() + 6);  //Erase 4th to 6th

    cout<<endl<<"Printing erased elements"<<endl;
    for(int i = 0 ; i < numbers.size() ; i++){
        cout<<"Vector element "<<i+1<<" : "<<numbers[i]<<endl;
    }

    numbers.clear();
    cout<<endl<<"Size of vector after clear : "<<numbers.size()<<endl;
      
    return 0;
}
  /*
      VECTOR
    
      A vector is a dynamic array (resizable) provided by the C++ STL (Standard Template Library).
      It can grow or shrink in size automatically during runtime.
      All elements must be of the same data type.
      Vectors store elements in contiguous memory like arrays.
    
      FUNCTIONS USED IN THIS PROGRAM
    
      empty()      : Checks if the vector is empty (returns 1 if true, 0 if not).
      assign({})   : Assigns multiple values to the vector at once.
      front()      : Returns the first element of the vector.
      at(index)    : Safely accesses an element at a specific index.
      back()       : Returns the last element of the vector.
      push_back()  : Adds an element at the end of the vector.
      pop_back()   : Removes the last element from the vector.
      insert()     : Inserts elements at a given position using iterator.
                     Syntax: insert(position, value) or insert(position, count, value)
      erase()      : Removes element(s) from a given position using iterators.
                     Syntax: erase(position) or erase(start, end)
      clear()      : Removes all elements in the vector.
      size()       : Returns the number of elements in the vector.
    
      NOTE ON ITERATORS
    
      Iterators are like pointers that point to positions in the vector.
      Functions like insert() and erase() need iterators to know where to work.
      Examples: begin(), end()
  */
