#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;

// Vectors - containers, dynamic
int main() {
    vector<int> v; // vector declaration

    v.push_back(10); // add new element to the end of v
    v.emplace_back(20); // faster push back

    v.insert(v.begin(), 5); // insert element to index '0', start of vector
    v.erase(v.begin()); // removes the beginning element
    // insert multiple elements to the end
    v.insert(end(v), {30, 40, 50});

    // print vector
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp;

    vp.push_back({1, 2});
    vp.emplace_back(1, 2); // no curly braces for pair in embrace_back

    vector<int> vec(4); // vector with size = 4, can be increased later
    vector<int> v1(5 ,100); // vector with 5 instances of '100': {100, 100, 100, 100, 100}
    vector<int> v2(v1); // copy v1 into v2

    // iterator - points to the memory location of an element
    vector<int>::iterator it = v.begin(); // Ex. {10, 20, 30, 40, 50}
    // begin points to the memory location of element '10'
    // * (star) is used to access the 'element' at that memory location
    cout << *(it) << endl; // prints the value at the memory location (it), i.e. '10'

    it++; // next memory loc, i.e. of '20'

    // NOTE: does NOT point to the last elements location
    vector<int>::iterator it1 = v.end(); // points after the last element's memory location
    // i.e. After the memory location of element '50'
    cout << "memory address: " << &it1 << ", element: " << *(it1) << endl;
    // to access the last element we need to do 'it1--'
    // OR use v.back()
    cout << v.back() << endl;

    // print vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // remove the element at index '1'. i.e. '20'
    v.erase(v.begin() + 1);
    cout << v.size() << endl; // vector size

    v.pop_back(); // pops last element

    /* SWAP vectors
     v1 = {10, 20};
     v2 = {30, 40};
     v1.swap(v2); 'v1' will be {30, 40} and v2 = {10, 20}
    */

    // clear entire vector
    v.clear();
    cout << v.empty() << endl; // returns 'true' if vector is empty
}
