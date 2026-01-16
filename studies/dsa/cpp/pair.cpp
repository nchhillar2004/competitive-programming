#include <bits/stdc++.h>
using namespace std;

// Pairs - utility lib
int main() {
    pair<int, int> p = {1, 3}; // pair
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> np = {1, {3, 4}}; // nested pair
    cout << np.first << " " << np.second.first << " " << np.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}}; // pair arr
    cout << arr[1].first << endl;
    return 0;
}
