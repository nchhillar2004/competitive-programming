#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, s, x;
    cin >> n >> s >> x;

    int sum = 0;

    for (int i = 0; i < n ; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum == s) cout << "YES" << "\n";
    else {
        while (sum != s) {
            if (sum > s) {
                cout << "NO" << "\n";
                break;
            }
            sum += x;
            if (sum == s) {
                cout << "YES" << "\n";
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
