#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Eating Game
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> v;
        int m = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            m = max(m, x);
        }

        int count = 0;
        for (int num : v) {
            if (num==m) count++;
        }
        cout << count << nl;
    }

    return 0;
}
