#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. HQ9+
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (char c : s) {
        if (c=='H' || c == 'Q' || c=='9') {
            cout << "YES" << nl;
            return 0;
        } else continue;
    }

    cout << "NO" << nl;

    return 0;
}
