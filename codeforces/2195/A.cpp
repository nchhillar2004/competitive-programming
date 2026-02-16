#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. Sieve of Erato67henes
string solve() {
    int N;
    cin >> N;

    bool flag = false;
    while (N--) {
        int x;
        cin >> x;

        if (x==67) flag = true;
    }

    return flag ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) cout << solve() << nl;

    return 0;
}
