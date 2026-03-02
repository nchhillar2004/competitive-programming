#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. In Seach of an Easy Problem
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        int x;
        cin >> x;

        if (x==1) {
            cout << "HARD" << nl;
            return 0;
        }
    }

    cout << "EASY" << nl;

    return 0;
}
