#include <bits/stdc++.h>

using namespace std;

// A. Table with Numbers
void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (h > l) swap (h, l);

    int c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= h) c1++;
        if (arr[i] <= l) c2++;
    }

    cout << min(c1, c2/2) << "\n";
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
