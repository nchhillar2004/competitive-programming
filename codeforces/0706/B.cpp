#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// B. Interesting drink
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, Q;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    cin >> Q;
    while (Q--) {
        int x;
        cin >> x;

        int cnt = upper_bound(v.begin(), v.end(), x) - v.begin();

        cout << cnt << nl;
    }

    return 0;
}
