#include <bits/stdc++.h>
 
using namespace std;
 
const char nl = '\n';

// A. George and Accommodation
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, count = 0;
    cin >> N;

    while (N--) {
        int p, q;
        cin >> p >> q;

        if (q-p >= 2) count += 1;
    }

    cout << count << nl;

    return 0;
}
