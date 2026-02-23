#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Anton and Danik
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, a = 0, d = 0;
    cin >> N;

    while (N--) {
        char x;
        cin >> x;
        if (x == 'A') a += 1;
        else d += 1;
    }

    if (a==d) cout << "Friendship" << nl;
    else cout << (a > d ? "Anton" : "Danik") << nl;

    return 0;
}
