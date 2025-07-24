// This program demonstrates the use of priority_queue in STL.
// It shows both default max-heap and custom min-heap behavior.

#include <iostream>
#include <queue>
using namespace std;
int main(){

    // Creating a default max-heap priority queue

    priority_queue <int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(5);
    numbers.push(4);
    numbers.push(3);

    cout<<"\nSize : "<<numbers.size()<<endl;
    cout<<"\nEmpty ? "<<numbers.empty()<<endl;

    // top() gives the highest-priority (largest) element in max-heap

    cout<<"\nTop element (greater) : "<<numbers.top()<<endl;

    // Removing elements in descending order (max-heap behavior)

    cout<<"\nPrinting elements with high priority (descending order)\n";

    int c = 1;
    while (!numbers.empty()){
        cout<<"Element "<<c<<" : "<<numbers.top()<<endl;
        numbers.pop();
        c++;
    }

    // Creating a min-heap priority queue using greater<int>

    priority_queue<int, vector<int>, greater<int>> nums;

    nums.push(1);
    nums.push(2);
    nums.push(5);
    nums.push(4);
    nums.push(3);

    // Removing elements in ascending order (min-heap behavior)

    cout<<"\nPrinting elements with high priority (ascending order)\n";
    int d = 1;
    while (!nums.empty()){
        cout<<"Element "<<d<<" : "<<nums.top()<<endl;
        nums.pop();
        d++;
    }

    return 0;
}

/*

  Important Notes on priority_queue:

  - priority_queue is a container adapter (not a direct container).
  - Internally, it uses a vector and heap algorithms to maintain priority.

  Max Heap:
  - By default, it behaves like a max-heap.
  - Elements are not stored in sorted order.
  - top() always returns the largest element (highest priority).

  Min Heap:
  - To create a min-heap, use: priority_queue<int, vector<int>, greater<int>>
  - top() returns the smallest element in this case.

  General Properties:
  - Cannot access elements by index (no operator[] or at()).
  - Use push(), pop(), top(), size(), empty() functions.
  - Only the top element is accessible directly.
  - Useful in problems involving ordering by priority (e.g., scheduling, Dijkstra's algorithm).

*/
