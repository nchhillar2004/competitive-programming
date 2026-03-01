#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Tram
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, m = 0, count = 0;
    cin >> N;

    while (N--) {
        int a, b;
        cin >> a >> b;

        count -= a;
        count += b;

        m = max(m, count);
    }

    cout << m << nl;

    return 0;
}
