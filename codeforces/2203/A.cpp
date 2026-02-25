#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Towers of Boxes
int solve() {
    int n, m, d;
    cin >> n >> m >> d;

    if (m > d) return n;

    int towers = 0, max = (d/m) + 1;
    while (n>0) {
        n -= max;
        towers += 1;
    }
    return towers;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) cout << solve() << nl;

    return 0;
}
