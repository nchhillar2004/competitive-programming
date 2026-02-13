#include <bits/stdc++.h>
using namespace std;

#define ll long long
const char nl = '\n';

// A. Young Physicist
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int xs = 0, ys = 0, zs = 0;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;

        xs += x;
        ys += y;
        zs += z;
    }

    if (xs==0 && ys==0 && zs==0) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}
