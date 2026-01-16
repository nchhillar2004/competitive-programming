#include <bits/stdc++.h>
using namespace std;

// Map - container, sorted key-value pairs, keys are unique
int main() {
    // { {key, value}, {key, value}... }
    map<int, int> mp; // {{1, 2}, {3, 4}}
    
    map<int, pair<int, int>> mpp1;
    /* {
        {1, {1, 2}},
        {2, {3, 4}}...
      }
    */
    
    map<pair<int, int>, int> mpp2;
    /* {
        {{1, 2}, 3},
        {{3, 4}, 5}...
      }
    */
    map<string, int> mp2; // {{'age', 16}, {'class', 10}...}

    mp[1] = 2; // {{1, 2}}
    // similarly
    mp.emplace(3, 4); // 3 is the key and 4 is the value
    mp.insert({5, 6}); // key: 5, val: 6

    for (auto it : mp) {
        cout << it.first << " " << it.second << ","; // {1 2, 3 4, 5 6}
    }
    cout << endl;
    
    cout << mp[1] << endl; // prints '2', i.e. value of '1'
    
    auto it = mp.find(1); // find memory address of the key-value pair with key '1'
    cout << it->second << endl; // 2
    // it->first   key
    // it->second  value

    mpp2[{3, 4}] = 5; // '{3, 4}' is key & '5' is the value
    cout << mpp2[{3, 4}] << endl; // 5
    
    auto it2 = mp.lower_bound(1);
    auto it3 = mp.upper_bound(3);

    // erase, swap, size, empty are same as others
}

