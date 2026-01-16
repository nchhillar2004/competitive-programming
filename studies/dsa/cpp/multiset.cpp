#include <bits/stdc++.h>
using namespace std;

// Multiset - sorted order, can store duplicate elements also
int main() {
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(2); // {1, 1, 2}
    ms.emplace(1); // {1, 1, 1, 2}
    
    ms.erase(1); // all 1's erased
    
    // ms.find() returns the memory address, i.e. unique, so:
    ms.erase(ms.find(1)); // only one '1' is erased
    // rest all same as set
}
