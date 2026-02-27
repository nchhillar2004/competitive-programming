#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// B. Deletion Sort
int solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int last = v[0];
    bool flag = false;
    for (int i = 1; i < n; i++) {
        if (last > v[i]) flag = true;
        else last = v[i];
    }

    if (!flag) return n;
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) cout << solve() << nl;

    return 0;
}
