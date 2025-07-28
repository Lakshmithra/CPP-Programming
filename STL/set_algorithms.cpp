// Program to demonstrate set-based algorithms: union, intersection, difference, symmetric difference using vector

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

   vector <int> num1 = {1,5,4,3,8,2,4};
  
   sort(num1.begin() , num1.end());
   num1.erase(unique(num1.begin() , num1.end()) , num1.end());
  
   cout<<"\nPrinting vector 1 values\n";
   print(num1);
  
   vector <int> num2 = {2,5,7,3,1,6};
  
   sort(num2.begin() , num2.end());
   num2.erase(unique(num2.begin() , num2.end()) , num2.end());
  
   cout<<"\nPrinting vector 2 values\n";
   print(num2);

   vector <int> union_result (num1.size() + num2.size());

   auto it1 = set_union(num1.begin() , num1.end() , num2.begin() , num2.end() , union_result.begin());

   union_result.resize(it1 - union_result.begin());

   cout<<"\nPrinting union values\n";
   print(union_result);

   vector <int> inter_result (num1.size() + num2.size());

   auto it2 = set_intersection(num1.begin() , num1.end() , num2.begin() , num2.end() , inter_result.begin());

   inter_result.erase(it2 , inter_result.end());

   cout<<"\nPrinting intersection values\n";
   print(inter_result);

   vector <int> diff_result (num1.size());

   auto it3 = set_difference(num1.begin() , num1.end() , num2.begin() , num2.end() , diff_result.begin());

   diff_result.resize(distance(diff_result.begin() , it3));

   cout<<"\nPrinting difference values\n";
   print(diff_result);

   vector <int> sym_diff_result (num1.size() + num2.size());

   auto it4 = set_symmetric_difference(num1.begin() , num1.end() , num2.begin() , num2.end() , sym_diff_result.begin());

   sym_diff_result.resize(it4 - sym_diff_result.begin());

   cout<<"\nPrinting symmetric difference values\n";
   print(sym_diff_result);

  return 0;
}

/*
    STL Set-Based Algorithms
    
    These four algorithms perform common set operations on two sorted ranges:
    
    1. std::set_union
       - Combines the elements of both containers, excluding duplicates.
       - Result contains all unique elements from both containers.
       - Similar to mathematical union: A ∪ B.
    
    2. std::set_intersection
       - Extracts elements that are common to both containers.
       - Result contains only elements found in both ranges.
       - Similar to A ∩ B.
    
    3. std::set_difference
       - Returns elements from the first container that are not in the second.
       - Result is A - B (elements in A but not in B).
    
    4. std::set_symmetric_difference
       - Returns elements that are in either of the containers but not in both.
       - Result is (A - B) ∪ (B - A), excluding common elements.
    
    Syntax (same pattern for all four):
    set_operation(
        first1, last1,         // range of first sorted container
        first2, last2,         // range of second sorted container
        result_begin           // iterator where result is stored
    );
    
    Key Notes:
    
    - Both input containers must be sorted before using these algorithms.
    - The output container must be preallocated with enough space.
    - The return value is an iterator to the end of the written result.
    - Resize or erase should be used to remove unused trailing elements.
    - These algorithms do not modify the input containers.
    - All these algorithms are generic and work with any sorted containers 
      (e.g., vector, deque), not just std::set.
    - If using containers like vector (not set), you must manually remove
      duplicates using std::unique + erase before applying these algorithms.
*/

