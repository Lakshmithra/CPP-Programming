// Program to demonstrate about unordered map in STL and its member functions

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main(){

    unordered_map <string , int> fridge;

    fridge["Tomato"] = 15;
    fridge.insert({"Potato" , 20});

    cout<<"Tomato : "<<fridge["Tomato"]<<endl;
    cout<<"Potato : "<<fridge.at("Potato")<<endl;
  
    cout<<"\nDefault value (if not exists): "<<fridge["Beans"]<<endl;

    auto f = fridge.find("Potato");
  
    if(f!= fridge.end()){
        cout<<"\nPotato is found with value : "<<f->second<<endl;
    }
    else {
        cout<<"\nPotato is not found"<<endl;
    }

    auto fn = fridge.find("Radish");
  
    if(fn!= fridge.end()){
        cout<<"\nBeans is found with value : "<<fn->second<<endl;
    }
    else{
        cout<<"\nBeans is not found"<<endl;
    }

    fridge.erase("Beans");

    cout<<"\nIs tomato exists ? (yes) : "<<fridge.count("Tomato")<<endl;
    cout<<"\nIs Beans exists ? (no) : "<<fridge.count("Beans")<<endl;

    cout<<"\nSize : "<<fridge.size()<<endl;

    fridge.emplace("Onion" , 16);
    fridge.emplace("Carrot", 17);

    cout<<"\nPrinting elements of unordered map (using for each loop)\n";
    for(auto i : fridge){
        cout<<"Key : "<<i.first<<"\tValue : "<<i.second<<endl;
    }

    cout<<"\n\nPrinting elements of unordered map (using iterator)\n";
    for(auto i = fridge.begin() ; i != fridge.end(); i++){
        cout<<"Key : "<<i->first<<"\tValue : "<<i->second<<endl;
    }

    fridge.clear();
    cout<<"\nEmpty ? (after clearing) : "<<fridge.empty()<<endl;
  
    return 0;

}

/*
  unordered_map stores key-value pairs with **unique keys** using hashing.
  Elements are not sorted and order is not guaranteed.

  Important functions:
  - insert({key, value}): add element if key doesn't exist
  - emplace(key, value): efficient in-place insertion
  - operator[]: access/insert value; inserts default if key doesn't exist
  - at(key): access value; throws if key not found
  - find(key): iterator to key or end() if not found
  - erase(key): remove element with given key
  - erase(iterator): remove element at iterator
  - count(key): returns 1 if key exists, else 0
  - size(): total number of elements
  - empty(): true if container is empty
  - clear(): remove all elements

  Accessing elements:
  - Iterators: use `it->first` and `it->second`
  - Range-for loop: use `p.first` and `p.second`

  Example:
  for(auto it = fridge.begin(); it != fridge.end(); ++it)
      cout << it->first << " : " << it->second << endl;

  for(auto p : fridge)
      cout << p.first << " : " << p.second << endl;
*/
