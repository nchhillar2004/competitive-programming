#include <bits/stdc++.h>
 
using namespace std;
 
const char nl = '\n';

// A. Magnets
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, groups = 0, last = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (last != x)
            groups++;

        last = x;
    }

    cout << groups << nl;

    return 0;
}
