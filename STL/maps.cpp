//  Program to demonstrate about maps in STL and its member functions

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

    // Syntax :- map <keytype , valuetype> mapname

    map <string , int> fridge = {{"Tomato" , 15} , {"Potato" , 12} };

    cout<<"\nEmpty ? "<<fridge.empty()<<endl;
    cout<<"\nSize : "<<fridge.size()<<endl;
  
    /*
      - Map elements cannot be accessed by position (no index like arr[0]).
      - Instead, access elements using their keys inside square brackets: map[key]
      - You can also use the .at(key) function to access values safely.
    */

    cout<<"\nPrinting accessed key values\n";
  
    cout<<"Tomato : "<<fridge["Tomato"];
    cout<<"\nPotato : "<<fridge.at("Potato")<<endl;

    fridge["Tomato"] = 18;
    fridge.at("Potato") = 15;

    cout<<"\nPrinting modified key values\n";
  
    cout<<"\nTomato : "<<fridge["Tomato"];
    cout<<"\nPotato : "<<fridge.at("Potato")<<endl;

    /*
        A map does not allow duplicate keys — insert() ignores repeated keys, 
       but using map[key] = value will overwrite the existing key's value.
    */

    fridge["Onion"] = 16;
    fridge.insert({"Carrot" , 20});
    fridge.insert({"Beans" , 14});
  
    cout<<"\nPrinting added key values\n";
  
    cout<<"\nOnion   : "<<fridge["Onion"];
    cout<<"\nCarrot  : "<<fridge["Carrot"];
    cout<<"\nBeans   : "<<fridge["Beans"]<<endl;

    fridge.erase("Potato");

    cout<<"\nIs Carrot there ? (yes) "<<fridge.count("Carrot")<<endl;
    cout<<"\nIs Potato there ? (no) "<<fridge.count("Potato")<<endl;

    /*
      - You can loop through a map using a range-based for loop.
      - Use 'auto' to let the compiler handle the key-value pair type.
      - Use .first to access the key and .second to access the value.
      - Map elements are automatically sorted in ascending order by key.
    */

    cout<<"\nPrinting map elements (keys and values) -> Ascending (default)\n";
    for(auto i : fridge){
        cout<<"Key : "<<i.first<<"\t Value : "<<i.second<<endl;

    }

    fridge.clear();
    cout<<"\nEmpty ? (after clearing) "<<fridge.empty()<<endl;

    map <string , int , greater<string>> frid = {{"Tomato" , 15} , {"Potato" , 12} , {"Beans" , 12} , {"Onion" , 14}};

    cout<<"\nPrinting map elements (keys and values) -> Descending\n";
  
    for(auto i : frid){
        cout<<"Key : "<<i.first<<"\t Value : "<<i.second<<endl;

    }

    return 0;
}

/*

  STL Container: map

  Overview:
  - A `map` is a sorted associative container that stores key-value pairs.
  - Each key is unique and automatically sorted in ascending order.
  - Internally implemented using a balanced binary search tree (typically Red-Black Tree).

  Syntax:
    map<key_type, value_type> name;
    map<key_type, value_type, greater<key_type>> name;  // For descending order

  Characteristics:
  - Automatically maintains sorted order by key (ascending by default).
  - Keys must be unique; inserting the same key again overwrites its value.
  - Values can be duplicated.
  - Cannot access elements using index numbers like arrays/vectors.
  - Use `.first` for key and `.second` for value while iterating.

  Commonly Used Functions:
  - insert({key, value})         → Inserts key-value pair (won't update existing key).
  - map[key]                     → Inserts if key not present; updates if it is.
  - at(key)                      → Accesses value at key; throws error if key not found.
  - erase(key)                   → Removes the pair with given key.
  - count(key)                   → Returns 1 if key exists, 0 if not.
  - size()                       → Returns the number of elements in map.
  - empty()                      → Checks whether map is empty.
  - clear()                      → Deletes all elements from the map.
  - begin() / end()              → Iterators for start and end of the map.
  - find(key)                    → Returns iterator to key if found; else map.end().
  - lower_bound(key)             → Iterator to first element not less than key.
  - upper_bound(key)             → Iterator to first element greater than key.
  - key_comp() / value_comp()    → Returns comparator used (e.g., less, greater).

  Traversal:
  - Use range-based loop with auto:
      for (auto i : map)
         i.first → key
         i.second → value

  Notes:
  - Keys are accessed directly, not by index.
  - All operations (insert, find, erase) have time complexity O(log n).
  - To store duplicate keys, use `multimap`.

  Tip:
  - Analogy: Treat `map` as a fridge where:
      - Key   = vegetable name (e.g., "Tomato")
      - Value = quantity (e.g., 3 kg)
    You check the quantity using the name, not position.

*/

