#include <bits/stdc++.h>

using namespace std;

// A.  Helpful Maths
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    multiset<char> ms;

    for (char c : s) {
        if (c != '+')
            ms.emplace(c);
    }

    auto it = ms.end();
    it--;

    for (auto i = ms.begin(); i != ms.end(); i++) {
        if (i==it) {
            cout << *i;
        }
        else cout << *i << "+";
    }
}
