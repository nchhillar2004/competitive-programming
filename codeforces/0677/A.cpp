#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Vanya and Fence
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, h, w = 0;
    cin >> N >> h;

    while (N--) {
        int x;
        cin >> x;
        w += 1;
        if (x>h) w+=1;
    }

    cout << w << nl;

    return 0;
}
