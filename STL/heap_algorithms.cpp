// Program to demonstrate heap-based algorithms: make_heap, push_heap, pop_heap, sort_heap using vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void print(T num){
    for(auto i : num){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

   vector <int> num = {10,50,30,20};

   make_heap(num.begin() , num.end());
   cout<<"\nPrinting values (after make heap)\n";
   print(num);

   num.push_back(60);
   push_heap(num.begin() , num.end());

   num.push_back(40);
   push_heap(num.begin() , num.end());

   cout<<"\nPrinting values (after push heap)\n";
   print(num);

   pop_heap(num.begin() , num.end());
   num.pop_back();

   cout<<"\nPrinting values (after pop heap)\n";
   print(num);

   sort_heap(num.begin() , num.end());

   cout<<"\nPrinting values (sorted ascending)\n";
   print(num);


  return 0;
}

/*
  Heap Algorithms in STL
  
  These algorithms help manage heaps using any random-access container (like vector).
  They form the internal basis for priority_queue but can be used manually too.
  
  1. make_heap(begin, end)
     - Converts a range into a max-heap (largest element at the front).
     - Must be called before using other heap operations.
  
  2. push_heap(begin, end)
     - Assumes all elements except the last already form a valid heap.
     - Adds the last element to the heap, adjusting its position.
     - You must first add the element using push_back() before calling push_heap().
  
  3. pop_heap(begin, end)
     - Moves the largest element (front) to the last position.
     - You must remove it manually with pop_back() after calling this.
  
  4. sort_heap(begin, end)
     - Sorts the elements in ascending order.
     - Works only on a valid heap.
     - This destroys the heap property, so use only when done with heap operations.
  
  Key Notes:
  - All these functions work with containers like vector that provide random access.
  - Internally, they use max-heap (priority is the greatest element).
  - These functions do not create or return a separate data structure — they modify the container in-place.
  - Use these when custom behavior is needed instead of standard priority_queue.
  
  Special Note:
  - `sort_heap` always sorts in ascending order, which is opposite to the typical max-heap behavior.
*/
