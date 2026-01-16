#include <bits/stdc++.h>
using namespace std;

// Set - container, sorted order, unique elements
// everything takes O(log n)
int main() {
    set<int> s;
    
    s.insert(2); // {2}
    s.emplace(1); // {1, 2}
    s.insert(2); // {1, 2}, '2' already exists so nothing happens
    s.insert(4); // {1, 2, 4}
    s.insert(3); // {1, 2, 3, 4}
    
    // s.find() return an 'iterator', pointing to the memory address/location of an element
    auto it1 = s.find(3);
    auto it2 = s.find(4);
    auto it3 = s.find(5);

    cout << *(it1) << endl; // 3
    cout << &it3 << endl; // memory location of the element 
    // if element is not in the set, returns the address after the last element
    
    s.erase(2); // erases the element '2'
    // also can be erased using iterator
    s.erase(it1); // element '3' will be erased
    
    s.insert(2);
    s.insert(3);
    // {1, 2, 3, 4}
    // erase elements in a range
    s.erase(it1, it2); // s.erase(start, end)
    // all elements will be erased within this range, 'it2' will not be erased
    
    for (int elmnt : s)
        cout << elmnt << " "; // {1, 4}

    // begin(), end(), size(), swap() and empty() are same as vector
}
