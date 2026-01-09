#include <bits/stdc++.h>
using namespace std;

// Vectors - containers, dynamic
int main() {
    vector<int> v; // vector declaration
    
    v.push_back(1); // add new element to the end of v
    v.emplace_back(2); // faster push back
    
    vector<pair<int, int>> vp;

    vp.push_back({1, 2});
    vp.emplace_back(1, 2); // no curly braces for pair in embrace_back
    
    vector<int> vec(4); // vector with size = 4, can be increased later
    vector<int> v1(5 ,100); // vector with 5 instances of '100': {100, 100, 100, 100, 100}
    vector<int> v2(v1); // copy v1 into v2

    vector<int>::iterator it = v.begin();
}
