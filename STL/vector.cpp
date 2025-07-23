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
    VECTOR IN C++ STL

    A vector is a dynamic array (resizable) provided by the C++ STL.
    It stores elements in contiguous memory like arrays but resizes dynamically.
    All elements must be of the same type.

    FUNCTIONS USED IN THIS PROGRAM

    - empty()        → Checks if the vector is empty
    - assign({})     → Assigns multiple values to the vector
    - front()        → Returns the first element
    - at(index)      → Safely accesses an element (throws error if out of bounds)
    - back()         → Returns the last element
    - push_back()    → Adds element at the end
    - pop_back()     → Removes the last element
    - insert()       → Inserts element(s) at a given position (using iterator)
    - erase()        → Removes element(s) from a position or range (using iterator)
    - clear()        → Removes all elements
    - size()         → Returns number of elements

    ADDITIONAL IMPORTANT FUNCTIONS (Not used in code but useful to know)

    - begin()        → Returns iterator to the first element
    - end()          → Returns iterator to the element past the last
    - rbegin()       → Returns reverse iterator starting from last element
    - rend()         → Returns reverse iterator past the first element
    - resize(n)      → Changes size of vector to hold n elements
    - capacity()     → Returns number of elements vector can hold without reallocating
    - shrink_to_fit()→ Requests the container to reduce capacity to fit its size
    - swap(v2)       → Swaps contents of two vectors

    NOTE ON ITERATORS

    Iterators are like pointers pointing to positions in the vector.
    Functions like insert(), erase(), begin(), end() all rely on iterators.

*/
