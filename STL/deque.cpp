// Program to demonstrate about deque in STL and its member functions

#include <iostream>
#include <deque>
using namespace std;

template <typename T>
void printcontainer(T container){
    for(auto i : container){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    deque <int> numbers = {1,2,3,4};

    cout<<"\nPrinting elements of deque"<<endl;
    printcontainer(numbers);

    cout<<"\nEmpty deque ? : "<<numbers.empty()<<endl;

    cout<<"\nSize of deque : "<<numbers.size()<<endl;

    cout<<"\nFront element : "<<numbers.front()<<endl;
    cout<<"Back element  : "<<numbers.back()<<endl;
    cout<<"\nMiddle element (at) : "<<numbers.at(1)<<endl;
    cout<<"Middle element ([i]): "<<numbers[2]<<endl;

    numbers.push_front(0);
    numbers.push_back(5);

    cout<<"\nPrinting elements of deque (after pushing front and back)"<<endl;
    printcontainer(numbers);

    numbers.pop_back();
    numbers.pop_front();

    cout<<"\nPrinting elements of deque (after popping front and back)"<<endl;
    printcontainer(numbers);

    numbers.front() = 6;
    numbers.back() = 9;
    numbers.at(1) = 7;
    numbers[2] = 8;

    cout<<"\nPrinting elements of deque (after modifying)"<<endl;
    printcontainer(numbers);

    // emplace -> more efficient use
  
    numbers.emplace_front(5);
    numbers.emplace_back(10);
    numbers.emplace(numbers.begin()+ 2 , 3);

    cout<<"\nPrinting elements of deque (after modifying using emplace)"<<endl;
    printcontainer(numbers);

    numbers.erase(numbers.begin() + 2);
    numbers.insert(numbers.begin()+ 2 , 4);
    cout<<"\nPrinting elements of deque (after modifying using erase and insert)"<<endl;
    printcontainer(numbers);

    cout<<"\nPrinting deque elements (after modifying using resize)\n";

    deque <int> swapnum = {1,2,3,4} ;
    printcontainer(swapnum);

    swapnum.resize(3);       // Shrinks deque to size 3 (removes extra elements)
    printcontainer(swapnum);

    swapnum.resize(5 , 9);  // Increases size to 5; adds two 9s at the end
    printcontainer(swapnum);

    swapnum.resize(7);  // Increases size to 7; fills new elements with 0 (default)
    printcontainer(swapnum);

    cout<<"\nMaximum size a deque can hold (Platform dependent )  : "<<numbers.max_size()<<endl;

    numbers.swap(swapnum);
  
    cout<<"\nPrinting swapped deque1\n";
    printcontainer(numbers);
  
    cout<<"\nPrinting swapped deque2\n";
    printcontainer(swapnum);

    numbers.clear();
    cout<<"\nEmpty ? (after clearing) : "<<numbers.empty()<<endl;
    cout<<"\nSize (after clearing) : "<<numbers.size()<<endl;

    return 0;
}

/*
    DEQUE IN C++ STL

    A deque (Double Ended Queue) is a dynamic container that allows fast insertion and deletion 
    from both the front and the back. It combines features of vector, list, stack, and queue.

    - Supports random access using index like an array.
    - Can be initialized with elements at the time of declaration.
    - You can loop using index-based for loops.

    Important Functions in deque:

    push_back(val)        → Adds element to the back.
    push_front(val)       → Adds element to the front.
    pop_back()            → Removes element from the back.
    pop_front()           → Removes element from the front.
    front()               → Returns reference to first element.
    back()                → Returns reference to last element.
    at(index)             → Returns element at index with bounds checking.
    operator[]            → Returns element at index without bounds checking.
    size()                → Returns number of elements in the deque.
    empty()               → Returns true if the deque is empty.
    clear()               → Removes all elements from the deque.
    insert(pos, val)      → Inserts element at a given position.
    erase(pos)            → Removes element from the specified position.
    emplace_front(val)    → Efficiently inserts element at front.
    emplace_back(val)     → Efficiently inserts element at back.
    emplace(pos, val)     → Efficiently inserts element at position.
    resize(n)             → Resizes deque to n elements (default-initialized if larger).
    resize(n, val)        → Resizes and fills new slots with val.
    swap(dq2)             → Swaps content with another deque.
    max_size()            → Returns maximum number of elements it can hold (platform-dependent).
*/
