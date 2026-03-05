#include <bits/stdc++.h>
 
using namespace std;
 
const char nl = '\n';

// A. Presents
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp.insert({x, i+1});
    }

    for (auto it : mp) {
        cout << it.second << " ";
    }

    return 0;
}
