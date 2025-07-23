// Program to demonstrate about queue in STL and its member functions

#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue <int> numbers;  // You cannot add elements to the queue at the time of declaration

    cout<<"Empty queue : "<<numbers.empty()<<endl;

   // To add elements to the queue, use the .push() function, after declaring the queue .The .push() function adds an element at the end of the queue:

   numbers.push(-1);
   numbers.push(1) ;
   numbers.push(2) ;
   numbers.push(4) ;

   cout<<"\nNon-Empty queue : "<<numbers.empty()<<endl;

   cout<<"\nSize of queue : "<<numbers.size()<<endl;

   // You cannot access queue elements by referring to index numbers
   // In a queue, you can only access the front element and back element, which is done using the .front() and .back() function

   cout<<"\nFront element (before) : "<<numbers.front()<<endl;
   cout<<"\nBack element (before)  : "<<numbers.back()<<endl;

   // You can also use the .front and .back function to change the value of the top and back element

   numbers.front() = 0;
   cout<<"\nFront element (after modifying)  : "<<numbers.front()<<endl;
   numbers.back() = 3;
   cout<<"Back element (after modifying) : "<<numbers.back()<<endl;

   // You can use the .pop() function to remove an element from the queue. This will remove the front element (the first and oldest element that was added to the queue)

   numbers.pop();
   cout<<"\nFront element (after popping)  : "<<numbers.front()<<endl;

   cout<<"\nPrinting queue values\n";

   while(!numbers.empty()){
      cout<<numbers.front()<<" ";
      numbers.pop();
   }

   queue <int> numswap;
  
   numswap.push(11);
   numswap.push(12);
   numswap.push(13);
   numswap.emplace(14);
  
   numbers.swap(numswap);

   cout<<"\nPrinting swapped queue values\n";
  
   while(!numbers.empty()){
      cout<<numbers.front()<<" ";
      numbers.pop();
   }

   return 0;
}

/*
    QUEUE IN C++ STL

    A queue is a First-In First-Out (FIFO) data structure.
    This means the first element that is inserted will be the first one to be removed.
    You can only insert elements at the back and remove or access elements from the front.

    Real-life example: A line at a ticket counter or a queue of people.
    The person who comes first gets served first, and others wait their turn.

    Queue uses containers like deque (default), list, etc., internally.

    Important functions in queue:

    push(value)       - Adds an element at the back (end) of the queue.
    pop()             - Removes the front element (oldest element).
    front()           - Returns a reference to the front element.
    back()            - Returns a reference to the last element.
    empty()           - Returns true if the queue is empty, false otherwise.
    size()            - Returns the number of elements in the queue.
    emplace(value)    - Efficiently adds an element to the back of the queue.
    swap(queue2)      - Swaps the contents of one queue with another.


    Notes:

    - You cannot access queue elements using index numbers like queue[0].
    - Only the front and back elements are accessible using front() and back().
    - The pop() function removes the front-most element only.
    - To print all elements, use a loop and pop each element until the queue is empty.
    - Once an element is popped, it is permanently removed from the queue.

    Queue is useful for scheduling tasks, handling requests in order, and other situations where order of processing matters.
*/




