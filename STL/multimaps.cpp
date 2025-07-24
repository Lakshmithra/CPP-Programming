// Program to demonstrate about multimaps in STL and its member functions

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

    multimap <string , int> marks = {{"Aleena" , 80} , {"Rajesh" , 85}, {"Dinesh" , 78} , {"Prabhu" , 91} , {"Tamil",95}};

    marks.insert({"Rajesh" , 89});

    for(auto i : marks){
        cout<<"Key : "<<i.first<<"\tValue : "<<i.second<<endl;
    }

    cout<<"\nRajesh appears "<<marks.count("Rajesh")<<" times !"<<endl;

    marks.erase("Dinesh");

    auto it = marks.equal_range("Rajesh");
    cout<<"\nAll values of Rajesh\n";

    for(auto i = it.first ; i != it.second ; i++){
        cout<<i->first<<" -> "<<i->second<<endl;
    }

    auto low = marks.lower_bound("Rajesh");
    auto high = marks.upper_bound("Rajesh");

    if(low != marks.end()){
        cout<<endl<<low->first<<" -> "<<low->second<<endl;
    }

    if(high != marks.end()){
        cout<<endl<<high->first<<" -> "<<high->second<<endl;
    }

    auto f = marks.find("Aleena");

    if(f != marks.end()){
        cout<<"\nAleena is found with value : "<<f->second<<endl;
    }
    else {
        cout<<"Aleena is not found : "<<endl;
    }

     auto fn = marks.find("Suresh");

    if(fn != marks.end()){
        cout<<"\nSuresh is found with value : "<<fn->second<<endl;
    }
    else {
        cout<<"\nSuresh is not found "<<endl;
    }

    return 0;

}

/*
  Multimap stores key-value pairs allowing duplicate keys.
  Elements are kept sorted by key.
  
  Important functions:
  - insert({key, value}): add element (duplicates allowed)
  - count(key): number of elements with that key
  - find(key): iterator to first element with key or end() if not found
  - erase(key): remove all elements with that key
  - erase(iterator): remove element at iterator
  - equal_range(key): pair of iterators to all elements with key
  - lower_bound(key): iterator to first element with key >= given key
  - upper_bound(key): iterator to first element with key > given key
  - size(): total elements count
  - empty(): true if empty
  - clear(): remove all elements
  
  Accessing elements:
  - Iterators act like pointers to pairs; use `it->first` and `it->second`
  - In range-for loops, use `p.first` and `p.second` for pairs
  
  Example:
  for(auto it = marks.begin(); it != marks.end(); ++it)
      cout << it->first << " -> " << it->second << endl;
  
  for(auto p : marks)
      cout << p.first << " -> " << p.second << endl;
*/
